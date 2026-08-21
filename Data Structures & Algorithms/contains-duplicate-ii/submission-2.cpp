class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        map<int,int>m;
        while(r<nums.size()){
            if(m.find(nums[r])!=m.end()){
                if(r-m[nums[r]]<=k){
                    return true;
                }
                else{
                    m[nums[l]]--;
                    if(m[nums[l]]==0){
                        m.erase(m[nums[l]]);
                    }
                    l++;
                }
            }
            m[nums[r]]=r;
            r++;
        }
        return false;
    }
};