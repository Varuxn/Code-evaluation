class Solution {
public:
    int solve(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), m = matrix[0].size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] ^=
                    (i - 1 > -1 ? matrix[i - 1][j] : 0) ^
                    (j - 1 > -1 ? matrix[i][j - 1] : 0) ^
                    (i - 1 > -1 && j - 1 > -1 ? matrix[i - 1][j - 1] : 0);
                if (pq.size() < k)
                    pq.push(matrix[i][j]);
                else {
                    if (pq.top() < matrix[i][j]) {
                        pq.pop();
                        pq.push(matrix[i][j]);
                    }
                }
            }
        }
        return pq.top();
    }
};