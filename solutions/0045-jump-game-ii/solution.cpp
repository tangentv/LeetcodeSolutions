class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jumpcount = 0;
        int left = 0;
        int right =0;
        while(right < nums.size()-1){
            int farthest = 0;
            for(int i = left; i<(right+1);i++){
                farthest = max(farthest, nums[i]+i);
            }
            left = right+1;
            right = farthest;
            jumpcount += 1;            
        }

        return jumpcount;

    }
};
