class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> a;
        a[0] = -1;
        int s = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            s+=nums[i];
            if(a.find(s%k)!=a.end())
            {
            int j = a[s%k];
            if(i-j >= 2)
            return true;
            }
            else
            a[s%k] = i;
        }
        return false;
    }
};
