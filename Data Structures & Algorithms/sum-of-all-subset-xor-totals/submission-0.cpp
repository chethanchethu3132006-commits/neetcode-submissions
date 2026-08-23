class Solution {
public:
    int generate(vector<int>& nums,int sum,int i){
        if(i==nums.size()){
            return sum;
        }
        return generate(nums,sum^nums[i],i+1)+generate(nums,sum,i+1);
    }
    int subsetXORSum(vector<int>& nums) {
        return generate(nums,0,0);;
    }
};