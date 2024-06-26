#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (char ch : s) {
            if (ch == 'U') {
                count++;
            }
        }
        if (count % 2 == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
