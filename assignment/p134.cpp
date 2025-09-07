//generalized catch block
#include <iostream>  
using namespace std;

int main()
{
    int numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0)
            throw 0;   // throwing an int exception
        else {
            result = numerator / denominator;
            cout << "result " << result << endl;
        }
        cout << "end";   // only runs if no exception is thrown
    }

    catch (float e) {
        cout << "in 1st catch \n";
    }
    catch (int* e) {
        cout << "denominator should not be 0\n";
    }
    catch (...) {   // generalized catch block------------------------------------------------ this one
        cout << "something went wrong need to check\n";
    }

    cout << "end of the program good bye\n";
}
