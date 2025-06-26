#include <iostream>
#include <vector>
using namespace std;


int searchElementInArray(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int index = searchElementInArray(nums, target);
     if(index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    

    return 0;
}
