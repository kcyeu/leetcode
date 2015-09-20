#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        if (str.length() == 0) return 0;

        string trimmed;
        int signed = 0;

        for (int i = 0; i < str.length(); i++) {
            //if (str[i] == '-' || str[i] == '+' || (str[i] >= 48 && str[i] <= 57)) {
            if (str[i] != '-' && str[i] != '+' && (str[i] < 48 || str[i] > 57)) {
                continue;
            }

            if (str[i] == '-' && signed == 0) {
                signed = -1;
                continue;
            }
            if (str[i] == '+' && signed == 0) {
                signed = 1;
                continue;
            }
            
        }
    }
};

int main() {
    Solution sol;
    cout << sol.myAtoi("5678") << endl;
    cout << sol.myAtoi("") << endl;
    cout << sol.myAtoi("-123") << endl;
}
