#include <iostream>
#include <vector>
#include <utility>  
using namespace std;

class Solution {
public:
    pair<int, int> countZerosAndOnes(const vector<int>& nums) {
        int n = nums.size();
        int totalZero = 0;
        int totalOne = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                totalZero++;
            } else {
                totalOne++;
            }
        }
        return {totalZero, totalOne};
    }
};

int main() {
    vector<int> nums = {0, 1, 1, 0, 0, 1, 1, 0};

    Solution sol;
    pair<int, int> result = sol.countZerosAndOnes(nums);

    cout << "Total Zeros: " << result.first << endl;
    cout << "Total Ones: " << result.second << endl;

    return 0;
}
