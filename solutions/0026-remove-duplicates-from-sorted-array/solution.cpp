class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int size = nums.size();
        std::set<int> vSet;
        int count = 0;
        for(int i = 0; i<size;i++)
        {
            if(!vSet.contains(nums[i]))
            {
                vSet.insert(nums[i]);
                count++;
            }
            else
            {
                nums[i] = 111;
            }
        }
        std::sort(nums.begin(), nums.end()); 

        return count;

    }
};
