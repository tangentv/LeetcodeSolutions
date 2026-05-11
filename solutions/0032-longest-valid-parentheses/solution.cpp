class Solution {
public:
    int longestValidParentheses(string s) {
    // stack stores indices; seed with -1 as base boundary

    /*
    String: "()"
    Without −1:

    i=0: see ( → push 0. Stack: [0]
    i=1: see ) → pop 0. Stack is now empty → can't compute 1 − stack.top() → crash or wrong answer

    With −1:

    i=0: see ( → push 0. Stack: [-1, 0]
    i=1: see ) → pop 0. Stack: [-1]. Length = 1 − (−1) = 2 ✅
    */
    stack<int> st;
    st.push(-1);

    int maxLen = 0;

    for (int i = 0; i < (int)s.size(); ++i) {

        if (s[i] == '(') {
            // push index of every '('
            st.push(i);

        } else {
            // ')': pop the matching '(' (or the base)
            st.pop();

            if (st.empty()) {
                // no base left → this ')' is unmatched, reset base
                st.push(i);
            } else {
                // valid length = i − new stack top
                maxLen = max(maxLen, i - st.top());
            }
        }
    }
    return maxLen;  
}
};
