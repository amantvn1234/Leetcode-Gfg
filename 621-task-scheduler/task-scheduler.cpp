class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26,0);
        priority_queue<int> pq;

        for(int i=0;i<tasks.size();i++){
            v[tasks[i]-'A']++;
        }
        for(int i=0;i<26;i++){
            if(v[i]){
                pq.push(v[i]);
            }
        }

        // priority queue has now freq of all elements
        int timer =0;
        queue<pair<int,int>> wq;   //waiting queue <activation_time,freq>

        while(pq.size()||wq.size()){// if any of them is not empty
            timer++;
            if(pq.size()){
                int freq=pq.top();
                if(--freq)
                wq.push({timer+n,freq});   // inserting in wq with timing to get activated
                pq.pop();
            }

            if(wq.size()){
                if(timer==wq.front().first){
                    pq.push(wq.front().second);
                    wq.pop();
                }
            }

        }

        return timer;

    }
};