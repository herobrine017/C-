//String function : strcpy()
#include <iostream>
#include <string.h>   // for strcpy
using namespace std;

int main() {
    char s1[] = "CDAC";
    char s2[10];

    strcpy(s2, s1);   // copy src into dest

    cout << "Source: " << s1 << endl;
    cout << "Destination: " << s2<< endl;
    return 0;
}
