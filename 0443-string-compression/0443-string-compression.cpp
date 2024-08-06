class Solution {
public:
    int compress(std::vector<char>& chars) {
        int n = chars.size();
        if (n == 0) return 0;

        int j = 0;       
        int count = 1;   
        char ch = chars[0]; 
        for (int i = 1; i <= n; ++i) {
            if (i < n && chars[i] == ch) {
                count++;
            } else {
               
                chars[j++] = ch;
                if (count > 1) {
                    std::string countStr = std::to_string(count);
                    for (char c : countStr) {
                        chars[j++] = c;
                    }
                }
               
                if (i < n) {
                    ch = chars[i];
                    count = 1;
                }
            }
        }

       
        return j;
    }
};