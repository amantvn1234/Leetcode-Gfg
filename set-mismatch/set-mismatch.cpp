class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    //    vector<int> freq(nums.size()+1,0);
    //    for(int i=0;i<nums.size();i++){
    //        freq[nums[i]]++;
    //    }
    //    vector<int> ans;
    //    int miss;
    //    for(int i=1;i<=nums.size();i++){
    //        if(freq[i]==2){ans.push_back(i);
    //        }
    //        else if(freq[i]==0){
    //         miss=i;
    //         }
    //    }
    //        ans.push_back(miss); 


    int miss,dupl;

    for(int i=0;i<nums.size();i++){
        if(nums[abs(nums[i])-1]<0) // if that no. is already found then us index pr -ve hoga
         dupl=abs(nums[i]);
         else
        nums[abs(nums[i])-1]*=-1;   // mark -ve to value ke barabar wala index
    }
for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<endl;
    if(nums[i]>0){
       miss=i+1;
       break;  
    }
   
}
       return {dupl,miss};
    }
};