class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int d;
        vector<int> c(200000,0);
        for(int i = 0; i<nums.size(); i++)
        {
           c[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++){
        if(c[i]>1)
        d = i;}
        return d;
    }
};
