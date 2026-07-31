class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> counts;
        unordered_map<char,int>countt;
        if(t.length()!=s.length())
        {
            return false;
        }
        for(char a: s)
        {
            counts[a]++;
        }
        for(char c: t)
        {
            countt[c]++;

        }
        return counts==countt;
    }
};
