#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        vector<int> result;

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            if (*it == 0) {
                zeroCount++;
                if (zeroCount >= 2)
                    break;
                else
                    continue;
            }
        }

        if (zeroCount >=2) {
            result.assign(nums.size(), 0);
            return result;
        }

        // general solution
        long long product = 1;

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            if (*it == 0) continue;
            product *= *it;
        }

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            if (*it == 0)
                result.push_back(product);
            else {
                if (zeroCount == 1) {
                    result.push_back(0);
                } else {
                    result.push_back(product / *it);
                }
            }
        }
        return result;
    }
};


int main() {
    std::vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);

    Solution sol;
    vector<int> result = sol.productExceptSelf(myvector);

    for (vector<int>::iterator it = result.begin(); it != result.end(); it++) {
        cout << *it << endl;
    }
}
