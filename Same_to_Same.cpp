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

void first_linked_list(Node* &head_1,int val){
    Node* newnode_1=new Node(val);
    Node* temp_1=head_1;

    if(head_1==NULL){
        head_1=newnode_1;
        return;
    }

    while(temp_1->next!=NULL){
        temp_1=temp_1->next;
    }
    temp_1->next=newnode_1;
}

void second_linked_list(Node* &head_2,int val){
    Node* newnode_2=new Node(val);
    Node* temp_2=head_2;

    if(head_2==NULL){
        head_2=newnode_2;
        return;
    }

    while(temp_2->next!=NULL){
        temp_2=temp_2->next;
    }
    temp_2->next=newnode_2;
}

void result(Node* head_1,Node* head_2,int count_1,int count_2){
    Node* j=head_2;
    bool flag=true;

    if(count_1!=count_2){
        cout<<"NO";
        return;
    }

    for(Node* i=head_1;i!=NULL;i=i->next){
            if(i->val != j->val){
                flag=false;
                cout<<"NO";
                break;
            }
            j=j->next; 
    }

    if(flag){
        cout<<"YES";
    }
}

int main(){
    Node* head_1=NULL;
    Node* head_2=NULL;
    int count_1=0,count_2=0;

    while(true){
        
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        count_1++;
        first_linked_list(head_1,val);
    }

    while(true){
        
        int val;
        cin>>val;
        if(val==-1){
            break;
        }
        count_2++;
        second_linked_list(head_2,val);
    }

    result(head_1,head_2,count_1,count_2);

    return 0;
}