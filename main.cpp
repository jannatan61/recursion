#include <iostream>
using namespace std;

void print(int n, int i) {
    if (i > n)
        return;


    for (int s = 0; s < i - 1; s++)
        cout << " ";


    for (int j = 0; j < 2 * (n - i)+1; j++)
        cout << "*";

    cout << endl;

    print(n, i + 1);
}

int main() {
    int n;
    cin >> n;

    print(n, 1);

    return 0;
}
