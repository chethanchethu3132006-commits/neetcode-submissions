class Solution {
public:
    void generate(vector<string>&ans,string temp,int n,int open,int close){
        if(temp.size()==2*n){
            ans.push_back(temp);
            return;     
        }
        if(open<n){
            generate(ans,temp+"(",n,open+1,close);
        }
        if(open>close){
            generate(ans,temp+")",n,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        generate(ans,temp,n,0,0);
        return ans;
    }
};
