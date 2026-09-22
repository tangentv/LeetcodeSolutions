class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int size = nums.size();

        //create heap
        for(int i=0;i<size;i++){
            pq.push(nums[i]);
        }

        int top;
        for(int i=0;i<k;i++){
            top = pq.top();
            pq.pop();
        }

        return top;
    }
};
