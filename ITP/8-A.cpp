#include <cstdio>
#include <cctype>

int main(){
    char ch;
    
    while(1){
        scanf("%c", &ch);
        
        if(isupper(ch)){
            printf("%c", tolower(ch));
        }
        else if(islower(ch)){
            printf("%c", toupper(ch));
        }
        else{
            printf("%c", ch);
        }
        
        if(ch=='\n') break;
    }
    
    return 0;
}
