#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

class Solution { 
public: 
    vector<int>printExtremeElementsAlternately(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans ;
        bool isSmall = true;
        int s = 0;
        int e = n - 1;
        sort(arr.begin(), arr.end());
        while(s <= e){
            if(isSmall){
                    ans.push_back(arr[s]);
                    s++;
                    
                    isSmall = false;
                }
            else{
                    ans.push_back(arr[e]);
                    e--;
                    
                    isSmall = true;
                }
            
       
        }
        return ans;
}
};
int main(){
    Solution sol;
    int n ;
    vector<int> nums = {1, 3,5,6,7,2, 4};
    vector<int> ans = sol.printExtremeElementsAlternately(nums);
    for(int num : ans){
        cout<<num;


    }
    cout<<endl;
    return 0;
}