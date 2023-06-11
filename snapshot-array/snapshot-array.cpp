class SnapshotArray {
public:
     int snapno=0;
    vector<map<int,int>> snaps;  // indexes{mp{snapno,val}}
    SnapshotArray(int length) {
        snaps.resize(length);
        for(int i=0;i<length;i++){
            snaps[i][0]=0; //as initially at each index value at snapno 0=0
        } 
    }
    
    void set(int index, int val) {
        snaps[index][snapno]=val;
    }
    
    int snap() {
        return snapno++;
    }
    
    int get(int index, int snap_id) {
        auto it=snaps[index].upper_bound(snap_id);
        it--;
        return it->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */