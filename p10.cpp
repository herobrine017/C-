#include <iostream> 
#include <cmath>    
using namespace std;
int main() {
    double principal, rate, time; 

    
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate: ";
    cin >> rate;

    cout << "Enter the time in years: ";
    cin >> time;
    double amount = principal * pow((1 + rate / 100), time);
    double compoundInterest = amount - principal;
    cout << "The total amount after compound interest is: " << amount << endl;
    cout << "The compound interest earned is: " << compoundInterest << endl;

    return 0;
}