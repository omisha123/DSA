class Solution {
public:
    int mirrorFrequency(string s) {
        int a[36] = {0};
        int sum = 0;
        for(int i = 0; i<s.length(); i++)
        {
            if(isalpha(s[i]))
            a[s[i]-'a']++;
            else
            a[(s[i]-'0')+26]++;
        }
        for(int i = 0; i<13; i++)
        {
            sum+= abs(a[i]-a[25-i]);
        }
        for(int i = 26; i<31; i++)
        {
            sum+= abs(a[i]-a[61-i]);
        }
        return sum;
    }
};
