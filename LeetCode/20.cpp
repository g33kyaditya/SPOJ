class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {
                char cur = s[i];
                if (st.empty())
                    return false;
                char top = st.top();
                
                if (s[i] == ')' && top != '(')
                    return false;
                if (s[i] == '}' && top != '{')
                    return false;
                if (s[i] == ']' && top != '[')
                    return false;
                st.pop();
            }
        }
        if (!st.empty())
            return false;
        return true;
    }
};
