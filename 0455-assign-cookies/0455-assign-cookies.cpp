class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        if(s.size()==1) return 1;
        int cnt = 0;
        int i =0,j=0;
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) { // if the current cookie can satisfy the current child's greed factor
                cnt++;
                i++;
            }
            j++;
        }
        return cnt;
    }
};