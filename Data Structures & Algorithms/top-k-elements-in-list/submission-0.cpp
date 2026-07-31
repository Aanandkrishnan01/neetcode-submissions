class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        for (int x : nums) {
            seen[x]++;
        }
        vector<pair<int,int>>v;
        for(auto p: seen)
        {
            v.push_back({p.second,p.first});
        }
        vector<int> ans;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        
        }
    return ans;
    }
};
