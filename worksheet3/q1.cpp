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

    void append(int data){
        node* temp = this->head;
        node* newNode = new node(data);
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void print(){
        node* temp = this->head->next;
        while (temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    int count(){
        int n = 0;
        node* temp = this->head->next;
        while(temp != nullptr){
            n++;
            temp = temp->next;
        }
        return n;
    }

    void modify(int index, int data){
        node* temp = this->head;
        for(int i = 0; i <= index; i++){
            temp = temp->next;
        }
        temp->data = data;
    }

};

int main(){
    linked_list ll1;
    ll1.append(1);
    ll1.append(2);
    ll1.append(3);
    ll1.append(4);
    ll1.append(5);
    ll1.print();
    cout<<ll1.count()<<endl;
    ll1.modify(2,3);
    ll1.print();
    return 0;
}