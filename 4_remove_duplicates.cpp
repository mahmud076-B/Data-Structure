#include <iostream>
using namespace std;

int main() {
    int n, i, j, same;
    int a[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        same = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                same = 1;
                break;
            }
        }
        if (same == 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}