
/* Approach-1 

# Give Information about the questions 
- 0 represent -> Emply cell
- 1 represent -> security cell
- Empty cell completely Then we have to count (upar wali layer + nicher wali layer me secutity laser kitne bante hai)

    
# Approach used to solve 
- first of all current Row me uper se dekhte hai,There is any one Laser aviable or NOT
- we will take privousLaserCount and currentLaserCount,
  with help of every string row-wise we will Add into the final result

*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        
        int prevRowCount = 0;
        
        // total number of laser we will store into the result variable 
        int result = 0;
        
        for(int i = 0; i<n; i++) {
            
            int currDeviceCount = 0;
            for(char &ch : bank[i]) {
            // if current char is 1(security) Elements,so What we can consider it.
                if(ch == '1') {
                    currDeviceCount++;
                }
            }
            
            result += (prevRowCount * currDeviceCount);
            
            if(currDeviceCount != 0){
               prevRowCount = currDeviceCount;
            }
            
        }
        return result;
    }
};