class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int c0=0, c1=0;
        unordered_map<int, int> a;
        a[0] = -1;
        int m=0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            c0--;
            else c1++;
            int d = c0+c1;
            if(a.find(d)!=a.end())
            {
                m = max(m, i-a[d]);
            }
            else
            a[d] = i;
        }
        return m;
    }
};
