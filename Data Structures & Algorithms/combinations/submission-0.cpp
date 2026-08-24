class Solution {
public:
    void generate(vector<vector<int>>&ans,vector<int>&temp,int n,int  k,vector<int>&num,int i){
        if(i==n){
            if(temp.size()==k){
                ans.push_back(temp);
                return;
            }
            else{
                return;
            }
        }
        temp.push_back(num[i]);
        generate(ans,temp,n,k,num,i+1);
        temp.pop_back();
        generate(ans,temp,n,k,num,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>num;
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        vector<vector<int>>ans;
        vector<int>temp;
        generate(ans,temp,n,k,num,0);
        return ans;
    }
};