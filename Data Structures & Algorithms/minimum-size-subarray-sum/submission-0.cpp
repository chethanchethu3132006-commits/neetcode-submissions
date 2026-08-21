class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        int len=INT_MAX;
        int mnlen=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                len=min(len,r-l+1);
                mnlen=len;
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return mnlen;
    }
};