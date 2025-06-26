#include <limits.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int findMaximum(vector<int>& arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
};

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};  // your input array

    Solution sol;
    int maxi = sol.findMaximum(nums);  // call the function properly

    cout << "Maximum element is: " << maxi << endl;

    return 0;
}
