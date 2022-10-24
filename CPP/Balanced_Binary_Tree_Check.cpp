
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class node{
public:
	int n;
	node *left;
	node *right;
	node(int n){
		this->n=n;
		left=right=NULL;
	}

};

node * create(node *r){
	int data;
	cout<<"Enter the data for root"<<endl;
	cin>>data;
	r->n=data;

	queue<node *>q;
	q.push(r);
	while(!q.empty()){
		node *temp=q.front();

		q.pop();

		cout<<"Enter the left child of "<<temp->n<<endl;
		cin>>data;
		if(data!=-1)
		{
			node * leftchild=new node(data);
			temp->left=leftchild;
			q.push(temp->left);
		}



		cout<<"Enter the right child of "<<temp->n<<endl;
		cin>>data;
		if(data!=-1)
		{
			node * leftchild=new node(data);
			temp->right=leftchild;
			q.push(temp->right);
		}



	}
	return r;

}
int height(node * root){

	if(root==NULL){
		return -1;
	}
return (1+max(height(root->left),height(root->right)));
}

bool checkbalanced(node *root){
	int l=height(root->left);
	int r=height(root->right);

	if (l-r<=1&&(checkbalanced(root->left)&&checkbalanced(root->right))){
		return 1;

	}else{
		return 0;
	}
}


int main(){
	node*root=new node(0);
	root=create(root);
	cout<<"Height "<<height(root)<<endl;
}
