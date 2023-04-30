class Trie {
public:
class node{ public:
    vector<node*> child;
    int prefixcount;
    bool endofword;
   
    node(){
        child.resize(26,NULL);
        prefixcount=0;
        endofword=false;
    }
};

    node *root;
    Trie() {
       root=new node(); 
    }
    
    void insert(string word) {
        node *curr=root;
        for(int i=0;i<word.size();i++){
            int idx=word[i]-'a';
            if(curr->child[idx]==NULL){
                curr->child[idx]=new node();
            }
            curr->prefixcount++;
            curr=curr->child[idx];
        }
        curr->endofword=true;
        curr->prefixcount++;
    }
    
    bool search(string word) {
        node *curr=root;
         for(int i=0;i<word.size();i++){
            int idx=word[i]-'a';
            if(curr->child[idx]==NULL){
                return false;
            }
           curr=curr->child[idx];
        }
        return curr->endofword==true;
    }
    
    bool startsWith(string prefix) {
        node *curr=root;
        for(int i=0;i<prefix.size();i++){
            int idx=prefix[i]-'a';
            if(curr->child[idx]==NULL){
                return false;
            }
           curr=curr->child[idx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */