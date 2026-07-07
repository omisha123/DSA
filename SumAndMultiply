class Solution {
public:
    long long sumAndMultiply(int n) {
      long long x = 0;
      int sum = 0;  
      string t = "";
      string s = to_string(n);
      for(int i = 0; i<s.length(); i++)
      {
        if(s[i]!='0')
        {
        t += s[i];
        sum += int(s[i]-'0');}
      }
      if(t == "")
      return 0;
      x = stoll(t);
      x = x*sum;
      return x;
    }
};
