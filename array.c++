#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr[0] << endl;
    cout << arr[4] << endl;
    arr[2] = 35;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int n;
    cin >> n;
    int inputArr[100];
    for (int i = 0; i < n; i++) {
        cin >> inputArr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << inputArr[i] << " ";
    }
    cout << endl;
    return 0;
}
