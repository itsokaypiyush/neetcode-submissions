class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto x:mp){
            if(x.second >= k){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
