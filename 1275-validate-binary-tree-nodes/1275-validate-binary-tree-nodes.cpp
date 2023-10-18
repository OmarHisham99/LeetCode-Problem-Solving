class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int root = checkRoot(n,leftChild,rightChild); 
        if(root==-1) return false;
        bool result = dfs(root,leftChild,rightChild,n);
       
       
        if(!result) return false; 
        return true; 
    }

    int checkRoot(int n, vector<int>& leftChild, vector<int>& rightChild)
    {
        unordered_set<int> children ; 
        children.insert(leftChild.begin(),leftChild.end());
        children.insert(rightChild.begin(),rightChild.end()); 
        for(int i = 0; i < n;i++){
            if(children.find(i)==children.end()){
                return i ; 
            }
        }
        return -1;
    }

    bool dfs(int root, vector<int>&leftChild,vector<int>&rightChild,int n) 
    {
        stack<int> nodes ; 
        unordered_set<int> seen ; 
        nodes.push(root); 
        seen.insert(root); 
        while(!nodes.empty()) { 
            int node = nodes.top() ; 
            nodes.pop(); 

            int children[] = {leftChild[node],rightChild[node]}; 
            for(int child : children){ 
                if(child!=-1){
                    if(seen.find(child)!=seen.end()) return false; 
                nodes.push(child); 
                seen.insert(child); 
                }
            }
        }        
        return seen.size()==n ; 
    }
    
 


};