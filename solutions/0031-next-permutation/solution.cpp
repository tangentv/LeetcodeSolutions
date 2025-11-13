class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int index = -1;
        for(int i=size-2; i>=0; i--)
        {
            if(nums[i]< nums[i+1])
            {
                index = i;
                break;
            }
        }

        for(int k=size-1; k>=index ; k--)
        {
            if(index>=0)
            {
            if(nums[k]>nums[index])
            {
                swapnumber(nums, index, k);
                break;
            }
            }
        }
        std::reverse(nums.begin() + index + 1, nums.end());     
    }

    void swapnumber(vector<int>& nums,int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
};
