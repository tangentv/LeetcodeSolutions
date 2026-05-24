class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        set<int> st;
        int value = original;

        for(int i = 0; i<nums.size();i++){
            st.insert(nums[i]);
        }

        while(st.contains(original)){
            st.erase(original);
            original *= 2;
            value = original;
        }       

        return value;
        
    }
};
