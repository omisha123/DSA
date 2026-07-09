class Solution {
public:
    int findSubstringInWraproundString(string s) {
        int x = 0;
        int a[26] = {0};
        a[s[0] - 'a'] = 1;
        int c = 1;
        for(int i = 1; i<s.length(); i++)
        {
            if(s[i] == s[i-1] + 1 || (s[i-1] == 'z' && s[i] == 'a'))
            {
                c++;
            }
            else c = 1;
            a[s[i] - 'a'] = max(c, a[s[i] - 'a']);
        }
        for(int i = 0; i<26; i++)
        {
            x+=a[i];
        }
        return x;
    }
};
