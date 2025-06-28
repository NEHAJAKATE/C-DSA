#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {
        vector<int>nums = arr;
       int n = arr.size();
       int i = 0;
       int j = n - 1 ;

       while(i <= j){
        swap(nums[i] , nums[j]);
        i++;
        j--;
       }
       return nums;
    }
};

int main(){
    Solution sol;
    vector<int> temp = {10, 20 , 30 , 40 , 50};
    vector<int> ans = sol.reverseArray(temp);
    cout<<"reverse array is : "<<endl;
    for(int num : ans){
        cout<<num<<" "<<endl;
    }
    return 0;
    
}
