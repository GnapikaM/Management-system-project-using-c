
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;

struct pinfo {
	char cname[50];
	char pname[50];
	int pID;
	char cdetails[70];
	float price;
	char netVol[50];
	char mfgDate[50];
	char expDate[50];
	char org[50];
} cosm[55];

void add_product()
{

	printf("Add the product details\n");
	printf("-------------------------\n");
	printf("Comapany Name: \n");
	scanf("%s", &cosm[i].cname);
	printf("Product Name: \n");
	scanf("%s", &cosm[i].pname);
	printf("Product ID: \n");
	scanf("%d", &cosm[i].pID);
	printf("Composition details: \n");
	scanf("%s", &cosm[i].cdetails);
	printf("Product Price: \n");
	scanf("%f", &cosm[i].price);
	printf("Net volume: \n");
	scanf("%s", &cosm[i].netVol);
	printf("Manufacture date: \n");
	scanf("%s", &cosm[i].mfgDate);
	printf("Expiry date: \n");
	scanf("%s", &cosm[i].expDate);
	printf("Origin \n");
	scanf("%s", &cosm[i].org);
	printf("The product has been added succefully\n");
}

void find_Company()
{
    char a[50];
    printf("Enter the company of the product\n");
    scanf("%s", a);
    int c = 0;
    for (int j = 1; j <= i; j++) {
        if (!strcmp(cosm[j].cname, a)) {
			printf("The Product Details are\n");
			printf("Company Name: %s\n", cosm[i].cname);
			printf("Product Name: %s\n", cosm[i].pname);
			printf("Product ID: %d\n", cosm[i].pID);
			printf("Composition details: %s\n", cosm[i].cdetails);
			printf("Product Price: %f\n", cosm[i].price);
			printf("Net Volume: %s\n", cosm[i].netVol);
			printf("Mfg. Date: %s\n", cosm[i].mfgDate);
			printf("Exp. Date: %s\n", cosm[i].expDate);
			printf("Origin: %s\n", cosm[i].org);
			c = 1;
		}
		else 
			printf("The company name is not found\n");
    }
}


void find_name()
{
	char a[50];
	printf("Enter the name of the product\n");
	scanf("%s", a);
	int c = 0;

	for (int j = 1; j <= i; j++) {
		if (!strcmp(cosm[j].pname, a)) {
		    printf("The Product Details are\n");
		    printf("Company Name: %s\n", cosm[i].cname);
			printf("Product Name: %s\n", cosm[i].pname);
			printf("Product ID: %d\n", cosm[i].pID);
			printf("Composition details: %s\n", cosm[i].cdetails);
			printf("Product Price: %f\n", cosm[i].price);
			printf("Net Volume: %s\n", cosm[i].netVol);
			printf("Mfg. Date: %s\n", cosm[i].mfgDate);
			printf("Exp. Date: %s\n", cosm[i].expDate);
			printf("Origin: %s\n", cosm[i].org);
			c = 1;
		}
		else
			printf("The Company Name is not Found\n");
	}
}

void find_origin()
{
	char a[50];
	printf("Enter the origin of the product\n");
	scanf("%s", a);
	int c = 0;
	for (int j = 1; j <= i; j++) {
		if (!strcmp(cosm[j].pname, a)) {
		    printf("The Product Details are\n");
		    printf("Company Name: %s\n", cosm[i].cname);
			printf("Product Name: %s\n", cosm[i].pname);
			printf("Product ID: %d\n", cosm[i].pID);
			printf("Composition details: %s\n", cosm[i].cdetails);
			printf("Product Price: %f\n", cosm[i].price);
			printf("Net Volume: %s\n", cosm[i].netVol);
			printf("Mfg. Date: %s\n", cosm[i].mfgDate);
			printf("Exp. Date: %s\n", cosm[i].expDate);
			printf("Origin: %s\n", cosm[i].org);
			c = 1;
		}
		else
			printf("The origin of the product is not Found\n");
	}
}

void find_productID()
{
    int prID;
    printf("Enter the product ID: \n");
    scanf("%d", &prID);
    for (int j = 1; j <= i; j++) {
        if (prID == cosm[i].pID) {
            printf("The Product Details are\n");
            printf("Company Name: %s\n", cosm[i].cname);
			printf("Product Name: %s\n", cosm[i].pname);
			printf("Product ID: %d\n", cosm[i].pID);
			printf("Composition details: %s\n", cosm[i].cdetails);
			printf("Product Price: %f\n", cosm[i].price);
			printf("Net Volume: %s\n", cosm[i].netVol);
			printf("Mfg. Date: %s\n", cosm[i].mfgDate);
			printf("Exp. Date: %s\n", cosm[i].expDate);
			printf("Origin: %s\n", cosm[i].org);
        }
        else 
		    printf("The product ID is not found\n");
    }
}

void del_product()
{
	int a;
	printf("Enter the product ID which you want to delete\n");
	scanf("%d", &a);
	for (int j = 1; j <= i; j++) {
		if (a == cosm[j].pID) {
			for (int k = j; k < 49; k++)
				cosm[k] = cosm[k + 1];
			i--;
		}
	}
	printf("The product is removed Successfully\n");
}

// Driver code
void main()
{
	int choice, count;
	while (i = 1) {
		printf("The Task that you want to perform\n");
		printf("\t1. Add the product Details\n");
		printf("\t2. Find the product Details by Company Name\n");
		printf("\t3. Find the product Details by Product Name\n");
		printf("\t4. Find the product Details by product ID\n");
		printf("\t5. Delete the product Details by product ID\n");
		printf("\t6. To Exit\n");
		printf("\n");
		printf("Enter your choice\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_product();
			break;
		case 2:
			find_Company();
			break;
		case 3:
			find_name();
			break;
		case 4:
			find_productID();
			break;
		case 5:
		    del_product();
			break;
		case 6:
			exit(0);
			break;
		}
	}
}
