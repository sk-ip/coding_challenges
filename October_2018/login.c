#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

FILE *fptr;
char name_of_medicine[30],expiry_date[10],Manufacturer[20];
int qty;
void Administrator();
void Add_Medicines();
void Display();
int main()
{
	char login_id[20],password[20],customer_id[20],ch;
	int choice,i;
	printf("\t \t \t ############################################\n");
	printf("\t \t \t ########## L O G I N  P O R T A L ##########\n");
	printf("\t \t \t ############################################\n");
	printf("\t \t \t \t 1.) ADMINISTRATOR LOGIN\n");
	printf("\t \t \t \t 2.) CUSTOMER LOGIN\n");
	printf("\n\t \t \t \t ENTER YOUR CHOICE:");
	scanf("%d", &choice);
	printf("\n");
	switch(choice)
	{
		case 1:	printf("\t\t\t \tLOGIN ID:");
				scanf("%s",login_id);
				printf("\t\t\t \tPASSWORD:");
				scanf("%s",password);
				// to the portal for administrator.
				Administrator();
				break;
		case 2: printf("\t\t\t \tCUSTOMER NAME:");
				scanf("%s",customer_id);
				// to the customer portal.
				break;

	}

	return 0;
}

void Administrator()
{
	int ch;
	do
	{
		printf("\n1.)SHOW DATABASE\n");
		printf("2.)ADD NEW MEDICINES TO DATABASE\n");
		printf("3.)EXIT\n");
		printf("Enter your choice:\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: //showing the database
					Display();
					break;
			case 2: //functionality to add new medicines to the database
					Add_Medicines();
					break;
		}
	}while(ch!=3);
}

void Display()
{
	FILE *ptr = fopen("database.txt","r");

	if (ptr == NULL)
	{
       	printf("Error! opening file");
		// Program exits if the file pointer returns NULL.
       	exit(1);
    }

    printf("NAME OF MEDICINE\tEXPIRY DATE\tMANUFACTURER\tQUANTITY");
    while( fscanf(ptr, "%s %s %s %d",name_of_medicine, expiry_date, Manufacturer, &qty) != EOF )
    {
    	printf("\n");
    	printf("%s \t %s \t %s \t %d", name_of_medicine, expiry_date, Manufacturer, qty);
    }
    
    fclose(ptr); 
}

void Add_Medicines()
{
	printf("\nEnter name of the medicine:");
	scanf("%s", name_of_medicine);
	printf("\nEnter expiry date of the medicine:");
	scanf("%s", expiry_date);
	printf("\nEnter name of Manufacturer:");
	scanf("%s", Manufacturer);
	printf("Enter quantity of the medicine:");
	scanf("%d", &qty);

	fptr = fopen("database.txt","w");
	if(fptr == NULL)
	{
		printf("ERROR");
		exit(1);
	}
	fprintf(fptr, "%s %s %s %d", name_of_medicine,expiry_date,Manufacturer,qty);
	fclose(fptr);
}


