#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;

        int oneBitCount = 0;

        while (n) {
            oneBitCount += (n & 1);

            if (oneBitCount > 1)
                return false;
            n = n >> 1;
        }
        return true;
    }
};

int main() {
    Solution sol;

    cout << ((sol.isPowerOfTwo(2))?"YES":"FALSE")   << endl;
    cout << ((sol.isPowerOfTwo(5))?"YES":"FALSE")   << endl;
    cout << ((sol.isPowerOfTwo(127))?"YES":"FALSE") << endl;
    cout << ((sol.isPowerOfTwo(128))?"YES":"FALSE") << endl;

}
