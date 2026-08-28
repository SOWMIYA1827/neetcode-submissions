class TrieNode{
    public:
      TrieNode* children[26];
      bool isendofword ;

      TrieNode(){
        isendofword = false ;
        for(int i=0 ; i<26 ; i++){
            children[i] = nullptr ;
        }
    }
};

class WordDictionary {
    TrieNode* root ;
    
    bool searchofword( string& word , int index , TrieNode* current){
        if( current == nullptr){
            return false ;
        }

        if( index == word.length()){
            return current->isendofword ;
        }

        char ch = word[index];
        if( ch == '.'){
            for( int i=0 ; i<26 ; i++){
                if( current->children[i] != nullptr ){
                    if(searchofword( word , index+1  , current->children[i])){
                    return true ;
                  }
                }
            }
          return false ;
        }
        else{
          
            int charindex = ch - 'a';
            
                if( current->children[charindex] == nullptr){
                    return false ;
                }
            

            return searchofword( word , index+1 , current->children[charindex]);
        }
    }

public:
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* current = root ;
        for( char ch : word ){
            int index = ch - 'a';
            if( current->children[index] == nullptr){
                current->children[index] = new TrieNode();
            }
            current = current->children[index];
        }
        current->isendofword = true ;
    }
    
    bool search(string word) {
        return searchofword( word , 0  , root );
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */