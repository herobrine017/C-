//full code for writing and reading file
#include <iostream>
#include <fstream>
using namespace std; 
int main()
{
    ofstream onFile1("file1.txt");
    if(!onFile1)
    {
        cout<<"not opened";
    }
    onFile1 << " hi guys ";
    onFile1 << " hello guys ";

    onFile1.close();


    ifstream inFile1("file1.txt");

    if(!inFile1)
    {
        cout<<"not opened for reading";
    }

    string line;
    while(getline(inFile1,line))
    {
        cout<<line<<endl;
    }

    inFile1.close();
}