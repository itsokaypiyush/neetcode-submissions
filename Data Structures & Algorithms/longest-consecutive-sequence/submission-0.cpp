class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest =0;
        for(int sum:s){
            if(s.find(sum-1)==s.end()){
                int current=sum;
                int length=1;
                while(s.find(current+1)!=s.end()){
                      current++;
                      length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};
