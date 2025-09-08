//File Handling
//Write in file
#include <iostream>
#include <fstream>
using namespace std;  

int main()
{
    ofstream onFile1("file1.txt");

    ofstream onFile2;
    onFile2.open("file2.txt");

    onFile1 <<"hello world\n";//writing to the file
    onFile1 <<"hi world";

    onFile1.close();
    onFile2.close();
}