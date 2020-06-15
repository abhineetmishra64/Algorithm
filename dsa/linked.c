#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *emplist(struct node *start, int data);
struct node *beg(struct node *start, int data);
struct node *end(struct node *start, int data);
struct node *nposition(struct node *start, int data, int position);
struct node *del(struct node *start);
struct node *dele(struct node *start);
struct node *delpos(struct node *start, int pos);
void disp(struct node *start);
int count(struct node *start);
struct node *reverse(struct node *start);
int main()
{
	struct node *start=NULL;
	int ch, data, position,pos;
	while(1)
	{
		printf("1. Insert in an Empty list\n");
		printf("2. Insert at beginning\n");
		printf("3. Insert at End\n");
		printf("4. Insert at nth position\n");
		printf("5. Delete at beginning\n");
		printf("6. Delete at End\n");
		printf("7. Delete at nth position\n");
		printf("8. Display\n");
		printf("9. End program\n");
		printf("10. Count the  element in the list\n");
		printf("11. Reverse the list\n");
		printf("12. Enter choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				if(start != NULL)
				{
					printf("List is not empty\n");
					break;
				}
				printf("Enter Element: ");
				scanf("%d", &data);
				start=emplist(start, data);
				break;
			case 2:
				printf("Enter Element: ");
				scanf("%d", &data);
				start=emplist(start, data);
				break;
			case 3:
				printf("Enter Element: ");
				scanf("%d", &data);
				start=end(start, data);
				break;
			case 4:
				printf("Enter Element: ");
				scanf("%d", &data);
				printf("Enter position: ");
				scanf("%d", &position);
				start=nposition(start, data, position);
				break;
			case 5:
				start=del(start);
				break;
			case 6:
				start=dele(start);
				break;
			case 7:
				printf("Enter the position: ");
				scanf("%d",&pos);
				start=delpos(start, pos);
			case 8:
				disp(start);
				break;
			case 9:
				exit(0);
			case 10:
				count(start);
				break;
			case 11:
			   	start=reverse(start);
				break;
			default:
				printf("Wrong choice");
		}
	}
}
struct node *emplist(struct node *start, int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp -> info=data;
	tmp -> link=start;
	start=tmp;
	return start;
}
struct node *beg(struct node *start, int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}
struct node *end(struct node *start, int data)
{
	struct node *p, *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp -> info=data;
	p=start;
	while(p->link !=NULL)
	{
		p=p->link;
	}
	p->link=tmp;
	tmp->link=NULL;
	return start;
}
struct node *nposition(struct node *start, int data, int position)
{
	int i;
	struct node *tmp, *p;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	if(position==1)
	{
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	for(i=1;i<position-1 && p!=NULL;i++)
	{
		p=p->link;
	}
	if(p==NULL)
	{
		printf("There are less than %d elements\n",position);
	}
	else
	{
		tmp->link=p->link;
		p->link=tmp;
	}
	return start;
}
void disp(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List empty\n");
	}
	else
	{
		p=start;
		printf("List:\n");
		while(p!=NULL)
		{
			printf("%d\t",p->info);
			p=p->link;
		}
	       printf("\n");
	}
}

struct node *del(struct node *start)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return start;
	}
	else
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
}

struct node *dele(struct node *start)
{
	struct node *tmp=start;
	struct node *p;
	if (start->link==NULL)
	{
		free(start);
		start=NULL;
	}
	else
	{
		while(tmp->link!=NULL)
		{
			p=tmp;
			tmp=tmp->link;
		}
		free(p->link);
		p->link=NULL;
	}
	return start;
}
struct node *delpos(struct node *start, int pos)
{
	int i;
	struct node *tmp, *p;
	p=start;

	for(i=1;i<pos-1 && p!=NULL;i++)
	{
		p=p->link;
	}
	if(p==NULL)
	{
		printf("There are less than %d elements\n",pos);
	}
	else
	{
		tmp=p->link;
		p->link=tmp->link;
		printf("Successfully deleted!\n");
	}
	free(tmp);
	return start;
}
int count(struct node *start)
{
	int count=0;
	struct node *tmp;
	tmp=start;

	while(tmp!=NULL)
	{
		count++;
		tmp=tmp->link;

	}
	printf("The no of nodes are:%d\n",count);
}

struct node *reverse(struct node *start)
{
	struct node *loc,*locp, *locn;

	if (start==NULL)
	{
		printf("List doesn't exist\n");
		return start;
	}
	loc=start;
	locp=NULL;
	locn=loc->link;
	loc->link=locp;
	while(locn!=NULL)
	{
		locp=loc;
		loc=locn;
		locn=loc->link;
		loc->link=locp;
	}
	start=loc;
	return start;
}
