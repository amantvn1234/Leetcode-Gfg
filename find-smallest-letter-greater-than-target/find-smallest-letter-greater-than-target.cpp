class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans=0;
        int st=0,end=letters.size()-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(letters[mid]>target){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return letters[ans];
    }
};