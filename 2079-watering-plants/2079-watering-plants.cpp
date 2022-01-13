class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ln=plants.size();
        int step=0;
        int step2=0;
        int ct= capacity;
        for (int i=0;i<ln;i++)
        {
            if (ct>=plants[i])
            {
                ct=ct-plants[i];
                step+=1;
            }
            else
            {
                ct=capacity;
                ct=ct-plants[i];
                step2+=i+(i+1);  
            }
        }
        return (step+step2);
    }
};