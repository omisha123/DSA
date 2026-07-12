class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int c = 0, m = 0, l=0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            c++;
            while(c>k)
            {
                if(nums[l]==0)
                c--;
                l++;
            }
            m = max(i-l+1, m);
        }
        return m;
    }
};
