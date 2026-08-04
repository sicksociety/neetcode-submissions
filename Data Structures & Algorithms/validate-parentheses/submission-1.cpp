class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    
    // Traverse each character in the string
    for (char c : s) {
        // If it's an opening bracket, push it onto the stack
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            // If it's a closing bracket, check the top of the stack
            if (st.empty()) return false;  // No matching opening bracket
            
            // Check if the top of the stack matches the current closing bracket
            if ((c == ')' && st.top() == '(') ||
                (c == '}' && st.top() == '{') ||
                (c == ']' && st.top() == '[')) {
                st.pop();  // Pop the matching opening bracket
            } else {
                return false;  // Mismatched brackets
            }
        }
    }
    
    // In the end, stack should be empty if all brackets were matched
    return st.empty();
    }
};
