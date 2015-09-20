#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> steps;
public:
    int climbStairs(int n) {
        return this->steps[n];
    }

    Solution () {
        steps.push_back(1);
        steps.push_back(1);
        steps.push_back(2);
        
        for (int i = 3; i < 46; i++) {
            steps.push_back(steps[i - 2] + steps[i - 1]);
        }
    }
};

int main() {
    Solution sol;

    cout << sol.climbStairs(0) << endl;
    cout << sol.climbStairs(1) << endl;
    cout << sol.climbStairs(3) << endl;
    cout << sol.climbStairs(5) << endl;
    cout << sol.climbStairs(7) << endl;
}
