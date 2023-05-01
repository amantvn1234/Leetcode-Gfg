class Solution {
public:
struct Local {
    Local(int paramA) { this->paramA = paramA; }
    bool operator ()(vector<int>&i, vector<int>& j) {
        return i[paramA]>j[paramA];
     }

   int paramA;
};
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(),score.end(),Local(k));
        return score;
    }
};