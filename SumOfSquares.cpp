class Solution {
public:
    bool judgeSquareSum(int c) {
        int x = pow(c, 0.5);
        int l = 0, r = x;
        bool flag = false;
        long y = (long)c;
        while(l<=r)
        {
            if(y == l*l + r*r)
            {
                flag = true;
                break;
            }
            if(y > l*l + r*r)
            l++;
            if(y < (long)l*l + r*r)
            r--;
        }
        return flag;
    }
};
