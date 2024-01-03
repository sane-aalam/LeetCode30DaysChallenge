
#include <bits/stdc++.h>
using namespace std;

// Approach simple - Jitni Frequecy hai uski according,
// we have to create the row and push the element into the 2D array

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        
        // create the vector for storing the frequcey of the array
        vector<int> mp(n + 1, 0);

        vector<vector<int>> result;

        // step-1 store the frequecy Then checkout the if current Element of frequecy is equal to the ResultRowSize 
        // Then create the New row
        // Store the element, we have to increase the frequecy for next row
        for (int i = 0; i < n; i++) {
            int freq = mp[nums[i]];
            if(freq == result.size()){
                result.push_back({});
            }

            result[freq].push_back(nums[i]);
            // we have to increse the frequecy
            mp[nums[i]]++;
        }
        return result;
    }
};