class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        sort(nums.begin(), nums.end());
        int s = 0, m = 0, t = INT_MAX, c = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            int j = i+1, k = nums.size()-1;
            while(j<k)
            {
                s = nums[i] + nums[j] + nums [k];
                c = t;
                t = min(t, abs(s - target));
                if(t != c) m = s;
                if(t==0) return s;
                if(s > target)
                k--;
                else
                j++;
            }
        }
        return m;
    }
};
