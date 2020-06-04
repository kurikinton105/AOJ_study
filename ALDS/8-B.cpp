#include<iostream>
#include<string>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

struct Node{
    int key;
    Node *parent,*left,*right;
};

Node *root,*NIL;

void insert(int k){
    Node *y = NIL; // x の親
    Node *x = root;
    Node *z;
    
    z=(Node *)malloc(sizeof(Node));//ｚを移動させるのでそれの設定
    z->key=k;
    z->left=NIL;
    z->right=NIL;
    
    while(x!=NIL){
        y = x; // 親を設定
        if(z->key < x->key){
            x = x->left; // 左の子へ移動
        }else{
            x = x->right; // 右の子へ移動
        }
    }z->parent = y;
    
    if (y == NIL){ // T が空の場合
        root = z;
    }else{
        if( z->key < y->key){
            y->left = z; // z を y の左の子にする
        }else{
            y->right = z; // z を y の右の子にする
        }
    }
}

Node * find(Node *u,int k){ //find関数で見つかったらyes
    //int ans=0;
    while(u !=NIL && k!= u->key){
        if(u->key > k){
            u=u->left;
            //ans= 1;
        }else{
            u = u->right;
            //ans= 0;
        }
    }
    return u;
}

void prePase(Node *u){ //先行巡回
    if(u == NIL){
        return;
    }
    cout << " "<< u->key ;
    prePase(u->left);
    prePase(u->right);
}

void inParse(Node *u){
    if(u==NIL){
        return;
    }
    inParse(u->left);
    cout << " " << u->key;
    inParse(u->right);
}


int main(){
    int n,num;
    string str;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str;
        if(str== "insert"){
            cin >> num;
            insert(num);
            //cout << "insert " << num << endl;
        }else if(str=="find"){
            cin >> num;
            //cout << "find" << endl;
            if(find(root,num)){
                cout << "yes" << endl;
            }else{
                cout << "no"<< endl;
            }
            
        }else if(str== "print"){
            //cout << "print" << endl;
            inParse(root);
            cout << endl;
            prePase(root);
            cout << endl;
            
        }
    }
}


