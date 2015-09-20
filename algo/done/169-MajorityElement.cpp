#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        map<int,int> mymap;

        int majority = 0;

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            map<int,int>::iterator map_it = mymap.find(*it);
            if (map_it != mymap.end()) {
                mymap[*it] = mymap[*it] + 1;
            } else {
                mymap[*it] = 1;
            }
        }

        for (map<int,int>::iterator it = mymap.begin(); it != mymap.end(); it++) {
            if (it->second >= (nums.size() / 2) + 1)
                return it->first;
        }
    }
};

int main() {
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    Solution sol;
    cout << sol.majorityElement(nums) << endl;
}
