#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int st[MAX];
void push1(int st[],int val);
int pop1(int st[]);
void display_s1(int st[]);
int peek(int st[]);
void push2(int st[],int val);
int pop2(int st[]);
void display_s2(int st[]);
int top1=-1;
int top2=MAX;


int main(){
    int val,opt;
   do{
        
        printf("\n 1. PUSH in s1");
        printf("\n 2. POP in s1");
        printf("\n 3. DISPLAY IN s1");
        printf("\n 4. PUSH in s2");
        printf("\n 5. POP in s2");
        printf("\n 6. DISPLAY in s2");
        printf("\n 7. EXIT");
        printf("\n Enter your option: ");
        scanf("%d",&opt);
        switch(opt){
            case 1:
            printf("\n Enter no to be pushed in the stack ");
            scanf("%d",&val);
            push1(st,val);
            break;
            
            case 2:
            val=pop1(st);
            if(val!=-1){
                printf("\nValue deleted from stack is %d",val);
            }
            break;
            
            case 3:
            display_s1(st);
            break;
            
            case 4:
            printf("\n Enter no to be pushed in the stack ");
            scanf("%d",&val);
            push2(st,val);
            break;
            
            case 5:
            val=pop2(st);
            if(val!=-1){
                printf("\nValue deleted from stack is %d",val);
            }
            break;
            
            case 6:
            display_s2(st);
            break;
            
        }
        
    } while(opt!=7);
    return 0;
}

void push1(int st[],int val){
    if(top1==top2-1){
        printf("Stack Overflow");
    }
    else{
        top1++;
        st[top1]=val;
    }
}

int pop1(int st[]){
    int val;
    if(top1=-1){
        printf("Stack Overflow");
    }
    else{
        val=st[top1];
        top1--;
        return val;
    }
}

void display_s1(int st[]){
    int i;
    if(top1==-1){
        printf("\n Stack1 is Empty");
    }
    else{
        for(i=0;i<=top1;i++){
            printf("%d ",st[i]);
        }
    }
}

void push2(int st[],int val){
    if(top2-1==top1){
        printf("Stack Overflow");
    }
    else{
        top2--;
        st[top2]=val;
    }
}

int pop2(int st[]){
    int val;
    if(top2==MAX){
        printf("Stack Overflow");
    }
    else{
        val=st[top2];
        top2++;
        return val;
    }
}

void display_s2(int st[]){
    int i;
    if(top2==MAX){
        printf("\n Stack2 is Empty");
    }
    else{
        for(i=top2;i<=MAX;i++){
            printf("%d ",st[i]);
        }
    }
}





