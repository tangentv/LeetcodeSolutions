class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        //set<string> s;
        int size = arr.size();
        unordered_map<string, int> freq;
        for(string s : arr){
            freq[s]++;
        }

        for(string s : arr){            
            if(freq[s] == 1){
                k--;
                if(k==0){
                    return s;
                }
            }
        }

        return "";
    }
};
