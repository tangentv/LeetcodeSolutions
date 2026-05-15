class Solution {

    private:
    void solve(std::vector<int>& nums, int index, std::vector<int> output,     std::vector<std::vector<int>> &ans)
    {
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        //exclude
        solve(nums,index+1,output,ans);

        //include  
        int element = nums[index];      
        output.push_back(element);
        solve(nums,index+1,output,ans);
    }

public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::vector<int> output;
        int index = 0;        
        solve(nums, index, output, ans);
        return ans;
    }
};
