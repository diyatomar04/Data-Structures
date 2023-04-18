#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

char stack[MAX];
char infix[MAX], postfix[MAX];
int top=-1;

void push (char);
void intopostfix();
char pop();
void print();
int isempty();
int space(char);
int precendence(char);

int main(){
    printf("enter infix exp ");
    scanf("%d",&infix);
    intopostfix();
    print();
    return 0;
}

void intopostfix(){
    
    int i,j=0;
    char next;
    char symbol;
    
    for(i=0;i<strlen(infix);i++){
        
        if(!space(symbol)){
            switch(symbol){
                case '(':
                push(symbol);
                break;
                
                case ')':
                while((next=pop())!='('){
                    postfix[j++]=next;
                }
                break;
                
                case '+':
                case '-':
                case'/':
                case'*':
                case'^':
                while(!isempty() && precendence(stack[top]>precendence(symbol))){
                    push (symbol);
                }
                break;
                
                default:
                postfix[j++]=symbol;
                break;
            }
        }
    }
    
    while(!isempty()){
        postfix[j++]=pop();
    }
        postfix[j]='\0';
}

int space(char c){
    if(c==' ' || c=='\t'){
        return 1;
    }
    else
    return 0;
}

int precendence(char symbol){
    switch(symbol){
        case '+':
        case '-':
        return 1;
        
        case '*':
        case '/':
        return 2;
        
        case '^':
        return 3;
        
        default :
        return 0;
    }
}

void push(char c){
    if(top==MAX-1){
        printf("overflow");
    }
    else{
        top++;
        stack[top]=c;
    }
    }

char pop(){
    char c;
    if(top==-1)
        printf("underflow");
    else{
        c=stack[top];
        top--;
    }
    return c;
}
void print(){
   int i=0;
   printf("Equivalent postfix exp ");
  // while(postfix[i]){
  for(i=0;i<strlen(postfix);i++){
       printf("%c",postfix[i]);
   }
   printf("\n");
}

int isempty(){
    if(top==-1)
    return 1;
    else
    return 0;
}


