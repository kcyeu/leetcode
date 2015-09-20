#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        if (size == 0 ) return;

        for (int i = size - 1; i >= 0; i--)
        {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
            }
        }
        
    }
};

int main() {
    Solution sol;

    vector<int> vec;
    vec.push_back(0);
    vec.push_back(12);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);

    sol.moveZeroes(vec);

    for (vector<int>::iterator itr = vec.begin();
       itr != vec.end();
        itr++)
    {
        cout << *itr << endl;
    } 
}
