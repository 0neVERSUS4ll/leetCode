class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, vector<string>> check;
        for(auto s : strs){
            string word = s;
            sort(word.begin(), word.end());            
            check[word].push_back(s);
        }
        for(auto a : check){
            res.push_back(a.second);
        }
        return res;
    }
};