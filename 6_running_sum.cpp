#include <iostream>
using namespace std;

int main() {
    int n, i, total = 0;
    int a[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        total = total + a[i];
        cout << total << " ";
    }
    return 0;
}