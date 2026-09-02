struct Node{
    Node* links[26];
    bool fl = false;

    Node(){
        for(int i = 0; i < 26; i++){
            links[i] = nullptr;
        }
    }
};

class PrefixTree {
private:
    Node* root;

public:
    PrefixTree() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* curr = root;
        for(char c: word){
            int i = c - 'a';
            if(curr->links[i] == nullptr){
                curr->links[i] = new Node();
            }
            curr = curr->links[i];
        }
        curr->fl = true;
    }
    
    bool search(string word) {
        Node* curr = root;
        for(char c : word){
            int i = c - 'a';
            if(curr->links[i] == nullptr){
                return false;
            }
            curr = curr->links[i];
        }
        return curr->fl;
    }
    
    bool startsWith(string prefix) {
        Node* curr = root;
        for(char c : prefix){
            int i = c - 'a';
            if(curr->links[i] == nullptr){
                return false;
            }
            curr = curr->links[i];
        }
        return true;
    }
};
