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
int size(Node* head){
    Node* temp= head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
void print_linked_list(Node* head){
    Node* temp_head=head;
    while(temp_head!=NULL){
        cout<<temp_head->val<<" ";
        temp_head=temp_head->next;
    }
    cout<<endl;
}
void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
       if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
       }
       newnode->next=head;
       head=newnode;
} 
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL&&tail==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;

}
void deletetion(Node* &head,Node* &tail,int pos){
    if (head == NULL || pos < 0 || pos >= size(head)) {
        return;
    }
    Node* temp = head;
    if (pos == 0) {
        Node* delete_node = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL; 
        }
        delete delete_node;
    } else {
        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }
        Node* delete_node = temp->next;
        temp->next = temp->next->next;
        if (temp->next == NULL) {
            tail = temp;
        }
        delete delete_node;
    }
}
    
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;

        if(x==0){
            insert_at_head(head,tail,v);
            print_linked_list(head);
        }

        else if(x==1){
            insert_at_tail(head,tail,v);
            print_linked_list(head);
        }

        else if(x==2){
            if(v==0){
                deletetion(head,tail,v);
                print_linked_list(head);

            }
            else if(v!=size(head)&&v<size(head)){
                deletetion(head,tail,v);
                print_linked_list(head);
            }
            else{
                print_linked_list(head);
            }
                
        }
    }
    return 0;
}