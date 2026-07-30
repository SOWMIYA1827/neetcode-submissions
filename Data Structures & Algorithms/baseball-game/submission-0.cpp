class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i=0 ; i<operations.size() ; i++){
        if(operations[i] == "+"){
             int x = st.top();
             st.pop();
             int y = st.top();
             st.push(x);

             int ans = x + y ;
             st.push(ans);
        }
        else if(operations[i] == "C"){
            st.pop();
        }
        else if(operations[i] == "D"){
             int x = st.top();
             st.push(x*2);
        }else{
            int x = stoi(operations[i]);
            st.push(x);
        }
    }

    int sum = 0 ;
    int n = st.size();
    for(int i=0 ; i<n ; i++){
        sum += st.top();
        st.pop();
    }

    return sum ;
    }
};