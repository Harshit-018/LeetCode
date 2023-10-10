class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int min=INT_MAX;
        int max=INT_MIN;
        
        for(auto &num:nums){
            mp[num]++;
            if(num>max){
                max=num;
            }
            if(num<min){
                min=num;
            }
        }
        
        int i=0;
        for(int j=min; j<=max; j++){
            while(mp[j]>0){
                nums[i]=j;
                i++;
                mp[j]--;
            }
        }
        return nums;
    }
};