#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <iomanip> // for fixed precision
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks[3];

    Student(int r=0, string n="", int m1=0, int m2=0, int m3=0)
    {
        if(m1<0 || m1>100 || m2<0 || m2>100 || m3<0 || m3>100)
            throw domain_error("Marks must be between 0 and 100");
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    double average() const {
        return (marks[0]+marks[1]+marks[2])/3.0;
    }

    // Overload ++ to add bonus marks (+1)
    void operator++() {
        for(int i=0;i<3;i++) {
            if(marks[i]<100) marks[i]++;
        }
    }

    // Overload > to compare by average marks
    bool operator>(const Student &s) const {
        return this->average() > s.average();
    }
};

class Gradebook {
    vector<Student> students;

public:
    void addStudent(const Student &s) {
        for(auto &st : students) {
            if(st.rollNo == s.rollNo)
                throw runtime_error("Duplicate roll number!");
        }
        students.push_back(s);
    }

    void display() {
        if(students.empty()) throw logic_error("Gradebook is empty!");
        cout << fixed << setprecision(2);
        for(auto &st : students) {
            cout << "RollNo: " << st.rollNo << " Name: " << st.name 
                 << " Marks: " << st.marks[0] << " " << st.marks[1] << " " << st.marks[2] 
                 << " Average: " << st.average() << endl;
        }
    }

    Student* search(int roll) {
        for(auto &st : students) {
            if(st.rollNo == roll) return &st;
        }
        return nullptr;
    }

    void saveToFile() {
        ofstream fout("gradebook.txt");
        if(!fout) throw runtime_error("File error!");
        for(auto &st : students) {
            fout << st.rollNo << " " << st.name << " " 
                 << st.marks[0] << " " << st.marks[1] << " " << st.marks[2] << "\n";
        }
        fout.close();
    }

    void loadFromFile() {
        ifstream fin("gradebook.txt");
        if(!fin) return; // no file yet
        int r, m1, m2, m3;
        string n;
        while(fin >> r >> n >> m1 >> m2 >> m3) {
            try { addStudent(Student(r,n,m1,m2,m3)); }
            catch(...){} // ignore duplicates
        }
        fin.close();
    }
};

int main() {
    Gradebook gb;
    gb.loadFromFile();

    try {
        gb.addStudent(Student(1,"Alice",90,85,92));
        gb.addStudent(Student(2,"Bob",70,75,80));

        cout << "All Students:\n";
        gb.display();

        cout << "\nIncrementing marks of first student...\n";
        Student *s = gb.search(1);
        if(s) ++(*s);  // use overloaded ++
        gb.display();

        gb.saveToFile();
    } catch(exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
