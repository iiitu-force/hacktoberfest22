class Solution {
  public:
   Node* level(Node* root, int start, map<Node*,Node*> &parent){
        queue<Node*> q;
        Node* res=NULL;
        q.push(root);
        parent[root] = NULL;
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            if(temp->data==start){
                res = temp;;
            }
            if(temp->left){
                parent[temp->left] = temp;
                q.push(temp->left);
            }
            if(temp->right){
                parent[temp->right] = temp;
                q.push(temp->right);
            }
        }
        return res;
    }
    int burn(Node* res,map<Node*,Node*> &parent){
        map<Node*,bool> vis;
        queue<Node*> q;
        q.push(res);
        vis[res]=true;
        int flag=0;
        int ans=0;
        while(!q.empty()){
            flag=0;
            int size = q.size();
            for(int i=0;i<size;i++){
                Node* temp = q.front();
                q.pop();
                if(temp->left && !vis[temp->left]){
                    vis[temp->left]=true;
                    flag=1;
                    q.push(temp->left);
                }
                if(temp->right && !vis[temp->right]){
                    vis[temp->right]=true;
                    flag=1;
                    q.push(temp->right);
                }
                if(parent[temp] && !vis[parent[temp]]){
                    vis[parent[temp]] = true;
                    flag=1;
                    q.push(parent[temp]);
                }
            }
                if(flag==1){
                ans++;
            }
        }
        return ans;
    }
    int minTime(Node* root, int start) 
    {
         map<Node*,Node*> parent;
        Node* res = level(root,start,parent);
        int ans = burn(res,parent);
        return ans;
    }
};
