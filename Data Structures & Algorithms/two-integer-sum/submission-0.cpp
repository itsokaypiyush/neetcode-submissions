class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umm;
        for(int i=0;i<nums.size();i++){
           int  num = nums[i];
            int more_needed= target-num;
            if(umm.find(more_needed) != umm.end()){
                return {umm[more_needed],i};
            }
            umm[num]=i;

        }
        return {-1,-1};
    }
};