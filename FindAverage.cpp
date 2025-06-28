// Find the Average of Array Elements-In this problem, you are tasked with writing a program that 
//calculates the average of an array of integers.
// The program should return the average as a floating-point number that reflects the arithmetic mean of all elements in the array.

#include <iostream>
#include <vector>  
using namespace std;


class Solution {
public:
    double findAverage(const vector<int>& arr) {
        int totalSum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            totalSum += arr[i];
        }

        return (double)totalSum / n;
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {10, 20, 30, 40, 50};
    double average = sol.findAverage(numbers);
    cout << "Average: " << average << endl;

    return 0;
}
