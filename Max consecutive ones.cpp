class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int maxe=INT_MIN;
        for(auto it:nums)
        {
            if(it==1)
            {
                c++;
            }
            else{
                maxe=max(maxe,c);
                c=0;
            }
        }
        maxe=max(maxe,c);
        return maxe;
    }
};
