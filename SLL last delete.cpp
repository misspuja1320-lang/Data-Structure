//SLL last delete
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *add;
};
int main()
{int n;
	struct node *p,*q,*r,*start,*s,*s1;
	p=(struct node*)malloc(sizeof(struct node));
	printf("Enter first node data: ");
	scanf("%d",&p->data);
	p->add=NULL;
	start=p;
	
	q=(struct node*)malloc(sizeof(struct node));
	printf("Enter second node data: ");
	scanf("%d",&q->data);
	q->add=NULL;
	p->add=q;
	
	r=(struct node*)malloc(sizeof(struct node));
	printf("Enter third node data: ");
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
	printf("\n.....Delete last element......\n");
	printf("Enter your choice....\n");
	printf("1)YES\n");
	printf("2)NO\n");
	scanf("%d",&n);
	s=start;
	s1=start;
	switch(n){
		case 1:{
			while(s->add!=NULL){
		s1=s;
		s=s->add;
		printf("%d\t",s1->data);
		if(s->add==NULL)
		s1->add=NULL;
	}
			break;
		}
		case 2:{
			while(s->add!=NULL){
		printf("%d\t",s->data);
		s=s->add;
		if(s->add==NULL)
		printf("%d",s->data);
	}
			break;
		}
		default:
			printf("Enter valid number");
	}
	return 0;
}
