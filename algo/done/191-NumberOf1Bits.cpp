#include <iostream>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int weight = 0;

        while(n) {
            if (n & 1) weight++;
            n >>= 1;
        }
        return weight;
    }
};

int main() {
    Solution sol;
    cout << sol.hammingWeight(11) << endl;
    cout << sol.hammingWeight(7) << endl;
}

