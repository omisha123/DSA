class Solution {
public:
    string reverseWords(string s) {
        string a = "";
        int x = s.length() - 1;
        
        while (x >= 0) {
            while (x >= 0 && s[x] == ' ') {
                x--;
            }
            
            if (x < 0) break;
            
            int c = x;
            
            while (x >= 0 && s[x] != ' ') {
                x--;
            }
            
            if (a.empty()) {
                a = s.substr(x + 1, c - x);
            } else {
                a += " " + s.substr(x + 1, c - x);
            }
        }
        
        return a;
    }
};
