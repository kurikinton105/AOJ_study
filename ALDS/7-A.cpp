#include <iostream>
#include<stdio.h>
using namespace std;
//#define MAX ;
#define NIL -1;

struct Node {int p,l,r; };//構造体を作って子供の表記を楽に行う。

Node T[100005];
int D[100005];

int rec(int u){ //u=node,p
    int d;
    if(T[u].p == -1){
        d=0;
    }
    while(T[u].p != -1){
        u=T[u].p;
        d++;
    }
    return d;
    
}



int main(void){
    int n,u[100005][20],v,d,depth[100005];
    //int c[100005][5];
    cin >> n;
    for(int i=0;i< n;i++){// setting NIL
        T[i].p = NIL;
        for(int j=0;j<20;j++){
            u[i][j] = NIL;
        }
    }
    
    
    for(int i=0;i<n;i++){
        cin >> v >>d; //2つまで入力を行う,node,chldrenの数
        //cout <<v <<";";
        for(int j=0;j<d;j++){
            cin >> u[v][j];
            //cout << u[v][j] << " ";
            T[u[v][j]].p = v; //setting a parent
        }
        
        
    }//u[7][0]=-1;
    //cout << u[7][0] << endl;
    
    for(int i=0;i<n;++i){
        depth[i]=rec(i);
    }
    int depth_max =0;
    for(int i=0;i<n;i++){
        //cout << depth[i] << " ";
        if(depth[i]>= depth_max){
            depth_max = depth[i];
            
        }
    }
    //cout << depth_max << endl;
    int k=0;
    //int dep = depth_max;
    int fin[100005];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(u[i][j]==-1){
                fin[i] =j;
                //cout << fin[i] << " ";
            }
        }
    }//cout << endl;
    //出力
    for(int i=0;i<n;i++){
        cout << "node " << i << ": parent = " << T[i].p<<", depth = "<< depth[i] << ",";
        //witch(depth[k]){
        //    case -1:
        //        cout << " root" ;
        //        break;
        //    case dep:
        //        cout <<" internal node" ;
        //        break;
        //    default:
        //        cout <<" leaf" ;
        //        break;
        //}
        
        if(depth[i]== 0){
            cout << " root" ;
        }else if(u[i][0]==-1){
            //depth[i]== depth_max){
            cout <<" leaf" ;
        }else{
            cout << " internal node" ;
        }
        
        
        cout << ", " << "[" ;
        
        for(int j=0;j<1;j++){
            
            //cout << ", ";
            if(u[i][j]==-1){
                if(j!=0){
                    break;
                }
            }else{
                cout  << u[i][j] ;
                
            }
        }
        for(int j=1;j<10;j++){
            
            
            if(u[i][j]==-1){
                if(j!=0){
                    break;
                }
            }else{
                cout << ", ";
                cout << u[i][j] ;
            }
        }
        
        cout << "]" <<endl;
        k++;
    }
}

