#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string result = "";

        int mod = 0;
        int quotion = 0;
        n--;

        do {
            mod = n % 26;
            n /= 26;
            result.push_back(mod + 64);
        } while (n > 0);

        result[0]++;

        reverse(result.begin(), result.end()); 

        return result;
    }
};

int main() {
    Solution obj;

    cout << obj.convertToTitle(1) << endl;
    cout << obj.convertToTitle(26) << endl;
    cout << obj.convertToTitle(27) << endl;
    cout << obj.convertToTitle(28) << endl;
    cout << obj.convertToTitle(51) << endl;
    cout << obj.convertToTitle(52) << endl;
    cout << obj.convertToTitle(53) << endl;

    return 0;
}
