class Solution {
public:
    string minWindow(string s, string t) {
        int l=0;
        int r=0;
        map<int,int>m;
        int count=0;
        int sindex=-1;
        int mnlen=INT_MAX;
        for(int i=0;i<t.size();i++){
            m[t[i]]++;
        }
        while(r<s.size()){
            if(m[s[r]]>0){
                count++;
            }
            m[s[r]]--;
            while(count==t.size()){
                if(r-l+1<mnlen){
                    mnlen=r-l+1;
                    sindex=l;
                }
                if(m[s[l]]>=0){
                    count--;
                }
                m[s[l]]++;
                l++;
            }
            r++;
        }
        if(mnlen==INT_MAX){
            return "";
        }
        else{
            return s.substr(sindex,mnlen);
        }

    }
};
