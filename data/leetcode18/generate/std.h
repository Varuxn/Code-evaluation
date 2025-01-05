class Solution {
public:
    // DFS用于查找每一个连通块
    void dfs(int i, vector<vector<int>>& stones, vector<bool>& visited) {
        visited[i] = true;
        // 遍历所有石头，查找是否在同一行或同一列
        for (int j = 0; j < stones.size(); ++j) {
            if (!visited[j] && (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])) {
                dfs(j, stones, visited); // 如果是连通的，则继续DFS
            }
        }
    }

    int solve(vector<vector<int>>& stones) {
        int size = stones.size(); // 石头数量
        vector<bool> visited(size, false); // 访问标记
        int count = 0; // 连通块的数量

        // 遍历每个石头，找到所有连通块
        for (int i = 0; i < size; i++) {
            if (!visited[i]) { // 如果这个石头未被访问过
                dfs(i, stones, visited); // 从这个石头开始DFS
                count++; // 每找到一个连通块，就增加count
            }
        }

        return size - count; // 移除的石头数量 = 总石头数量 - 连通块数量
    }
};