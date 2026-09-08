class Solution {
public:
    int generate(vector<int>& piles,int h,int mid){
        int count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=mid){
                count++;
            }
            else{
                if(piles[i]%mid==0){
                    count+=piles[i]/mid;
                }
                else{
                    count+=(piles[i]/mid)+1;
                }
            }
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(r>=l){
            int mid=(l+r)/2;
            if(h>=generate(piles,h,mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
