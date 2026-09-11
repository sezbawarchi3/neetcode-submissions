class Solution {
public:
    bool isValid(string s) {
        stack<int> b;
        for(char c : s){
            if(b.empty()) b.push(c);
            else if(b.top() == '(' && c == ')' || b.top() == '{' && c == '}' || b.top() == '[' && c == ']') b.pop();
            else b.push(c);
        }

        return b.empty();
    }
};
