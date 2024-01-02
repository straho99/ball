#include <iostream>

using namespace std;

int main() {
    long long n;
    int position;
    
    cin >> n;
    cin >> position;
    
    n = n % 6;
    
    for (long long i = n; i >= 1; i--) {
        if (i % 2 != 0) {
            if (position != 2) {
                if (position == 0) {
                    position = 1;
                } else {
                    position = 0;
                }
            }
        } else {
            if (position != 0) {
                if (position == 1) {
                    position = 2;
                } else {
                    position = 1;
                }
            }
        }
    }
    
    cout << position;
    
    return 0;
}
