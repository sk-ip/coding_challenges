#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;	
};

void Createlist();
void Display();
void Insert_Beg();
void Insert_End();
void Insert_Mid();
int Delete_Beg();
int Delete_End();
int Delete_Mid();
void Sort();

struct node *start=NULL, *ptr, *preptr, *postptr;

int main()
{
	int ch,num;
	
	do
	{
		printf("\nMENU\n");
		printf("1.)CREATE LIST\n");
		printf("2.)DISPLAY\n");
		printf("3.)INSERT BEG\n");
		printf("4.)INSERT END\n");
		printf("5.)INSERT MID\n");
		printf("6.)DELETE BEG\n");
		printf("7.)DELETE END\n");
		printf("8.)DELETE MID\n");
		printf("9.)SORT\n");
		printf("10.)EXIT\n");
		printf("enter your choice:\n");
		scanf("%d", &ch);	
		switch(ch)
		{
			case 1: Createlist();
					break;
			case 2: Display();
					break;
			case 3: Insert_Beg();
					break;
			case 4: Insert_End();
					break;
			case 5: Insert_Mid();
					break;
			case 6: 
					num = Delete_Beg();
					if(num==-1)
						printf("###### list empty ######\n");
					else
						printf("value deleted is:%d\n", num);
					break;
			case 7: 
					num = Delete_End();
					if(num==-1)
						printf("###### list empty ######\n");
					else
						printf("value deleted is:%d\n", num);
					break;
			case 8: num = Delete_Mid();
					if(num==-1)
						printf("###### list empty ######\n");
					else
						printf("value deleted is:%d\n", num);
					break;
			case 9: Sort();
					break;
		}
	
	}while(ch!=10);



return 0;
}

void Createlist()
{
	struct node *newnode;
	int num;
	printf("####### enter -1 to end #######");
	scanf("%d", &num);
	while(num!=-1)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode -> data = num;
		if(start == NULL)
		{
			newnode -> next = NULL;
			start = newnode;
		}
		else
		{
			ptr = start;
			while(ptr->next!=NULL)
			{	
				ptr = ptr -> next;
			}
			ptr -> next = newnode;
			newnode -> next = NULL;
		}
		scanf("%d", &num);
	}

}

void Display()
{
	ptr = start;
	if(start==NULL)
	{
		printf("list is empty\n");
		exit(0);
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d", ptr -> data);
			printf("\t");
			ptr = ptr -> next;
		}
	}
}

void Insert_Beg()
{
	struct node *newnode;
	int num;
	printf("ente number:\n");
	scanf("%d", &num);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = num;
	newnode -> next = start;
	start = newnode;
}

void Insert_End()
{
	int num;
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("enter number:\n");
	scanf("%d", &num);
	newnode -> data = num;
	newnode -> next = NULL;
	ptr = start;
	while(ptr -> next!=NULL)
	{ptr = ptr -> next;}
	ptr -> next = newnode;
}

void Insert_Mid()
{
	struct node *newnode;
	int num,pos;
	printf("enter number \n");
	scanf("%d", &num);
	printf("enter number after which to add:\n");
	scanf("%d", &pos);
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = num;
	ptr = start;
	while(ptr -> data != pos)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	preptr = ptr;
	ptr = ptr -> next;
	preptr -> next = newnode;
	newnode -> next = ptr;
}

int Delete_Beg()
{
	int val;
	if(start == NULL)
	{
		return -1;
	}
	else
	{
		val = start -> data;
		ptr = start -> next;
		free(start);
		start = ptr;
		return val;
	}
}

int Delete_End()
{
	int val;
	if(start==NULL)
	{
		return -1;
	}
	else if(start -> next == NULL)
	{
		val = start -> data;
		free(start);
		return val;
	}
	else
	{
		ptr = start;
		while(ptr -> next != NULL)
		{
			preptr = ptr;
			ptr = ptr -> next;
		}

		val = ptr -> data;
		preptr -> next = NULL;
		free(ptr);
		return val;
	}
}

int Delete_Mid()
{
	int val;

	if(start == NULL)
		{
			return -1;
		}
	else if(start -> next == NULL)
		{
			val = start -> data;
			free(start);
			start = NULL;
			return val;
		}
	else
		{
			printf("Enter the value to be deleted:\n");
			scanf("%d", &val);
			ptr = start;
			while(ptr -> data != val)
			{
				preptr = ptr;
				ptr = ptr -> next;
			}
			val = ptr -> data;
			preptr -> next = ptr -> next;
			free(ptr);
			return val;
		}
}

void Sort()
{
	int temp,count=0,dec=0,i;
	if(start == NULL)
		{
			printf("#### list is empty ####\n");
		}
	else if(start -> next == NULL)
		{
			printf("single element already sorted.\n");
		}
	else
		{
			ptr = start;
			while(ptr -> next != NULL)
			{
				count++;
				ptr = ptr -> next;
			}
			for(i=0;i<count-dec;i++)
			{
				ptr = start;
				while(ptr -> next != NULL)
				{
					postptr = ptr -> next;
					if((ptr -> data) > (postptr -> data))
					{
						temp = postptr -> data;
						postptr -> data = ptr -> data;
						ptr -> data = temp;
					}
					ptr = ptr -> next;
				}
				dec++;
			}
		}
}