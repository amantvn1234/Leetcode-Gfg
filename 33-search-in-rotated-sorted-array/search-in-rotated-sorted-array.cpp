class Solution {
public:
    int findpivot(vector<int> &nums){
        int n=nums.size(),st=0,end=n-1,ans;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]<=nums[n-1]){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
    int bs(vector<int> &nums,int st,int end,int t){
        int mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(nums[mid]==t)
            return mid;
            else if(nums[mid]<t){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotindex=findpivot(nums),n=nums.size();
        if(bs(nums,0,pivotindex-1,target)!=-1)  // check if present in left sorted part
        {
            return bs(nums,0,pivotindex-1,target);
        }
        else if(bs(nums,pivotindex,n-1,target)!=-1)// check if present in right sorted
        { 
            return bs(nums,pivotindex,n-1,target);
        }
       return -1;
    }
};