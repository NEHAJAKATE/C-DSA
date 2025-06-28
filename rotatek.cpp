#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp;

        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};

int main();

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    return main(); // Call actual main
}

int main() {
    Solution sol;
    vector<int> temp = {1, 5, 6, 7, 8, 9};
    int k;

    cout << "Enter the value of k: ";
    cin >> k;

    sol.rotate(temp, k);

    cout << "Rotated array: ";
    for (int num : temp) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
