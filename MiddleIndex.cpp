class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int mi = -1;
        int sl = 0, sr = 0;
        for(int i = 1; i<nums.size(); i++)
        sr += nums[i];
        for(int i = 1; i<=nums.size(); i++)
        {
            if(sl != sr)
            {
                sl += nums[i-1];
                if(i<nums.size())
                sr -= nums[i];
            }
            else
            {
                mi = i-1;
                break;
            }
        }
        return mi;
    }
};
