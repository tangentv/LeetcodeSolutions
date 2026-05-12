class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jumpCount=0;
        int maxCount = 0;

        int currentJump = 0;

        for(int i=0;i<nums.size()-1 ; i++){

            maxCount = max(maxCount, i+nums[i]);
            
            if (i == currentJump) {
                ++jumpCount;
                currentJump = maxCount;
            }
        }
      
        return jumpCount;

    }
};
