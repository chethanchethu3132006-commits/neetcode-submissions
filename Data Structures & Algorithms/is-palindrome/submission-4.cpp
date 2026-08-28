class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        if(s.empty()){
            return true;
        }
        while(r>=l){
            while(r>=l && !isalnum(s[l])){
                l++;
            }
            while(r>=l && !isalnum(s[r])){
                r--;
            }
            if(l>r){
                return true;
            }
            if(tolower(s[r])!=tolower(s[l])){
                return false;
            }
            l++;
            r--;
            
        }
        return true;
    }
};
