#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void print_linked_list(Node* head){
    Node* temp_head=head;
    while(temp_head!=NULL){
        cout<<temp_head->val<<" ";
        temp_head=temp_head->next;
    }
    cout<<endl;
}


void insert(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=newnode;
}
void remove(Node* &head) {
    for(Node* i=head;i!=NULL;i=i->next){
        Node* pre_node=i;
        for(Node* j=i->next;j!=NULL;){
            if(i->val==j->val){
                Node* delete_node=j;
                pre_node->next=j->next;
                j=j->next;
                delete delete_node;
            }
            else{
                 pre_node=j;
                 j=j->next;

            } 
        }
    }
}
    
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        insert(head,tail,val);
    }
    remove(head);
    print_linked_list(head);
    return 0;
}