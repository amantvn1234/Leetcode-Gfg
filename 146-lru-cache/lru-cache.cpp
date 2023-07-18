class LRUCache {
public:
class node{
 public:
 int val,k;
 node *next,*prev;
 node(int key,int value){
     k=key;
     val=value;
 }
}; 

node *st=new node(-1,-1);
node *end=new node(-1,-1);
 
 node * insertnode(int key, int val){
     node *n=new node(key,val);
     n->next=st->next;
     n->prev=st;
     st->next->prev=n;
     st->next=n;
     return n;
 }

 void deletenode(node *n){
     n->next->prev=n->prev;
     n->prev->next=n->next;
     delete(n);
 }

int cap;
unordered_map<int,node*> m;
    LRUCache(int capacity) {
        cap=capacity;
        st->next=end;
        end->prev=st;        
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            int value=m[key]->val;
            deletenode(m[key]);
            m[key]=insertnode(key,value);
             cout<<endl;
            return value;
        }
        else{
            return -1;
        }
       
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            deletenode(m[key]);
            m[key]=insertnode(key,value);
        }
        else if(cap==m.size()){
            m.erase(end->prev->k);
            deletenode(end->prev);
            m[key]=insertnode(key,value);
        }
        else{
            m[key]=insertnode(key,value);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */