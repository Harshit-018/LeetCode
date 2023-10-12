class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> ans;
        int n = nums2.size();
        st.push(nums2[n-1]);
        unordered_map<int,int> mp;
        mp[nums2[n-1]]=-1;
        for(int i=n-2; i>=0; i--){
            while(st.empty()==false && nums2[i]>=st.top()){
                st.pop();
            }
            mp[nums2[i]] = (st.empty()) ? -1 : st.top();
            st.push(nums2[i]);
        }
        for(auto &it:nums1){
            if(mp.find(it)!= mp.end()){
                ans.push_back(mp[it]);
            }
        }
        return ans;
    }
};