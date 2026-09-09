class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int count1=0;
        int count2=0;
        int el1=INT_MAX;
        int el2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == el1){
                count1++;
            }
            else if(nums[i] == el2){
                count2++;
            }
            else if(count1 == 0){
                el1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                el2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        int mn=(nums.size()/3)+1;
        count1=0;
        count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1){
                count1++;
            }
            if(nums[i]==el2){
                count2++;
            }
        }
        if(el1 != el2){
            if(count1>=mn){
                ans.push_back(el1);
            }
            if(count2>=mn){
                ans.push_back(el2);
            }
        }
        else{
            if(count1>=mn){
                ans.push_back(el1);
            }
        }
        return ans;
    }
};