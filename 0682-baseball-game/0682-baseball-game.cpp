class Solution {
public:
    bool isNumber(string vec) {
        int n;
        if(vec[0]=='-'){
            n= int(vec[1]);
        }else{
            n = int(vec[0]);  // convert "5" to Ascii Value 
        }
        switch (n) {
            case 48:  // ASCII code for '0'
            case 49:  // ASCII code for '1'
            case 50:  // ASCII code for '2'
            case 51:  // ASCII code for '3'
            case 52:  // ASCII code for '4'
            case 53:  // ASCII code for '5'
            case 54:  // ASCII code for '6'
            case 55:  // ASCII code for '7'
            case 56:  // ASCII code for '8'
            case 57:  // ASCII code for '9'
                return true;
            default:
                return false;
        }
    }
    
    int calPoints(vector<string>& vec) {
        stack<int> st;
        for (int i = 0; i < vec.size(); i++) {
            if (isNumber(vec[i])) {
                st.push(stoi(vec[i]));      // convert string to int
            } else if (vec[i] == "C") {
                st.pop();
            } else if (vec[i] == "D") {
                int a = st.top();
                st.push(a*2);
            } else if (vec[i] == "+") {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y);
                st.push(x);
                st.push(x + y);
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};

//convert number to string  -=> str = to_string(int vatible)
