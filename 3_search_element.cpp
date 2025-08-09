#include <iostream>
using namespace std;

int main() {
    int n, i, key, pos = -1;
    int a[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> key;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }
    cout << pos;
    return 0;
}