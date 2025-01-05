class Solution {
    struct A {
        int n, p; 
    };

    bool cmp(A x, A y) {
        return x.n > y.n;
    }

    bool cmp1(A x, A y) {
        return x.p < y.p;
    }
public:
    pair<vector<int>, vector<int>> solve(int M, int N, int K, int L, int D, vector<vector<int>>& seats) {
        vector<A> row(M + 1), col(N + 1);
        vector<int> row_divisions, col_divisions;

        for (const auto& edge : seats) {
            int x1 = edge[0], y1 = edge[1], x2 = edge[2], y2 = edge[3];
            if (x1 == x2) {
                int idx = min(y1, y2);
                col[idx].p = idx;
                col[idx].n++;
            } else {
                int idx = min(x1, x2);
                row[idx].p = idx;
                row[idx].n++;
            }
        }

        sort(row.begin() + 1, row.begin() + M + 1, cmp);
        sort(col.begin() + 1, col.begin() + N + 1, cmp);

        sort(row.begin() + 1, row.begin() + K + 1, cmp1); 
        sort(col.begin() + 1, col.begin() + L + 1, cmp1);

        for (int i = 1; i <= K; i++) row_divisions.push_back(row[i].p);
        for (int i = 1; i <= L; i++) col_divisions.push_back(col[i].p);

        return {row_divisions, col_divisions};
    }
};