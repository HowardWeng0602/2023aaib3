// week09-1b.cpp
// LeetCode 54
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0, j = 0, dir = 0;
        int dI[4] = {0, 1, 0, -1}; // 移動的值
        int dJ[4] = {1, 0, -1, 0}; // 移動的值
        vector<int>ans;
	ans.push_back( matrix[i][j] );
            i += dI[dir];
            j += dJ[dir];
	ans.push_back( matrix[i][j] );
            i += dI[dir];
            j += dJ[dir];
	ans.push_back( matrix[i][j] );
	return ans;
    }
};