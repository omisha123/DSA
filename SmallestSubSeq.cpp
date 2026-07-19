class Solution {
public:
    string smallestSubsequence(string s) {
        int a[26];
        bool b[26] = {false};
        string t = "";
        for(int i = 0; i<s.length(); i++)
        {
            a[s[i] - 'a'] = i;
        }
        for(int i = 0; i<s.length(); i++)
        {
            if (b[s[i] - 'a']) 
                continue;
            while (!t.empty() && t.back() > s[i] && a[t.back() - 'a'] > i) 
            {
                b[t.back() - 'a'] = false;
                t.pop_back();
            }
            t.push_back(s[i]);
            b[s[i] - 'a'] = true;
        }
        return t;
    }
};
