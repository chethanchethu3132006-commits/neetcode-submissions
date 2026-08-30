class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int l1=0;
        int l2=0;
        while(l1<word1.size() && l2<word2.size()){
            ans+=word1[l1];
            ans+=word2[l2];
            l1++;
            l2++;
            
        }
        while(l1<word1.size()){
            ans+=word1[l1];
            l1++;
        }
        while(l2<word2.size()){
            ans+=word2[l2];
            l2++;
        }
        return ans;
    }
};