class Solution {
public:
    bool isValid(string t) {
        stack<char> st;

        for(char s : t){
            if( s == '(' || s=='{' || s == '['){
                st.push(s);
            }
            else if (s ==')' || s == '}' || s==']'){
                if(st.empty()) return false;
                
                char top = st.top();
                    if( s==')' && top!= '(' || s=='}' && top!= '{' || s==']' && top!= '['){
                        return false;
                    }
                    st.pop();
            }
        }

        return st.empty();
    }
};
