给你一个产品数组 products 和一个字符串 searchWord ，products  数组中每个产品都是一个字符串。
请你设计一个推荐系统，在依次输入单词 searchWord 的每一个字母后，推荐 products 数组中前缀与 searchWord 相同的最多三个产品。如果前缀相同的可推荐产品超过三个，请按字典序返回最小的三个。
请你以二维列表的形式，返回在输入 searchWord 每个字母后相应的推荐产品的列表。

solution内主函数
```cpp
class Solution {
public:
    vector<vector<string>> solve(vector<string>& products, string searchWord){

    }
};
```

样例1：
Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"
Output: [["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],["mouse","mousepad"],["mouse","mousepad"],["mouse","mousepad"]]

样例2：
Input：products = ["havana"], searchWord = "havana"
Output: [["havana"],["havana"],["havana"],["havana"],["havana"],["havana"]]

限制：

1 <= products.length <= @data
1 <= Σ products[i].length <= 2 * 10^4
products[i] 中所有的字符都是小写英文字母。
1 <= searchWord.length <= @data
searchWord 中所有字符都是小写英文字母。
时间限制：@time_limit ms
内存限制：@memory_limit KB