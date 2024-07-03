#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void inserting_node(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail=newnode;
        return;
    }
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next = newnode;
    tail=newnode;
}
void value_check_in_list(Node* head,Node* tail,int x){
    int count=-1;
    bool flag=false;
    for(Node* i=head;i!=NULL;i=i->next){
        count++;
        if(i->val==x){
            cout<<count<<endl;
            flag=true;
            return;
        }  
    }
    if(!flag){
        cout<<"-1"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--){
        Node* head = NULL;
        Node* tail=NULL;
        while(true){
            int val;
            cin>>val;
            if(val==-1) break;
            inserting_node(head,tail,val);
        }
        int x;
        cin>>x;
        value_check_in_list(head,tail,x);
    }
    return 0;
}