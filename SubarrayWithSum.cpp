class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> a;
        a[0] = 1;
        int s=0, c=0;
        for(int i = 0; i<nums.size(); i++)
        {
            s+=nums[i];
            int t = s-goal;
            if(a.find(t) != a.end())
            {
                c += a[t];
            }
            a[s]++;
        }
        return c;
    }
};
