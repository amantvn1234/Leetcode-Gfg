class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001]={0};
        for(int i=0;i<arr1.size();i++){
            freq[arr1[i]]++;
        }
        int j=0;
        for(int i=0;i<arr2.size();i++){
            while(freq[arr2[i]]){
                arr1[j++]=arr2[i];
                freq[arr2[i]]--;
            }
        }
        for(int i=0;i<1001;i++){
            if(freq[i]){
                int ele_fre=freq[i];
            while(ele_fre--){
                arr1[j++]=i;
            }
            }
        }
        return arr1;
    }
};