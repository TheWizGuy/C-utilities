#include <stdio.h>
#include <stdlib.h>
typedef struct String{
    char* val;
    char ch;
    size_t length;
    size_t msize;
}String;

String input(String x){
    x.val=NULL;
    x.length=0;
    x.msize=1;

    x.val=(char*) malloc(x.msize*sizeof(char));
    while((x.ch=getchar())!='\n'){
        if (x.length+1>=x.msize){
            x.msize *=2;
            x.val=realloc(x.val,x.msize*sizeof(char));
        }
        x.val[x.length++]=x.ch;
    }
    x.val[x.length]='\0';
    return x;
}

void display(String x){
    printf("%s\n",x.val);
}

//trying out the functions using main()
void main(){
    printf("Enter the string: ");
    String a=input(a);
    printf("Entered String: ");
    display(a);
    printf("%zu",a.length);
}