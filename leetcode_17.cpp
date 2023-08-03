class Solution {
public:
    unordered_map<char,string> mp;
    Solution(){
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
    }
    void helper(vector<string> &ans,string& s,string cur,int n,int ind, string digits){
        if(ind==n){
            ans.push_back(s);
            return;
        }
        cur=mp[digits[ind]];
        for(int i=0;i<cur.size();i++){
            s.push_back(cur[i]);
            helper(ans,s,cur,n,ind+1,digits);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        vector<string> ans;
        if(n==0) return ans;
        string s="";
        string cur=mp[digits[0]];
        helper(ans,s,cur,n,0,digits);
        return ans;
    }
};