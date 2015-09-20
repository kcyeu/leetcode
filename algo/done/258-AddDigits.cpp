#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;

        num %= 9;

        if (num == 0)
            return 9;
        else
            return num;
    }
};

int main() {
    Solution sol;

    cout << sol.addDigits(258) << endl;
    cout << sol.addDigits(9) << endl;
    cout << sol.addDigits(17) << endl;
    cout << sol.addDigits(152) << endl;

}
