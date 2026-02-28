#include <iostream>
using namespace std;

void print(int arr[], int n, int index) {

    if (index >= n)
        return;

    print(arr, n, index + 1);

    if (index % 2 == 0)
        cout << arr[index] << " ";
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    print(arr, n, 0);

    return 0;
}
