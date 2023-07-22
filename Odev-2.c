#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node * next;
};
struct node * head;
void ekle(int key)
{
 if(head==NULL)
 {
 head=(struct node*)malloc(sizeof(struct node));
 head->data=key;
 head->next=NULL;
 }
 else
 {
 struct node * temp=(struct node*)malloc(sizeof(struct node));
 temp->data=key;
 temp->next=NULL;
 struct node * temp2=head;
 while(temp2->next!=NULL)
 {
 temp2=temp2->next;
 }
 temp2->next=temp;
 
 
 }
 
 
}
void listele()
{
 struct node * temp =head;
 while(temp!=NULL)
 {
 printf(" %d \n",temp->data);
 temp=temp->next;
 
 }
 
}
void say()
{
 int sayac=0;
 if(head==NULL)//Hic veri yok ise
 {
 printf("Hic veri yok.");
 }
 else
 {
 struct node * temp=head;
 while(temp!=NULL)
 {
 sayac++;
 temp=temp->next;
 }
 printf("%d tane eleman var. \n",sayac);
 
 } 
}

int main()
{
 
 
 ekle(10);
 ekle(20);
 ekle(30);
 ekle(40);
 listele();
 say();

 
 
}
