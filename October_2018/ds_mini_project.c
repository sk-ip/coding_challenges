#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<malloc.h>

FILE *med,*ptr;
struct data
{
	int id;
	char name[20];
	char type[10];
	int quantity;
	char expd[10];
	float price;	
};
struct data d2[100];

struct cart
{
	char med_name[15];
	float tprice,price;
	int quantity;
};
struct cart c[10];
	
void admin();
void admin_page();
void customer();
void update_stock();
void view_med();
void new_med();
void cust_page(char []);
void buy_med(char []);
void bill(char [],char [],int,float);	

int count=0;
char admin_id1[10]="jai";
char admin_pass1[10]="1234";

int main()
{	
	int choice;
	system("cls");
	printf("\n\n==========WELCOME TO NOBLE CHEMISTS==========\n\n");
	printf("Login as:\n1.Admin\n2.Customer\n0.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:admin();
			   break;
		case 2:customer();
			   break;
	}
	return(0);	
}

void admin()
{
	char admin_id[10],admin_pass[10];
	go:
	system("cls");
	printf("\nEnter details:\n");
	printf("\nUsername:");
	scanf("%s",&admin_id);
	printf("\nPassword:");
	scanf("%s",&admin_pass);
	if(strcmp(admin_id,admin_id1)==0 && strcmp(admin_pass,admin_pass1)==0)
	{
		admin_page();
	}
	else
	{
		char ch;
		printf("\nThe entered username or password is incorrect!");
		printf("\nDo you want to re-enter(Y/N):");
		scanf("%s",&ch);
		if(ch=='y'|| ch=='Y')
			goto go;
	}
}

void admin_page()
{
	system("cls");
	int a;
	printf("\n****ADMIN LOGIN****\n");
	printf("\nChoose Operation:\n1.Update Stocks\n0.Back\n");
	scanf("%d",&a);
	switch(a)
	{
		case 0:main();
			   break;
		case 1:update_stock();
			   break;		
	}
}

void update_stock()
{
	system("cls");
	int b;
	printf("\nChoose Operation:\n1.Enter new medicine\n2.View medicines\n0.Back\n");
	scanf("%d",&b);
	switch(b)
	{
		case 0:admin_page();
			   break;
		case 1:new_med();
			   break;
		case 2:view_med();
			   break;
	}
	
}

void view_med()
{
	system("cls");
	char line[40]="",ch;
	med=fopen("ds_mini_project.txt","r");
	printf("ID\tNAME\tTYPE\tQUANT\tEXP.DATE\tPRICE\n");
	while(!feof(med))
	{
		fgets(line,40,med);
		puts(line);
		line[0]='\0';
	}
	fclose(med);
	printf("\nPress:\n0.Back\n1.Exit\n");
	scanf("%d",&ch);
	if(ch==0)
		update_stock();
	else if(ch==1)
		exit(0);
}

void new_med()
{
	int i,n,c;
	system("cls");
	struct data d1[10];
	med=fopen("ds_mini_project.txt","a+");
	printf("\nEnter no. of medicines to be added:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter details of Medicine:");	
		printf("\nID no:");
		scanf("%d",&d1[i].id);
		printf("\nName:");		
		scanf("%s",&d1[i].name);
		printf("\nType:");
		scanf("%s",&d1[i].type);	
		printf("\nQuantity:");
		scanf("%d",&d1[i].quantity);
		printf("\nExpiry Date:");
		scanf("%s",&d1[i].expd);
		printf("\nPrice:");
		scanf("%f",&d1[i].price);
		fprintf(med,"\n%d\t%s\t%s\t%d\t%s\t%0.2f",d1[i].id,d1[i].name,d1[i].type,d1[i].quantity,d1[i].expd,d1[i].price);
	}
	fclose(med);
	printf("\nPress:\n0.Back\n1.Exit\n");
	scanf("%d",&c);
	if(c==0)
		update_stock();
	else if(c==1)
		exit(0);
}

void customer()
{
	system("cls");
	int c;
	printf("\n****Welcome Customer****\n");
	int newcust_no;
	char newcust_name[20];
	printf("\nEnter Details:");
	printf("\nName:");
	scanf("%s",&newcust_name);
	printf("\nPhoneno:");
	scanf("%d",&newcust_no);
	cust_page(newcust_name);
}

void cust_page(char name[20])
{
	system("cls");
	int e;
	printf("\nLogged in as:%s\n",name);
	printf("\nChoose operation:\n1.Buy medicine\n0.Back\n");
	scanf("%d",&e);
	switch(e)
	{
		case 0:main();
			   break;
		case 1:buy_med(name);
			   break;
	}
}

void buy_med(char custname[20])
{
	system("cls");
	int med_id,j=0,i,quant;
	char line1[40]="";
	printf("\nLogged in as:%s\n",custname);
	printf("\nSelect medicine ID from list:\n");
	printf("ID\tNAME\tTYPE\tQUANT\tEXP.DATE\tPRICE\n");
	med=fopen("ds_mini_project.txt","r");
	while(!feof(med))
	{
		fgets(line1,40,med);
		puts(line1);
		line1[0]='\0';
		j+=1;
	}
	fclose(med);
	printf("\nID:");
	scanf("%d",&med_id);
	//obtaining all contents of a file into structure d1
	ptr=fopen("ds_mini_project.txt","r");
	for(i=0;i<j;i++)
	{
		fscanf(ptr,"\n%d\t%s\t%s\t%d\t%s\t%f\n",&d2[i].id,&d2[i].name,&d2[i].type,&d2[i].quantity,&d2[i].expd,&d2[i].price);
		if(med_id==d2[i].id)
		{
			printf("\nMedicine selected:%s",d2[i].name);
			printf("\nEnter quantity:");
			scanf("%d",&quant);
			bill(custname,d2[i].name,quant,d2[i].price);	
		}
	}
	fclose(ptr);
}

void bill(char cname[20],char name[20],int quantity,float price)
{
	int i,f;
	float sum=0;
	strcpy(c[count].med_name,name);
	c[count].quantity=quantity;
	c[count].price=price;
	c[count].tprice=quantity*price;
	count+=1;
	char ch;
	printf("\nDo you want to buy another medicine(Y/N):");
	scanf("%s",&ch);
	if(ch=='y'||ch=='Y')
		buy_med(cname);
	else
	{
		system("cls");
		printf("\nLogged in as:%s\n",cname);
		printf("\n****BILL PAGE****\n\nNAME\tQUANT\tPRICE\tNETPRICE");
		for(i=0;i<count;i++)
		{	
			printf("\n%s\t%d\t%0.2f\t%0.2f",c[i].med_name,c[i].quantity,c[i].price,c[i].tprice);
			sum+=c[i].tprice;
		}
		printf("\nTotal Amount=%0.2f",sum);
		printf("\n****Thank you for shopping****\n");
	}
	printf("\nPress:\n0.Back\n1.Exit\n");
	scanf("%d",&f);
	if(f==0)
		main();
	else if(f==1)
		exit(0);
}
