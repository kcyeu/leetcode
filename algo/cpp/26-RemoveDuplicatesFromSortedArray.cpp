#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (vector<int>::iterator it = nums.begin(); it != nums.end() ; it++) {
            vector<int>::iterator next = it + 1;

            while ( next != nums.end() && *it == *next)
                nums.erase(next);
        }
        return nums.size();
    }
};

int main() {
    Solution sol;

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);
    vec.push_back(3);

    cout << sol.removeDuplicates(vec) << endl;
}
