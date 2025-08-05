#include<iostream>
using namespace std;

struct node{
    node* next;
    int data;

    node(){
        this->next = nullptr;
    }

    node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

struct linked_list{
    node* head;

    linked_list(){
        node* temp = new node();
        this->head = temp;
    }

    void print(){
        node* temp = this->head->next;
        while (temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void create_sort(){
        node* temp = this->head;
        int n;
        cout<<"Enter the list size:";
        cin>>n;
        for(int i = 0; i < n; i++){
            int tempVar;
            cin>>tempVar;
            node* newNode = new node(tempVar);
            temp->next = newNode;
            temp = temp->next;
        }
        
        node* iprev = this->head;
        for (node* i = this->head->next; i != nullptr && i->next != nullptr; (i = i->next), (iprev = iprev->next)) {
            node* jprev = i;
            for (node* j = i->next; j != nullptr; (j = j->next), (jprev = jprev->next)) {
                if (i->data > j->data) {
                    if (i->next == j) {
                        // adjacent swap
                        iprev->next = j;
                        i->next = j->next;
                        j->next = i;

                        // fix i to new position
                        i = j;
                        j = i->next;
                        jprev = i; // jprev should follow i
                    } else {
                        // non-adjacent swap
                        node* inext = i->next;
                        node* jnext = j->next;

                        iprev->next = j;
                        jprev->next = i;
                        j->next = inext;
                        i->next = jnext;

                        // after swap, reset i and j
                        node* temp = i;
                        i = j;
                        j = temp;
                    }
                }
            }
        }
    }

};

int main(){
    linked_list ll1;
    ll1.create_sort();
    ll1.print();
    return 0;
}