/*62. Unique Paths

A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid 
(marked 'Finish' in the diagram below).

How many possible unique paths are there?

Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Right -> Down
2. Right -> Down -> Right
3. Down -> Right -> Right

Input: m = 7, n = 3
Output: 28
*/

//Dynamic programming solution - fill the matrix

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ip_vect(m,vector<int>(n,0));
        
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < n; ++j){
                if (i == 0 || j == 0){
                    ip_vect[i][j] = 1;
                } else {
                    ip_vect[i][j] = ip_vect[i-1][j] + ip_vect[i][j-1];
                }
            }
        }
        
        return ip_vect[m-1][n-1];
    }
};
