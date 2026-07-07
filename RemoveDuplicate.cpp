class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a[30000];
        int c = 1,e = nums[0];
        a[0] = nums[0];
        for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i]==e)
            continue;
            else
            {
                e = nums[i];
                c++;
                a[c-1] = nums[i];
            }
        }
        for(int i = 0; i<nums.size(); i++)
        nums[i] = a[i];
        return c;
    }
};
