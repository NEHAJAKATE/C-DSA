#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMode(const vector<int>& nums) {
        vector<int> arr= nums;
        int n = arr.size();
        int cf = 1;
        int maxFreq = 1;
        int mode = arr[0];
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n  ;i++){
            if(arr[i] == arr[ i - 1]){
                cf++;
            }
            else {
                cf = 1;
            }
            if(cf > maxFreq){
                maxFreq = cf;
                mode = arr[i];
            }
        }
        return mode;
    }
};

int main(){

    vector<int> numz = {2,2,3,4,1,2,5,3};
    Solution sol;
    int result = sol.findMode(numz);
    cout<<"the mode is : "<<result<<endl;
    return 0;
}