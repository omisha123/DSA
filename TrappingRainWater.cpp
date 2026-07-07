class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;
        int n = height.size();
        vector<int> a(n), b(n);
        a[0] = height[0];
        b[n-1] = height[n-1];
        int c = 0;
        for(int i = 1; i<height.size(); i++)
        {
            a[i] = max(a[i-1], height[i]);
        }
        for(int i = height.size()-2; i>=0; i--)
        {
            b[i] = max(b[i+1], height[i]);
            c += min(a[i], b[i]) - height[i];
        }
        return c;
    }
};
