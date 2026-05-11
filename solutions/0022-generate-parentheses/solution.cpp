class Solution {
public:
    vector<string> generateParenthesis(int n) {
    //backtracking way
        vector<string> result;
        generate(n, 0,0,"",result);   
        return result;
    }

    void generate(int n, int open, int closed, string current, vector<string>& result){              
        // valid if parenthesis of open == closed = n

        //base case
        if(current.size() == 2*n){
            result.push_back(current);
            return;
        }
        //only add openparenthesis if open<n
        if(open<n){
             generate(n, open+1 ,closed  , current+'(', result);
        }

        // add close parenthesis if closed<open
        if(closed<open){
            generate(n, open, closed+1, current+')', result);
        }

    }
};
