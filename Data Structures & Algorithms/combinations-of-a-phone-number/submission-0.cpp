class Solution {
public:
    void generate(vector<string>& alpha,vector<string>& ans,string& temp,string& digits,int index){
        if(index==digits.size()){
            ans.push_back(temp);
            return;
        }
        int ind=digits[index]-'0';
        string check=alpha[ind];
        for(int i=0;i<check.size();i++){
            temp.push_back(check[i]);
            generate(alpha,ans,temp,digits,index+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>alpha={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string temp="";
        if(digits.empty()){
            return ans;
        }
        generate(alpha,ans,temp,digits,0);
        return ans;
    }
};
