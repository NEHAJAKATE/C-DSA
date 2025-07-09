#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findFirstUnsortedIndex(const vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ; i < n - 1; i++){
            if(arr[i ] > arr[i+1]){
                return i;
            }
            
        }
        return -1;
    }
};
int main() {
    vector<int> nums = {1, 2, 3, 7, 5, 6};  
    Solution sol;

    int index = sol.findFirstUnsortedIndex(nums);

    if (index != -1) {
        cout << "The unsorted index is at: " << index << endl;
    } else {
        cout << "The array is fully sorted." << endl;
    }

    return 0;
}
