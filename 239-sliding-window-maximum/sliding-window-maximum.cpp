class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(!dq.empty()&&dq.front()==i-k){  // check if front element is not in window remove it
                dq.pop_front();
            }
            // remove all the elements less than or equal to current element as they can't contribute in any window in present and future also
           
           while(!dq.empty()&&nums[i]>=nums[dq.back()]){    // this is done to create monotonic decreasing queue
               dq.pop_back();
           }
           dq.push_back(i);

           if(i>=k-1){
               ans.push_back(nums[dq.front()]);
           }
        }
        return ans;

        // TC: O(2*n)  each element inserted ones and removed ones
        // SC: O(k)    as dequeue can have atmost k elements
    }
};