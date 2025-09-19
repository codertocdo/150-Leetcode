class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        char c;
        for (auto x : s) {
            if (x=='(' || x=='[' || x=='{') {
                par.push(x);
            } else {
            if (par.empty()) return false; 
            c = par.top();  
            par.pop();

            if (x == ')' && c != '(') return false; 
            if (x == ']' && c != '[') return false;
            if (x == '}' && c != '{') return false;  
            }
        }
        return par.empty();
    }
};