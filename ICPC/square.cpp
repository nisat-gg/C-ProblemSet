#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int x) {
    int sqRoot = sqrt(x);
    return (sqRoot * sqRoot == x); 
}

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int n; 
        cin >> n;
        
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (!isPerfectSquare(x)) {
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
