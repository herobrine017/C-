//File Handling
//writing to a file then reading file
#include <iostream>
#include <fstream>
using namespace std;  

int main()
{
    ofstream onFile1("file1.txt");//creating a file

    if(!onFile1)//check if file is opened
    {
        cout<<"file not opened";
    }

    onFile1 <<"HELLO WORLD\n";//to write
    onFile1 <<"HI WORLD\n";

    onFile1.close();//closing file before opening for reading

    ifstream inFile1("file1.txt");//opening file for reading

    if(!inFile1)// to check if file opened for reading
    {
        cout<<"file not opened for reading ";
    }

    string line;// string to store each line to print

    // while(!inFile1.eof())//while loop till end of file
    // {
    //     getline(inFile1,line);
    //     cout<<line;
    // }

    while (getline(inFile1, line))
    {
    cout << line << endl;
    }


    inFile1.close();//close file after reading
}