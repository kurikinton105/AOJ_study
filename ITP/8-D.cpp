#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    char s[200],p[101],s1[200];
    scanf("%s %s", s, p);
    //scanf("%s", s);
    //scanf("%s",p);
    strcpy(s1, s);
    strcat(s, s1);
    //printf("%s\n", s);
    //printf("%s\n",p);
    if( strstr(s, p) == NULL ) printf("No\n");
    else printf("Yes\n");
    
}


