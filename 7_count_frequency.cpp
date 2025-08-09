#include <iostream>
using namespace std;

int main() {
    int n, i, j, count, seen;
    int a[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        seen = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                seen = 1;
                break;
            }
        }
        if (seen == 0) {
            count = 0;
            for (j = 0; j < n; j++) {
                if (a[j] == a[i]) {
                    count++;
                }
            }
            cout << a[i] << ": " << count << endl;
        }
    }
    return 0;
}