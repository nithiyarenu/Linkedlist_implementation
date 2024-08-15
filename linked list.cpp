#include<iostream>
using namespace std;
class node{
	public:
		int key;
		int data;
		node* next;
		
		node(){
			key=0;
			data=0;
			next=NULL;
		}
		
		node(int k,int d){
			key=k;
			data=d;
			
		}
};
class singlylinkedlist{
	public:
		node* head;//whenever we create a object of ssl we will have a pointer inside pointing to head
		
		singlylinkedlist(){
			head=NULL;
		}
		
		singlylinkedlist(node* n){//takes address of node obj as argument
		head=n;
	}
		//check if node exists using key values
		node* nodeExists(int k){
			node* temp=NULL;
			node* ptr=head;
			while(ptr!=NULL){
				if(ptr->key==k){
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
			
		}
		
		//append a node to the list
		
		void appendNode(node *n){
			if(nodeExists(n->key)!=NULL){
				cout<<"node already exists with key value"<<n->key<<endl;
			}
			else{
				if(head==NULL){
					head=n;
					cout<<"node appended"<<endl;
				}
				else{
					node* ptr=head;
					while(ptr->next!=NULL){
						ptr=ptr->next;
					}
					ptr->next=n;
					cout<<"node appended"<<endl;
				}
			}
		}
			//prepend node
			
			void prependNode(node *n){
			if(nodeExists(n->key)!=NULL){
				cout<<"node already exists with key value"<<n->key<<endl;
			}
			else{
				n->next=head;
				head=n;
				cout<<"node prepended"<<endl;
				
			}
			}
			
			//INSERT A NODE
			void insertNode(int k,node* n){
				node* ptr=nodeExists(k);
				if(ptr==NULL){
					cout<<"key doesnt exists"<<endl;
					
				}
				else{
					if(nodeExists(n->key)!=NULL){
						cout<<"already the key exists"<<n->key<<endl;
					}
					else{
						n->next=ptr->next;
						ptr->next=n;
						cout<<"node inserted"<<endl;
					}
				}
			}
			
			//DELETE A NODE BY UNIQUE KEY
			
			void deleteNode(int k){
				if(head==NULL){
					cout<<"nothing exists"<<endl;
				}
				else if(head!=NULL){
					if(head->key==k){
						head=head->next;
					}
					else{
						node* temp=NULL;
						node* ptr=head;
						node* currptr=head->next;
						while(currptr!=NULL){
						
						if(currptr->key==k){
						temp=currptr;
						currptr=NULL;
						}
						else{
							ptr=ptr->next;
							currptr=currptr->next;
						}
						
					}
					if(temp!=NULL){
						ptr->next=temp->next;
						cout<<"node unlinked"<<endl;
					}
					else{
						cout<<"node doesnt exist with key value"<<k<<endl;
					}
					}
				}
			}
			
			//UPDATE NODE
			
			void updateNode(int k,int d){
				node* ptr=nodeExists(k);
				if(ptr!=NULL){
					ptr->data=d;
					cout<<"node updated"<<endl;
				}
				else{
					cout<<"node doesnt exists"<<endl;
				}
			}
			
			//PRINTING
			
			void printing(){
				if(head==NULL){
					cout<<"nothing exists";
				}
				else{
					node* temp=head;
					while(temp!=NULL){
						cout<<"("<<temp->key<<","<<temp->data<<")-->";
						temp=temp->next;
					}
				}
			}
	
		
};

int main(){
	singlylinkedlist s1;
	int option;
	int key1,k1,data1;
	do{
		cout<<"\n What operation u want to perform from 1 to 7. Enter 0 to exit"<<endl;
		cout<<"1.appendnode()"<<endl;
		cout<<"2.prependnode()"<<endl;
		cout<<"3.insertanode()"<<endl;
		cout<<"4.deleteanode()"<<endl;
		cout<<"5.updatenode()"<<endl;
		cout<<"6.printnode()"<<endl;
		cout<<"7.clr screen"<<endl;
		
		cin>>option;
		node* n1=new node();//obj of node in created in heap memory,n1 is ptr to tat obj-its global can acess throughout the program
		
		
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"append node->enter key and data"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s1.appendNode(n1);
				break;
			case 2:
				cout<<"prepend node->enter key and data"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s1.prependNode(n1);
				break;
			case 3:
				cout<<"insert node after a certain key"<<endl;
				cin>>k1;
				cout<<"enter key and data of new node"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s1.insertNode(k1,n1);
				break;
			case 4:
				cout<<"delete node of a certain key"<<endl;
				cin>>k1;
				s1.deleteNode(k1);
				break;
			case 5:
			    cout<<"enter key and data for updating a certain value at a certain key"<<endl;
				cin>>key1;
				cin>>data1;
				s1.updateNode(key1,data1);
				break;
			case 6:
				s1.printing();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"U have entered a wrong number"<<endl;
		}
	}while(option!=0);
	
	
	
	return 0;
}
