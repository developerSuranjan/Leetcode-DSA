class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo=0,h=nums.size()-1;
        while(lo<=h){
            int m=lo+(h-lo)/2;
            if(nums[m]==target) return true;
            if(nums[lo]==nums[m]){
                lo++;
                continue;
            }
            if(nums[lo]<=nums[m]){
                if(target>=nums[lo] && target<=nums[m]) h=m-1;
                else lo=m+1;
            }else{
                if(nums[m]<=target && nums[h]>=target) lo=m+1;
                else h=m-1;
            }
        }
        return false;
    }
};