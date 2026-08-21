class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int r=0;
        deque<int>st;
        while(r<nums.size()){
            while(!st.empty() && st.front()<=r-k){
                st.pop_front();
            }
            while(!st.empty() && nums[st.back()]<nums[r]){
                st.pop_back();
            }
            st.push_back(r);
            if(r>=k-1){
                ans.push_back(nums[st.front()]);
            }
            r++;
        } 
        return ans;
    }
};
