#include<unordered_map>
#include<vector>
#include<limits.h>
#include<iostream>
#include<limits>
using namespace std;



class Solution {
public:
    pair<int, int> highestAndLowestFrequency(const vector<int>& arr) {
        unordered_map<int, int> freq_map;

        for (int num : arr) {
            freq_map[num]++;
        }

        int max_freq = 0;
        int min_freq = numeric_limits<int>::max();
        int max_freq_ele = numeric_limits<int>::max();
        int min_freq_element = numeric_limits<int>::max();

        for (const auto& it : freq_map) {
            int element = it.first;
            int freq = it.second;

            if (freq > max_freq || (freq == max_freq && element < max_freq_ele)) {
                max_freq = freq;
                max_freq_ele = element;
            }

            if (freq < min_freq || (freq == min_freq && element < min_freq_element)) {
                min_freq = freq;
                min_freq_element = element;
            }
        }

        return {max_freq_ele, min_freq_element};
    }
};

int main() {
    Solution sol;
    vector<int> arr = {3, 1, 2, 2, 4, 4, 4, 5, 5};
    pair<int, int> result = sol.highestAndLowestFrequency(arr);

    cout << "Max frequency element: " << result.first << endl;
    cout << "Min frequency element: " << result.second << endl;

    return 0;
}


   
//    pair<int, int> highestAndLowestFrequency(const vector<int>& arr) {
  //  vector<int> v = arr;
    //sort(v.begin(), v.end());  // ✅ MUST sort to group identical elements
   // int n = v.size();
    
  //  int cf = 1;
   // int maxFreq = 1;
  //  int minFreq = INT_MAX;   
  //  int mode = v[0];
 //   int mode1 = v[0];

 //   for(int i = 1; i < n ; i++){   
 //       if(v[i] == v[i - 1]){
 //           cf++;
 //       }
 //       else{
           
 //           if(cf > maxFreq){
 //               maxFreq = cf;
 //               mode = v[i - 1];
 //           }
 //           if(cf < minFreq){
 //               minFreq = cf;
 //               mode1 = v[i - 1];
 //           }
  //          cf = 1; 
//}
 //   }

 //   if(cf > maxFreq){
 //       maxFreq = cf;
 //       mode = v[n-1];
//    }
//    if(cf < minFreq){
//        minFreq = cf;
//        mode1 = v[n-1];
//    }

//    return {mode, mode1};
//}
//};
