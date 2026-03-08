#include <iostream>
using namespace std;

void passByReference(int &x) {
    x = x + 5;
}

void passByValue(int y) {
    y = y + 5;
}

int main() {
    int val1, val2;
    
    cout << "Enter value 1 :\n";
    cin >> val1;
    
    cout << "Enter value 2: ";
    cin >> val2;
    
    passByReference(val1);
    passByValue(val2);
    
    cout << "The effect of passing value1 by reference is: " << val1 << "\n";
    cout << "The effect of passing value2 by value is :\n" << val2 << "\n";
    
    return 0;
}