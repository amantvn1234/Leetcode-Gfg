class KthLargest {
public:
    int kth;
    multiset<int,greater<int>> sorted;
    KthLargest(int k, vector<int>& nums) {
        kth=k;
        for(auto i:nums){
            sorted.insert(i);
        }
    }
    
    int add(int val) {
        sorted.insert(val);
        int k=kth-1;
        auto it=sorted.begin();
        while(k--){
            it++;
        }
        return *(it);
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */