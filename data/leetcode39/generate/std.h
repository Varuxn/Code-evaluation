class Solution {
public:
    int solve(int n) {
        int tmp = sqrt(2*n);
        if(tmp * (tmp + 1) >= 2 * n){return tmp;}
        return tmp + 1;
    }
};