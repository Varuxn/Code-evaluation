给出一棵二叉树的中序与后序排列。求出它的先序排列。（约定树结点用不同的大写字母表示）。

solution内主函数
```cpp
class Solution
{
    public:
    string solve(string mid,string suf)
}
```

传入参数:
两个均为大写字母组成的字符串，表示一棵二叉树的中序与后序排列

返回参数:
一个字符串，表示二叉树的先序。

样例1：
Input：mid="BADC",suf="BDCA"
Output: "ABCD"

限制：
字符串长度小于等于@data
时间限制：@time_limit ms
内存限制：@memory_limit KB