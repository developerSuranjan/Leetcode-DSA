class Solution {
public:
    void helper(vector<int> &v,vector<vector<int>>& ans, vector<int> &nums, int n, int cur){
        if(v.size()==cur){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(v[i]==-99){
                v[i]=nums[cur];
                helper(v,ans,nums,n,cur+1);
                v[i]=-99; //backtracking step
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int> v(n,-99);
        helper(v,ans,nums,n,0);
        return ans;
    }
};