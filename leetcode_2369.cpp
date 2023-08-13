class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        bool dp[3]={true,false,(n>1 && nums[1]==nums[0])};
        for(int i=3;i<=n;i++){
            bool ans=false;
            if(nums[i-1]==nums[i-2] && dp[(i-2)%3]) ans=true;
            else if(nums[i-1]==nums[i-2] && nums[i-2]==nums[i-3] && dp[(i-3)%3]) ans=true;
            else if(nums[i-1]==nums[i-2]+1 && nums[i-2]==nums[i-3]+1 && dp[(i-3)%3]) ans=true;
            dp[i%3]=ans;
        }
        return dp[n%3];
    }
};