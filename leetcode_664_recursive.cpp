class Solution {
public:
    int helper(string s,int i,int j){
        if(i>j) return 0;
        if(i==j) return 1;
        int ans=1+helper(s,i+1,j);
        for(int k=i+1;k<=j;k++){
            if(s[i]==s[k]){
                int temp=helper(s,i,k-1)+helper(s,k+1,j);
                if(temp<ans){
                    ans=temp;
                }
            }
        }
        return ans;
    }
    int strangePrinter(string s) {
        int n=s.size();
        if(n==0 || n==1) return n;
        return helper(s,0,n-1);
    }
};