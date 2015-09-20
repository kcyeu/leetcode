#include <iostream>

using namespace std;

class Solution {
public:
    bool isUgly(int num) {
        if (num < 1) return false;
        if (num == 1) return true;

        int check[] = {2, 3, 5};
        int result = 0;

        for (int i = 0; i < 3; i++) {
            while(num % check[i] == 0) {
                num /= check[i];
            }
        }

        return (num == 1);
    }
};

int main() {
    Solution sol;
    cout << ((sol.isUgly(12)) ? "YES" : "NO") << endl;
    cout << ((sol.isUgly(14)) ? "YES" : "NO") << endl;
    cout << ((sol.isUgly(60)) ? "YES" : "NO") << endl;

}
