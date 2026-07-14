class Solution {
public:
    int myAtoi(string s) {
        int l = s.length();
        int c = 0;
        int x = 0;
        int y = 0;
        int k = 0;
        for(int i = 0; i<l; i++)
        {
            if(y!=0 || c == -1 || c == 1)
            k = 1;
            if(s[i] == ' ' && y == 0 && k == 0)
            continue;
            if(s[i] == ' ' && y == 0 && k==1)
            break;
            if(s[i] == ' ' && (y!=0 || k==1))
            break; 
            if(s[i] == '0' && x == 0){
            y++;
            continue;}
            if(isdigit(s[i]) == false && s[i] != '-' && s[i] != '+')
            break;
            if(s[i] == '+' && y==0 && c==0){
            c = -1;
            continue;}    
            if(s[i] == '+' && y==0 && c==1)
            break;
            if((s[i] == '-' && y!=0) || (s[i] == '-' && c == -1))
            break;
            if(s[i] == '-' && y==0 && c == 0){
            c = 1;
            continue;}
            if(isdigit(s[i]) == false && k == 1)
            break;
            if(isdigit(s[i]))
            {
            if (x > INT_MAX / 10 || (x == INT_MAX / 10 && (s[i]-'0') > INT_MAX % 10)) {
            return (c == 1) ? INT_MIN : INT_MAX;}
            y++;
            x = x* 10 + (s[i] - '0');
            }
        }
        if(c == -1 || c == 0)
        return x;
        else 
        return -x;
    }
};
