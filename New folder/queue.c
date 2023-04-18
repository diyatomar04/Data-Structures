#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int q[MAX];
int front=-1,rear=-1;
void insert(void);
int delete_ele(void);
int display(void);
int peek(void);
int main(){
    int opt,val;
    do{
        printf("\n\n ***** MAIN MENU *****");
        printf("\n 1. Insert an element");
        printf("\n 2. Delete an element");
        printf("\n 3. Peek");
        printf("\n 4. Display the queue");
        printf("\n 5. EXIT");
        printf("\n Enter your option : ");
        scanf("%d", &opt);
        switch(opt){
            
            case 1:
            insert();
            break;
            
            case 2:
            val=delete_ele();
            if(val!=-1){
                printf("\nNo. deleted is %d",val);
            }
            break;
            
            case 3:
            val=peek();
            if(val!=-1)
            printf("\n1st value in queue is %d ",val);
            break;
            
            case 4:
            display();
            break;
        }
    }while(opt!=5);
    return 0;
}

void insert(){
    int num;
    printf("Enter no to be inserted in queue ");
    scanf("%d",&num);
    if(rear==MAX-1)
      printf("Underflow");
    else{
        if(rear==-1 && front==-1){
            front=rear=0;
        }
        else
            rear++;
        q[rear]=num;
    }
}

int delete_ele(){
    int val;
    if(front>rear)
       front=rear=-1;
    else{
        val=q[front];
        front++;
    }
    return val;
}

int peek(){
    if(front==-1 || front>rear){
        printf("\n Queue is empty");
        return -1;
    }
    else{
        return q[front];
    }
}

int display(){
    int i;
    if(front==-1 && front>rear)
        printf("\n Queue is empty");
    else{
        for(i=front;i<=rear;i++){
            printf(" %d",q[i]);
        }
    }
}
