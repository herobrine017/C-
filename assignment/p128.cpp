//gets() and puts()
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[50];
    cout << "Enter a string: ";
    gets(str);
    puts(str); // prints string + newline(\n)
}
