#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it = nums.begin();
        while( it != nums.end()) {
            if (*it == val) {
                it = nums.erase(it);
            } else {
                it++;
            }
        }

        return nums.size();
    }
};

int main() {
    vector<int> nums;
    for (int i = 0; i < 10; i++) {
        nums.push_back(3);
    }

    Solution sol;
    cout << sol.removeElement(nums,3) << endl;

}
