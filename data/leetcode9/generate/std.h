class Solution {
public:
    string solve(int n, int k) {
        int nodeNum = pow(k, n - 1);
        int nedge = pow(k, n);
        std::vector<int> vecNode(nodeNum, k - 1); // 每个节点当前的当前的出边的值
        std::string strret(nedge + (n - 1), '0'); // 初始化为00+0...
        for (int i = n - 1, idx = 0; i < strret.length(); ++i) {
            int& curedge = vecNode[idx];
            strret[i] = curedge + '0';
            idx = (idx * k + curedge) % nodeNum;
            --curedge;
        }
        return strret;
    }
};