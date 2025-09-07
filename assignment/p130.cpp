//setw()
#include <iostream>
#include <iomanip>   // for setw()
using namespace std;

int main() {
    cout << setw(10) << 123 << endl;
    cout << setfill('*') <<setw(10) << 123 << endl;//setfill('*') replaces spaces with * 
    cout << setfill(' ') <<setw(10) << 123 << endl;
    cout << setw(10) << 89 << endl;
    return 0;
}
