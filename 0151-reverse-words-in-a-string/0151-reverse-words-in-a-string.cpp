class Solution {
public:
    std::string reverseWords(std::string s) {
        std::stack<std::string> res;
        std::string temp;

        // Traverse the input string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                if (!temp.empty()) {
                    res.push(temp);
                    temp.clear();
                }
            }
        }

        // Push the last word
        if (!temp.empty()) {
            res.push(temp);
        }

        std::string dummy;
        while (!res.empty()) {
            dummy += res.top();
            res.pop();
            if (!res.empty()) {
                dummy += " ";
            }
        }

        return dummy;
    }
};