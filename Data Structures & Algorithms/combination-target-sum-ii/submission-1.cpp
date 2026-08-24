class Solution {
public:
    void generate(vector<vector<int>>&ans,vector<int>& candidates,vector<int>temp, int sum,int target,int i){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(i==candidates.size() || sum>target){
            return;
        }
        temp.push_back(candidates[i]);
        generate(ans,candidates,temp,sum+candidates[i],target,i+1);
        temp.pop_back();
        while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
            i=i+1;
        }
        generate(ans,candidates,temp,sum,target,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        sort(candidates.begin(),candidates.end());
        generate(ans,candidates,temp,sum,target,0);
        return ans;
    }
};
