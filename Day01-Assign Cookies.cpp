#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int FirstIndex = 0;
        int SecondIndex = 0;

        int n = g.size();
        int m = s.size();

        int NumberOfAssignCookies = 0;
        while (FirstIndex < n && SecondIndex < m) {
            if (g[FirstIndex] <= s[SecondIndex]) {
                FirstIndex++;
                NumberOfAssignCookies ++;
            }
            SecondIndex++;
        }

        return NumberOfAssignCookies;
    }
};