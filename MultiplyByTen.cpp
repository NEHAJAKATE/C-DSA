#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> multiplyByTen(const vector<int>& arr) {
        int n = arr.size();
        int multiplyByTen = 0;
        vector<int> nums;
        for(int i = 0; i<n;i++){
            multiplyByTen = arr[i] * 10;
            nums.push_back(multiplyByTen);
        

       }
       return nums;
    }

};

int main(){
    Solution sol;
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> multiply = sol.multiplyByTen(numbers);
    cout<<"MulpliedBy10 : ";
    for(int num : multiply){
        cout<<num <<" ";
    }
    cout<<endl;
    return 0;

}
