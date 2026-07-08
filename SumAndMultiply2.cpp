class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> ans(queries.size());
        int n = s.length();
        long long mod = 1000000007;
        vector<long long> a(n+1, 1);
        for(int i = 1; i<n+1; i++)
        a[i] = (a[i-1]*10)%mod;
        vector<long long> b(n+1, 0);
        vector<long long> c(n+1, 0);
        vector<int> d(n+1, 0);
        for (int i = 0; i < n; i++) {
            if(s[i]!='0'){
            int x = s[i] - '0';
            b[i+1] = b[i] + x;
            c[i+1] = (c[i]*10 + x)%mod;
            d[i+1] = d[i] + 1;
            }
            else
            {
            b[i+1] = b[i];
            c[i+1] = c[i];
            d[i+1] = d[i];
            }
        }
        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            int nz = d[r+1] - d[l];
            long long y = b[r+1] - b[l];
            long long z = (c[r + 1] - (c[l] * a[nz]) % mod + mod) % mod;
            ans[i] = (y*z)%mod;
        }
        return ans;
    }
};
