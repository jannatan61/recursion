#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;


    if (n < 1 || n > 20) {
        cout << "The number must be between 1 and 20" << endl;
        return 0;
    }

    cout << factorial(n) << endl;

    return 0;
}
