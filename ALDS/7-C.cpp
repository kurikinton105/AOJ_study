#include<iostream>
using namespace std;
#define MAX 10000
#define NIL -1

struct Node {int p,l,r;};
struct Node T[MAX];
int n;

void prePase(int u){ //先行巡回
    if(u == NIL){
        return;
    }
    cout << " "<< u ;
    prePase(T[u].l);
    prePase(T[u].r);
}

void inParse(int u){
    if(u==NIL){
        return;
    }
    inParse(T[u].l);
    cout << " " << u;
    inParse(T[u].r);
}

void postParse(int u){
    if(u==NIL) return;
    postParse(T[u].l);
    postParse(T[u].r);
    cout << " " << u;
    
}

int main(){
    int v,l,r,root;
    cin >> n;
    for(int i=0;i<n;i++){
        T[i].p =NIL;
    }
    
    for(int i=0;i<n;i++){
        cin >> v>>l>>r;
        
        T[v].l =l;
        T[v].r=r;
        if(l!= NIL){
            T[l].p=v;
        }
        if(r!=NIL){
            T[r].p=v;
        }
    }
    
    for(int i=0;i<n;i++){
        if(T[i].p==NIL){
            root=i;
        }
    }
    cout << "Preorder"  << endl;
    prePase(root);
    cout << endl;
    cout << "Inorder"  << endl;
    inParse(root);
    cout << endl;
    cout << "Postorder"  << endl;
    postParse(root);
    cout << endl;
    
    return 0;
    
}
