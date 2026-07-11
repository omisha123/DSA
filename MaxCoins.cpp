class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int s = 0;
        int t = n/3, x = n-2;
        while(t>0)
        {
            s+=piles[x];
            x-=2;
            t--;
        }
        return s;
    }
};
