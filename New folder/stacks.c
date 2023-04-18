#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int st[MAX],top=-1;
void push(int st[],int val);
int pop(int st[]);
void display(int st[]);
int peek(int st[]);

int main(){
    int val,opt;
   do{
        printf("\n *****MAIN MENU*****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter your option: ");
        scanf("%d",&opt);
        switch(opt){
            case 1:
            printf("\n Enter no to be pushed in the stack ");
            scanf("%d",&val);
            push(st,val);
            break;
            
            case 2:
            val=pop(st);
            if(val!=-1){
                printf("\nValue deleted from stack is %d",val);
            }
            break;
            
            case 3:
            val=peek(st);
            if(val!=-1)
            printf("Topmost val is %d",val);
            break;
            
            case 4:
            display(st);
            break;
            
        }
        
    } while(opt!=5);
    return 0;
}

void push(int st[],int val){
    if(top==MAX-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        st[top]=val;
    }
}

int pop(int st[]){
    int val;
    if(top=-1){
        printf("Stack Overflow");
    }
    else{
        val=st[top];
        top--;
        return val;
    }
}

void display(int st[]){
    int i;
    if(top==-1){
        printf("\n Stack is Empty");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d ",st[i]);
        }
    }
}

int peek(int st[]){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        return st[top];
    }
}
