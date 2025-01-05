You are given an array of strings products and a string searchWord.
Design a system that suggests at most three product names from products after each character of searchWord is typed. Suggested products should have common prefix with searchWord. If there are more than three products with a common prefix return the three lexicographically minimums products.
Return a list of lists of the suggested products after each character of searchWord is typed.

solution main function
```cpp
class Solution {
public:
    vector<vector<string>> solve(vector<string>& products, string searchWord){

    }
};
```

Example 1:
Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"
Output: [["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],["mouse","mousepad"],["mouse","mousepad"],["mouse","mousepad"]]

Example 2:
Input: products = ["havana"], searchWord = "havana"
Output: [["havana"],["havana"],["havana"],["havana"],["havana"],["havana"]]

Restrictions:
1 <= products.length <= @data
1 <= products[i].length <= 3000
1 <= sum(products[i].length) <= 2 * 10^4
All the strings of products are unique.
products[i] consists of lowercase English letters.
1 <= searchWord.length <= @data
searchWord consists of lowercase English letters.
Time limit: @time_limit ms
Memory limit: @memory_limit KB