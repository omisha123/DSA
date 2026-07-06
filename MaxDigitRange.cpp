class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int s, l, diff, maxi=0;
        int a[100]={0};
            for(int i=0; i<nums.size(); i++){
                int temp = nums[i];
                s=INT_MAX, l=0;
                while(nums[i]>0){
                    s=min(s, nums[i]%10);
                    l=max(l, nums[i]%10);
                    nums[i]/=10;
                }
                diff=l-s;
                maxi=max(maxi, diff);
                a[diff]+=temp;
            }
        return a[maxi];
    }
};
