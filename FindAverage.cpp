#include <iostream>
#include <vector>  // ✅ This is necessary for using vector

using namespace std;

class Solution {
public:
    double findAverage(const vector<int>& arr) {
        int totalSum = 0;
        int size = arr.size();

        for (int i = 0; i < size; i++) {
            totalSum += arr[i];
        }

        return static_cast<double>(totalSum) / size;
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {10, 20, 30, 40, 50};
    double average = sol.findAverage(numbers);
    cout << "Average: " << average << endl;

    return 0;
}
