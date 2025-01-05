class Solution {
public:
    int solve(vector<vector<int>>& points) {
        int n = points.size();
        vector<bool> visited(n, false); // To track visited nodes
        vector<int> minDist(n, INT_MAX); // Min distance to the MST for each node

        minDist[0] = 0; // Start with the first point
        int result = 0; // Total cost

        for (int i = 0; i < n; ++i) {
            int minCost = INT_MAX;
            int currentNode = -1;

            // Find the next node with the minimum cost to add to the MST
            for (int j = 0; j < n; ++j) {
                if (!visited[j] && minDist[j] < minCost) {
                    minCost = minDist[j];
                    currentNode = j;
                }
            }

            // Add the selected node to the MST
            visited[currentNode] = true;
            result += minCost;

            // Update the minimum distances for the remaining nodes
            for (int j = 0; j < n; ++j) {
                if (!visited[j]) {
                    int dist = abs(points[currentNode][0] - points[j][0]) +
                               abs(points[currentNode][1] - points[j][1]);
                    minDist[j] = min(minDist[j], dist);
                }
            }
        }

        return result;
    }
};