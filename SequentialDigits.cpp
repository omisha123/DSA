class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string d = "123456789"; 
        vector<int> a;
        if(low>stoi(d))
        return a;
        for(int i = 0; i<9; i++)
        {
            for(int j = 1; j<=9-i; j++){
            string s = d.substr(i, j);
            int t = stoi(s);
            if(t>=low && t<=high)
            a.push_back(t);}
        }
        sort(a.begin(), a.end());
        return a;
    }
};
