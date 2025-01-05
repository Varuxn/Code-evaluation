class Solution
{
public:
    string solve(string mid, string suf)
    {
        if (mid.size() == 0) return "";

        char ch = suf[suf.size() - 1];
        int k = mid.find(ch);

        return string(1, ch) + solve(mid.substr(0, k), suf.substr(0, k)) + solve(mid.substr(k + 1), suf.substr(k, mid.size() - k - 1));
    }
};