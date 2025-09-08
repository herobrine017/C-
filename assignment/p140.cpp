//File Handling
//Check the File for Errors
#include <iostream>
#include <fstream>
using namespace std;  

int main()
{
    ofstream onFile1("file1.txt");

    ofstream onFile2;
    onFile2.open("file2.txt");

    if (!onFile1)//method 1 :to check if file opened successfully 
    {
    cout << "Error opening the file." << endl;
    return 1;
    }

    if(!onFile2.is_open())//method 1 :to check if file opened successfully 
    {
        cout << "Error opening the file." << endl;
    return 1;
    }

    onFile1.close();
    onFile2.close();
}