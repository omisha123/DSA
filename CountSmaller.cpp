class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        if (nums.empty()) return {};
        vector<int> a;
        vector<int> b(nums.size(), 0);
        for(int i = nums.size()-1; i>=0; i--)
            {
                auto t = lower_bound(a.begin(), a.end(), nums[i]);
                b[i] = distance(a.begin(), t);
                a.insert(t, nums[i]);
            }
        return b;
    }
};
