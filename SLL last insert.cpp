// SLL last insert
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *add;
};
int main()
{ struct node *p,*start,*q,*r,*s,*a;
p=(struct node*)malloc(sizeof(struct node));
printf("Enter First node data:");
scanf("%d",&p->data);
p->add=NULL;
start=p;

q=(struct node*)malloc(sizeof(struct node));
printf("Enter secound node data:");
scanf("%d",&q->data);
q->add=NULL;
p->add=q;

r=(struct node*)malloc(sizeof(struct node));
printf("Enter third node data:");
scanf("%d",&r->data);
r->add=NULL;

q->add=r;
s=start;
while(s->add!=NULL){
	printf("%d\t",s->data);
	s=s->add;
	if(s->add==NULL)
	printf("%d",s->data);
}
printf("\nEnter a new node in last position.....\n");
a=(struct node*)malloc(sizeof(struct node));
printf("Enter fourth node data:");
scanf("%d",&a->data);
a->add=NULL;
s=start;
while(s->add!=NULL){
	s=s->add;
}
if(s->add==NULL){
	s->add=a;
}
s=start;
while(s->add!=NULL){
	printf("%d\t",s->data);
	s=s->add;
}
if(s->add==NULL)
	printf("%d",s->data);
	
	return 0;
}
