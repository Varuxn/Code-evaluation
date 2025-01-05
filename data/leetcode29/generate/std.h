class Solution {
public:
    int solve(vector<vector<int>>& matrix, int k) {
        int m = matrix.size(), n = matrix[0].size();
        // vector<vector<int>> pre(m + 1, vector<int>(n + 1));
        vector<int> results;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i-1>=0) matrix[i][j] ^= matrix[i - 1][j];
                if(j-1>=0) matrix[i][j] ^= matrix[i][j - 1];
                if(i-1>=0&&j-1>=0) matrix[i][j] ^= matrix[i - 1][j - 1];
                results.push_back(matrix[i][j]);
            }
        }
        nth_element(results.begin(), results.begin() + k - 1, results.end(), greater<int>());
        return results[k - 1];
    }
};