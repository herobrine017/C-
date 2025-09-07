//Namespace
#include <iostream>
using namespace std;

namespace First { // defined namespace here
    int value = 10;
}

namespace Second {
    int value = 20;
}

int main() {
    cout << First::value << endl;  // Access from First namespace
    cout << Second::value << endl; // Access from Second namespace
}
