#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, filtered;
    cin >> s;

    for (char c : s) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            filtered += c;
        }
    }

    string reversed = filtered;
    reverse(reversed.begin(), reversed.end());

    if (filtered == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
