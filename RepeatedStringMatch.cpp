class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = a;
        int ops = 1;
        while (a.length() < b.length()) {
            a += s;
            ops++;
        }
        if (a.find(b) != string::npos) {
            return ops;
        }
        a += s;
        ops++;
        if (a.find(b) != string::npos) {
            return ops;
        }
        return -1;
    }
};
