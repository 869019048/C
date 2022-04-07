#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define LEN sizeof (struct student)

struct student *creat();
void print(struct student *head);

struct student
{
	int num;
	float score;
	struct student *next;
};

int n;

void main()
{

	struct student *stu;

	stu = creat();
	print(stu);
	printf("\n\n");
}

struct student *creat()
{

	struct student *head;
	struct student *p1, *p2;
	p1 = p2 = (struct student *)malloc(LEN);

	printf("please enter the num:");
	scanf("%f",&p1->num);
	printf("enter score");
	scanf("%f",&p1->score);

	head = NULL;
	n = 0;
	
	while (p1->num)
	{
		n++;
		print("%d",n);
		if(1 == n)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		
		p2 = p1;
		p1 = (struct student *)malloc(LEN);

		printf("enter num:");
		scanf("%d",p1->num);
		printf("enter num:");
		scanf("%f",p1->score);
	}

	p2->next = NULL;
	return head;
}

void print (struct student *head)
{

	struct student *p;
	printf("%d records\n\n",n);

	p = head;
	if(head)
	{
		do
		{
			printf("%dchengji%f\n",p->num,p->score);
			p = p->next;
		}while(p);
	}
}