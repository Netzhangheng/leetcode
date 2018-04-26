#include <bits/stdc++.h>
using namespace std;

typedef struct linkList{
    int data;
    linkList * next;
    linkList(int tmp){
        data = tmp;
        next = NULL;
    }
    linkList(){         //头节点
        next = NULL;
    }
}Mylist;

//添加结点
void addNode(Mylist *head,Mylist *node){
    Mylist *p=head;
    Mylist *q=head->next;
    while(true){
        if(q==NULL || node->data<=q->data){
            p->next = node;
            node->next = q;
            break;
        }
        p=q;
        q=q->next;
    }
}
//输出
void showRes(Mylist *head){
    Mylist *p= head->next;
    while(p->next!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data<<endl;
}
//销毁链表
void delList(Mylist *head){
    Mylist *p = head->next;
    Mylist *q;
    while(p!=NULL){
        q = p->next;
        delete p;
        p = q;
    }
    head->next = NULL;
}

int main(){
    int n;
    Mylist *head = new Mylist();
    int tmp;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>tmp;
            Mylist *oneNew = new Mylist(tmp);
            addNode(head,oneNew);
        }
        showRes(head);
        delList(head);
    }
    return 0;
}
