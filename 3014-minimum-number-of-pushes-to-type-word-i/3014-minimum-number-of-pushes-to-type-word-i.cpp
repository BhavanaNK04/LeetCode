class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<int,int>m;
        int c=0;
        int p=2;
        for(char &ch:word)
        {
            if(p>9)
            {
                p=2;
            }
            m[p]++;
            c+=m[p];
            p++;
        }
        return c;
    }
};