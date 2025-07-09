#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    pair<int, int> sumPositiveNegative(const vector<int>& arr) {
        int n = arr.size();
        int sum = 0;   
        int sum1 = 0;  

        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                sum += arr[i];
            } else {
                sum1 += arr[i];
            }
        }
        return {sum, sum1};
    }
};

int main() {
    vector<int> nums = {6, -9, 3, 5, -8, -2};
    Solution sol;
    pair<int, int> result = sol.sumPositiveNegative(nums);

    cout << "Sum of positive numbers: " << result.first << endl;
    cout << "Sum of negative numbers: " << result.second << endl;

    return 0;
}
