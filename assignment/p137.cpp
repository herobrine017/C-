//nested try blocks
#include <iostream>
using namespace std;

int main() {
    // nesting of try/catch
    try {
        try {
            throw 20;   // Throwing an int exception
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw;      // Re-throwing the same exception (preserves value as 20 and type as int)
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }
    return 0;
}
