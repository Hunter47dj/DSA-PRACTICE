class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.length();
        int i=0;
        while(i< len)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else {

                if(st.empty())  // first he closing parenthesis h
                    return false;

                char top = st.top(); // (
                if( (top == '(' && s[i] == ')' ) || (top == '[' && s[i] == ']' ) || (top == '{' && s[i] == '}' ) )
                {
                    st.pop();
                }
                else return false;
            }

            i++;
        }

        if( !st.empty())
            return false;

        return true;
        
    }
};