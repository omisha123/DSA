class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0]; 
        int k = 1;
        while(s != "" && k<strs.size())
        {
            if(strs[k].find(s) == 0)
            {
                k++; 
                continue;
            }
            else
            {
                s.pop_back();
            }
        }
        return s;
    }
};
