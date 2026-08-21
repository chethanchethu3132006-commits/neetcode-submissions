class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int count=0;
        int len=0;
        int maxfreq=0;
        map<int,int>m;
        while(r<s.size()){
            m[s[r]]++;
            maxfreq=max(maxfreq,m[s[r]]);
            while((r-l+1)-maxfreq>k){
                m[s[l]]--;
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};
