class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            char current = s[i];
            switch (current) {
            case ')':
                if (str.empty() || str.top() != '(') {
                    return false;
                } else {
                    str.pop();
                }
                break;
            case '}':
                if (str.empty() || str.top() != '{') {
                    return false;
                } else {
                    str.pop();
                }
                break;
            case ']':
                if (str.empty() || str.top() != '[') {
                    return false;
                } else {
                    str.pop();
                }
                break;
            default:
                str.push(current);
                break;
            }
        }
        return str.empty();
    }
};