class Solution {
public:
// class Local {
//     public:
//     Local(int k) { this->k = k; }
//     bool operator ()(vector<int>&i, vector<int>& j) {
//         return i[k]>j[k];
//      }

//    int k;
// };
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        // sort(score.begin(),score.end(),Local(k));
        sort(score.begin(),score.end(),[&](vector<int>&a ,vector<int>& b){return a[k]>b[k];});
        return score;
    }
};