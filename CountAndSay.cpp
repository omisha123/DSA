class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i = 1; i<n; i++)
        {
            string t = "";
            int c = 1;
            for(int j = 0; j<s.length(); j++)
            {
                if(j+1<s.length() && s[j]==s[j+1])
                c++;
                else
                {
                    t += to_string(c) + s[j];
                    c = 1;
                }
            }
            s = t;
        }
        return s;
    }
};
