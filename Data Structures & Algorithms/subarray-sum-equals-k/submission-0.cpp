class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>prefixsum;
        int ans=0;
        int sum=0;
        prefixsum[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int need=sum-k;
            if(prefixsum.find(need)!=prefixsum.end()){
                ans+=prefixsum[need];
            }
            prefixsum[sum]++;
        }
        return ans;
    }
};