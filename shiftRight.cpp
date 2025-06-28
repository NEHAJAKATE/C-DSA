#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> shiftRight(const vector<int>& arr) {
       vector<int> nums = arr;
       int n = arr.size();
       int lastEle = nums[n - 1];
      
       for(int i = n -1; i >= 0;i-- ){
        if(i != 0 ){
             nums[i] = nums[i - 1];
            
        }
        else{
            nums[0] = lastEle;
        }
        
        
       

       }
       return nums;
    }
};
int main(){
    Solution sol;
    vector<int> temp = {1, 2, 3, 4, 5};
    vector<int> ans = sol.shiftRight(temp);
    cout<<"shifted array is :";
    for(int num :  ans){
        cout<<num<<" ";

    }
    cout<<endl;
}