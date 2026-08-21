class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        int l=0;
        int r=0;
        int mxlen=0;
        unordered_map<char,int>m;
        while(r<s.size()){
            while(m[s[r]] > 0){
                m[s[l]]--;
                l++;
            }
            m[s[r]]++;
            mxlen=max(mxlen,r-l+1);
            r++;
        }
        return mxlen;
    }
};
