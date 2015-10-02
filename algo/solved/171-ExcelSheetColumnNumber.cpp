#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Solution {
public:
    int titleToNumber(string s) {
        int num = 0;
        int length = s.length();

        for (int i = 0; i < length; i++) {
            num += pow(26, i) * (s[length - i - 1] - 64);
        }
        return num;
    }
};

int main() {
    Solution obj;

    cout << obj.titleToNumber("A") << endl;
    cout << obj.titleToNumber("AB") << endl;

    return 0;
}
