#include <iostream>
using namespace std;

int main() {
    int n, i;
    int a[100];
    int big, second;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    big = a[0];
    second = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > big) {
            second = big;
            big = a[i];
        } else if (a[i] > second && a[i] != big) {
            second = a[i];
        }
    }
    cout << second;
    return 0;
}