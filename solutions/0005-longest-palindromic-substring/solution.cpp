class Solution {
public:
    string longestPalindrome(string s) {

        if(s== "" || s.size()<1){
            return "";
        }

        if(s.size()==1){
            return s;
        }

        int start = 0;
        int end = 0;

        for(int i=0; i<s.size();i++){
            int length1 = expandFromMiddle(s, i,i);
            int length2 = expandFromMiddle(s, i,i+1);
            int length = max(length1, length2);

            if(length > (end-start)){
                start = i - ((length-1)/2);
                end = i + (length/2);
            } 
        }

        return s.substr(start, end - start + 1);
  
    }

    int expandFromMiddle(string s, int left, int right){
        if(s == "" || left>right){
            return 0;
        }

        while(left>= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }

        return (right-left-1);
    }
};
