#include <stdio.h>
#include<stdbool.h>
#define CAPACITY 5
int ourQueue[CAPACITY];
int rear = -1, front =0, totalitem = 0;

bool isFull(){
if(totalitem==CAPACITY){
    return true;
}
 return false;

bool isEmpty(){
if(totalitem==0){
    return true;
   }
} return false;

void enqueue (int item){
     if (isFull()){
        printf("The queue is full.\n");
        return;
     }
        rear = (rear+1)%CAPACITY;
        ourQueue[rear]= item;
        totalitem++;
        }

        int dequeue(){
           if(isEmpty()){

            printf("The queue is empty.\n");
            return -1;
           }
           int frontItem = ourQueue[front];
           ourQueue[front]= -1;
           front=(front+1)%CAPACITY;
           totalitem--;
           return frontItem;
        }

        void printQueue(){
        int i;
        printf("Queue: ");
        for(i=0; i<CAPACITY; i++){
            printf("%d",ourQueue[i]);
        }
          printf("\n");
        }

int main(){

    printf("Implement my Queue!\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printQueue();
    enqueue(50);
    printQueue();
    enqueue(60);
    printf("dequeue:%d\n",deque());
    printQueue();
    enqueue(60);
    printQueue();
    return 0;

}
