class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        for(string w: strs)
        {   
            
            string key=w;
            sort(key.begin(),key.end());
            groups[key].push_back(w);

        }
        vector<vector<string>> result;
        for(auto word: groups)
        {
            result.push_back(word.second);
        }
        return result;
    }
};
