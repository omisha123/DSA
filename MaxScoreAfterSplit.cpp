class Solution {
public:
    int maxScore(string s) {
        int c0=0,c1=0, x=0;
        int m=0;
        unordered_map<int, int> a;
        string t = "";
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == '1')
            x++;
        }
        for(int i = 0; i<s.length(); i++)
        {
            t += s[i];
            if(t.length()==s.length())
            continue;
            else{
            if(s[i]=='0')
            c0++;
            else
            c1++;
            m = max(m, x-c1+c0);}
        }
        return m;
    }
};
