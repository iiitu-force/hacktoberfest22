#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class node{
public:
	int n;
	node* left;
	node *right;
	node(int n){
		this->n=n;
		left=right=NULL;
	}
};

int printsum(node *r)
{
	if(r==NULL){
		return 0;
	}


	int l=printsum(r->left);
	int r1=printsum(r->right);
	return (l+r1+r->n) ;

}

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
			q.push(r->left);
		}



		cout<<"Enter the right child of "<<temp->n<<endl;
		cin>>data;
		if(data!=-1)
		{
			node * leftchild=new node(data);
			temp->right=leftchild;
			q.push(r->right);
		}



	}
	return r;

}

int main(){
	cout<<"Enter the nodes in tree"<<endl;
	node *root=new node(15);
	root=create(root);
	cout<<"THe sum of node are "<<printsum(root)<<endl;
}
