class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> output;
        int size = nums.size();
        int lastIndexInArray = size;

        int ValueNotFound = 0;
        
        if(size == 0)
        {
            output.push_back(-1);
            output.push_back(-1);
            
        }
        if(size !=0)
        {
            for(int i=0;i<size ; i++)
            {
            if(nums[i]==target)
            {
                output.push_back(i);
                ValueNotFound = 1;
                break;
            }          
            }
           for(int i = size-1; i>=0; i--)
            {
            if(nums[i] == target)
            {
                output.push_back(i);
                ValueNotFound =1;
                break;
            }
            }

            if(!ValueNotFound)
            {
                output.push_back(-1);
            output.push_back(-1);
            }
        }
  
        return output;
    }
};
