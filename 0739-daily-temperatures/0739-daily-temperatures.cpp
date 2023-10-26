class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        
        vector<int> ans(n,0);
        stack<pair<int,int>> st;
        
       
        for(int i=n-1; i>=0; i--){
            int span = 1;
            while(!st.empty() && st.top().first<=temperatures[i]){
                span += st.top().second;
                st.pop();
            }
            (st.empty()) ? ans[i] = 0 : ans[i] = span;
            st.push({temperatures[i],span});
        }
        
        return ans;
    }
};