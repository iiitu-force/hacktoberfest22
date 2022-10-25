
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
int height(node *root){
	if(root==NULL){
		return 0;
	}

	return (1+max(height(root->left),height(root->right)));
}

int diameter(node*root){
	if(root==NULL){
		return 0;
	}

	int a=height(root->left)+height(root->right);
	int b=diameter(root->left);
	int c=diameter(root->right);
	return max(a,max(b,c));

}
pair<int,int> diameter_optimised(node*root){
	//first=height
	//second=diameter
pair<int ,int> p;
	if(root==NULL){
p.first=0;
p.second=0;
return p;
	}

	pair<int,int> lh=diameter_optimised(root->left);
	pair<int,int> rh=diameter_optimised(root->right);

	height_node=1+min(lh.first,rh.first);
	diameter_node=max(lh.first+rh.first,max(lh.second,lh.second));

	p=make_pair(height_node,diameter_node);
	return p;
}//O(n);//ek hibaar me sb kuch mangwa lo


int main(){
node *root =new node(15);
root=create(root);
cout<<"Diameter : "<<diameter(root)<<endl;


}
