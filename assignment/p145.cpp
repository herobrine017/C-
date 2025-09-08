//to append a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream onFile1;

    // Open file in append mode
    onFile1.open("file1.txt", ios::app);

    if (!onFile1) {
        cout << "Error opening file for appending." << endl;
        return 1;
    }

    onFile1 << "This line is appended.\n";
    onFile1 << "Another appended line.\n";

    onFile1.close(); // Close the file

    return 0;
}
