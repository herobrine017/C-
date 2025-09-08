//open file for reading
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream inFile("file1.txt");  // Open file for reading

    if (!inFile)
    {
        cout << "Error opening file for reading." << endl;
        return 1;
    }
    inFile.close();                // Close after reading
    return 0;
}
