class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp, a = -1, b, t;
        for(int i = nums.size()-1; i>=1; i--)
        {
            if(nums[i]<=nums[i-1])
            continue;
            else
            {
                a = i-1;
                break;
            }
        }
        if(a == -1)
        reverse(nums.begin(), nums.end());
        else{
        for(int i = nums.size()-1; i>=1; i--)
        {
            if(nums[i]<= nums[a])
            continue;
            else
            {
                b = i;
                break;
            }
        }
        t = nums[a];
        nums[a] = nums[b];
        nums[b] = t;
            reverse((nums.begin() + (a+1)), nums.end());}
    }
};
