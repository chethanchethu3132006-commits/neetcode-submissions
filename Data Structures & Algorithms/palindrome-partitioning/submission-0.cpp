class Solution {
public:
    bool ispalindrome(string check){
        string st=check;
        reverse(check.begin(),check.end());
        return st==check;
    }
    void generate(vector<vector<string>>&ans,vector<string>temp,string s,int i){
        if(i==s.size()){
            ans.push_back(temp);
            return;
        }
        string check="";
        for(int j=i;j<s.size();j++){
            check+=s[j];
            if(ispalindrome(check)){
                temp.push_back(check);
                generate(ans,temp,s,j+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        generate(ans,temp,s,0);
        return ans;
    }
};
