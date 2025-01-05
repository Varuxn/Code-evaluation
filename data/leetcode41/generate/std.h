class Solution {
public:
    int solve(int n) {
        int halfLen = n >> 1;
        int ret = 0;
        int num1Id = 1;
        do{
            if(num1Id < halfLen)
                num1Id <<= 1;
            else    
                num1Id = (num1Id << 1) - n + 1;
            ++ret;
        }while(num1Id != 1);
        return ret;        
    }
};