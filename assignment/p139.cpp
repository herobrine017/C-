//File Handling
//Creating/Opening a file and closing file
//Note : openeing a file also means creating a file
#include <iostream>
#include <fstream>
using namespace std;  

int main()
{
    ofstream onFile1("file1.txt");//method 1

    ofstream onFile2;//method 2
    onFile2.open("file2.txt");

    onFile1.close();// close the file
    onFile2.close();// close the file
}