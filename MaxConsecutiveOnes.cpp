class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int m = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                if(c>m)
                {
                m = c;}
                c = 0;
            }
            else
            {
            c++;
            }
        }
        if(c>m)
        m = c;
        return m;
    }
};
