#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        set<int> iSet;

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            if (iSet.find(*it) == iSet.end()) {
                iSet.insert(*it);
            } else {
                return true;
            }
        }
        return false;
    }

    int singleNumber(vector<int>& nums) {
        set<int> iSet;

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            if (iSet.find(*it) == iSet.end()) {
                iSet.insert(*it);
            } else {
                iSet.erase(*it);
            }
        }
        return *(iSet.begin());

    }
};

int main() {
    std::vector<int> myvector;
    for (int i=1; i<=12; i++) myvector.push_back(i);
    for (int i=1; i<=12; i++) myvector.push_back(i);
    myvector.push_back(-1);

    Solution sol;

    cout << sol.singleNumber(myvector);
}
