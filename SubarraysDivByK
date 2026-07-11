class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int c=0, s=0;
        unordered_map<int, int> a;
        a[0] = 1;
        for(int i = 0; i<nums.size(); i++)
        {
            s+=nums[i];
            int t = s%k;
            if(s%k<0) t = (t+k)%k;
            if(a.find(t)!= a.end())
            {
                c+=a[t];
                a[t]++;
            }
            else
            a[t]++;
        }
        return c;
    }
};
