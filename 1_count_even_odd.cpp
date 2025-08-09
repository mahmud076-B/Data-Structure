#include <iostream>
using namespace std;

int main() {
    int n, i, num, even = 0, odd = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Even: " << even << " Odd: " << odd;
    return 0;
}