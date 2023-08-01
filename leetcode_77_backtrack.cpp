class Solution {
public:
    void bt(vector<int> &v, vector<vector<int>> &ans, int n,int k, int p){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        for(int i=p;i<=n;i++){
            v.push_back(i);
            bt(v,ans,n,k,i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> v;
        bt(v,ans,n,k,1);
        return ans;
    }
};