#include <bits/stdc++.h>
using namespace std;
/**
    abc##de#g##f###
                a
        b
    c       d
 #    #   e   f
        #   g# #
           # #
**/

//利用队列建立二叉树
typedef struct tree{
    char data;
    tree* pLChild;
    tree* pRChild;
    tree(char c){
        data = c;
        pLChild=NULL;
        pRChild=NULL;
    }
}Btree;

queue<Btree*> par;
queue<char> chl;

//通过递归插入结点
void addNode(Btree *p){
    char data = chl.front();
    chl.pop();
    if(!p->pLChild && data!='#'){
        p->pLChild = new Btree(data);
        addNode(p->pLChild);
    }
    data = chl.front();
    chl.pop();
    if(!p->pRChild && data!='#'){
        p->pRChild = new Btree(data);
        addNode(p->pRChild);
    }
}

//中序遍历
void showRes(Btree *p){
    if(p->pLChild)  showRes(p->pLChild);
    cout<<p->data<<" ";
    if(p->pRChild) showRes(p->pRChild);
}

//释放堆内存
void clearTree(Btree *tree){
    if(tree->pLChild)   clearTree(tree->pLChild);
    if(tree->pRChild)   clearTree(tree->pRChild);
    delete tree;
    tree = NULL;
}


int main(){
    char a[101];
    Btree *p;
    while(cin>>a){
        p = new Btree(a[0]);            //根
        par.push(p);
        for(int i=1;i<strlen(a);i++)    //孩子数值
            chl.push(a[i]);
        addNode(p);
        showRes(p);
        cout<<endl;
        clearTree(p);
    }
    return 0;
}
