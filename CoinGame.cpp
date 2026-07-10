class Solution {
public:
    string winningPlayer(int x, int y) {
        string n = "Bob";
        int c = 0;
        while(x>0 && y>3)
        {
            if(c%2==0)
            {
                n = "Alice";
                x--;
                y = y - 4;
            }
            if(c%2==1)
            {
                n = "Bob";
                x--;
                y = y-4;
            }
            c++;
        }
        return n;
    }
};
