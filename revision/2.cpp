#include <iostream>
using namespace std;

int main() {
    int i, n;
    float sum = 0, avg;
    float *p;

    cout << "How many marks would you like to enter: ";
    cin >> i;

    p = new float[i];

    for (n = 0; n < i; n++) {
        cout << "Enter marks " << n + 1 << ": ";
        cin >> p[n];
        sum += p[n];
    }

    cout << "You have entered: ";
    for (n = 0; n < i; n++) {
        cout << p[n];
        if (n < i - 1) cout << ", ";
    }
    cout << "\n";

    avg = sum / i;

    cout << "Sum of marks is: " << sum << "\n";
    cout << "Average marks is: " << avg << "\n";

    delete[] p;

    return 0;
}
