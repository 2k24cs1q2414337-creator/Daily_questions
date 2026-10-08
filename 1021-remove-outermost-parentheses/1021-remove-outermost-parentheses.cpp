class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        int n = s.length();
        int count = 0;
        for(int i = 0 ;i<n;i++){
            if(s[i] == ')'){
                count--;
            }
            if(count != 0){
                str.push_back(s[i]);
            }
            if(s[i] == '('){
                count ++;
            }
        }
        return str;
    }
};