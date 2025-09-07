#include <iostream>
using namespace std;

int main() 
{
    typedef int arr[3];   // arr is now an alias for "int[3]"

    arr array1{ 1 , 1, 1};   // same as: int array1[3] = {1, 1, 1};

    cout << "Array output:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << array1[i] << " ";
    }
    cout << "\n";
}
