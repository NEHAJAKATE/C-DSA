#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> arr = nums;
        int n = nums.size();
        for(int i = 0 ; i <n ; i++){
            sort(arr.begin() , arr.end());
            return arr;
        }
    }
};

int main(){
    vector<int> nums = {0,1,0,0,0,1,1};
    Solution sol;
    vector<int> ans = sol.sortArray(nums);

    cout << "Sorted array: ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}