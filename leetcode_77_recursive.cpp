class Solution {
public:
    void helper(vector<int> &v, vector<vector<int>> &ans, int n,int k, int p){
        if(k==0){
            ans.push_back(v);
            return;
        }
        for(int i=p;i<=n;i++){
            v[v.size()-k]=i;
            helper(v,ans,n,k-1,i+1);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v(k);
        helper(v,ans,n,k,1);
        return ans;
    }
};