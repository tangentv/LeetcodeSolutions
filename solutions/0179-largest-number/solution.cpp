/*
use greedy solution
*/

class Solution {
public:

    
    string solve(vector<int>& nums){
        
        int size = nums.size();
        if(size <=1){
            return to_string(nums[0]);
        }
        vector<string> s;

        for(int i = 0; i<size;i++){
            s.push_back(to_string(nums[i]));
        }

        std::sort(s.begin(), s.end(), [](const string& a, const string& b){
            return a+b > b+a;
        });

        string ans;
        for(string a : s){
            ans+=a;
        }

        if(s[0] == "0"){
            return "0";
        }

        return ans;
    }

    string largestNumber(vector<int>& nums) {
        
        string ans = solve(nums);
        return ans;
    }
};
