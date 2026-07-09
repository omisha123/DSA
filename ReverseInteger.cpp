class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int t;
        if(x == INT_MAX || x == INT_MIN)
        return 0;
        if(x>=0) t = x; else t = -x;
       while(t>0)
       {
            int d = t%10;
            rev = rev*10 + d;
            t = t/10;
       } 
       if(rev > INT_MAX || rev < INT_MIN)
       return 0;
       if(x>0)
       return rev;
       else if(x<0)
       return -rev;
       else 
       return 0;
    }
};
