#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
FILE *fp1;
struct budget
{
	char ch1,ch2;
float donations,grands,miscelleneous,accounting,bankcharges,boardexpences,conference,liabillityinsurance,officeequipment,officesupply,payrollexpences,postageandshipping,printing,rent,travel,utilities,internet;
float mdonations,mgrands,maccounting,mbankcharges,mboardexpenses,mconference,mliabilityinsurance,mmiscelleneous,mofficeequipments,mofficesupplies,mpayrollexpenses,mpostageandshipping,mprinting,mrent,mtravel,mutilities,minternet;
	float total1=0,total2=0;
	float netincome;
}te;
void add_income();
void add_expence();
void modify_information();
void view_income();
int main()
	
{
int choice;
printf("\nHEY WANT TO CALCULATE TRY IT HERE\n"); 
printf("\n");
while(1)
    {
	printf("\n1.add expences\n");
	printf("2.add income\n");
	printf("3.view income\n");
	printf("4.modify information\n");
	printf("5.exit\n");
	printf("enter the option required\n");
	scanf("%d",&choice);
	
	
		switch(choice)
		{
			case 1:add_expence();
			break;
			case 2:add_income();
			break;
			case 3:view_income();
			break;
			case 4:modify_information();
			break;
			case 5:exit(0);
			break;
			default:
				printf("please enter valied option");
        }
	}
}

void add_income()
{
	float total1;
	printf("enter donation value\n");
	scanf("%f",&te.donations);
	printf("enter grands value\n");
	scanf("%f",&te.grands);
	printf("enter the value of miscellaneous\n");
	scanf("%f",&te.miscelleneous);
	te.total1=te.total1+te.donations+te.grands+te.miscelleneous;
	printf("sum of income is %f\n",te.total1);
	
	 fp1=fopen("file1income.c","a");
	fprintf(fp1,"grands=%f\n",te.grands);
		fprintf(fp1,"donations=%f\n",te.donations);
			fprintf(fp1,"miscelleneous=%f\n",te.miscelleneous);
			printf("\n");
			printf("data has been stored");
			fclose(fp1);
			fp1=fopen("file1sum","w");
			 fprintf(fp1,"Sum=%f\n",te.total1);
		 fclose(fp1);
		 te.total1=0;
	}
	void add_expence()
	{
	float total2;
	printf("\nenter accounting value\n");
	scanf("%f",&te.accounting);
	printf("enter value of bank charges\n");
	scanf("%f",&te.bankcharges);
	printf("enter value of board expenses\n");
	scanf("%f",&te.boardexpences);
	printf("enter value of conferences\n");
	scanf("%f",&te.conference);
	printf("enter value of liability insurance\n");
	scanf("%f",&te.liabillityinsurance);
	printf("enter value of miscellaneous\n");
	scanf("%f",&te.miscelleneous);
	printf("enter value of office equipment\n");
	scanf("%f",&te.officeequipment);
	printf("enter value of office supply\n");
	scanf("%f",&te.officesupply);
	printf("enter value of pay roll expences\n");
	scanf("%f",&te.payrollexpences);
	printf("enter value of postage and shipping\n");
	scanf("%f",&te.postageandshipping);
	printf("enter value of printing\n");
	scanf("%f",&te.printing);
	printf("enter value of rent\n");
	scanf("%f",&te.rent);
	printf("enter value of travel\n");
	scanf("%f",&te.travel);
	printf("enter value of utilities\n");
	scanf("%f",&te.utilities);
	printf("enter value of internet\n");
	scanf("%f",&te.internet);
	te.total2=te.total2+te.accounting+te.bankcharges+te.boardexpences+te.conference+te.liabillityinsurance+te.miscelleneous+te.officeequipment+te.mofficesupplies+te.payrollexpences+te.postageandshipping+te.printing+te.rent+te.travel+te.utilities+te.internet;
	printf("sum of expenditure is %f",te.total2);
	  fp1=fopen("file1expenditure.c","a");
	fprintf(fp1,"Accounting Charges=%f\n",te.accounting);
		 fprintf(fp1,"Bank Charges=%f\n",te.bankcharges);
		 fprintf(fp1,"Board Expenses=%f\n",te.boardexpences);
		 fprintf(fp1,"Conference Expenses=%f\n",te.conference);
		 fprintf(fp1,"Liability Insurance=%f\n",te.liabillityinsurance);
		 fprintf(fp1,"Miscelleneous=%f\n",te.miscelleneous);
		 fprintf(fp1,"Office equipments=%f\n",te.officeequipment);
		 fprintf(fp1,"office Supplies=%f\n",te.officesupply);
		 fprintf(fp1,"Pay roll expenses=%f\n",te.payrollexpences);
		 fprintf(fp1,"Postage and shipping=%f\n",te.postageandshipping);
		 fprintf(fp1,"Printing=%f\n",te.printing);
		 fprintf(fp1,"Rent=%f\n",te.rent);
		 fprintf(fp1,"Travels=%f\n",te.travel);
		 fprintf(fp1,"Utilities=%f\n",te.utilities);
		 fprintf(fp1,"Internet=%f\n",te.internet);
	printf("\n");
	printf("data has been stored\n");
	fclose(fp1);
	fp1=fopen("fileexpsum.c","w");
	fprintf(fp1,"sum=%f\n",te.total2);
	fclose(fp1);
	te.total2=0;
}
void modify_information()
{
	int opt;
	float total1=0,total2=0
	;
	char ch1,ch2;
	do {
		printf("\nmodify expences\n");
		printf("modify income\n");
		printf("enter your option\n");
		scanf("%d",&opt);
		switch(opt)
		{
		case 1:
			printf("\nenter modified accounting value\n");
	scanf("%f",&te.maccounting);
	printf("enter value of modified bank charges\n");
	scanf("%f",&te.mbankcharges);
	printf("enter value of modified board expenses\n");
	scanf("%f",&te.mboardexpenses);
	printf("enter value of modified conferences\n");
	scanf("%f",&te.mconference);
	printf("enter value of modified liability insurance\n");
	scanf("%f",&te.mliabilityinsurance);
	printf("enter value of modified miscellaneous\n");
	scanf("%f",&te.mmiscelleneous);
	printf("enter value of modified office equipment\n");
	scanf("%f",&te.mofficeequipments);
	printf("enter value of modified office supply\n");
	scanf("%f",&te.mofficesupplies);
	printf("enter value of modified pay roll expences\n");
	scanf("%f",&te.mpayrollexpenses);
	printf("enter value of modified postage and shipping\n");
	scanf("%f",&te.mpostageandshipping);
	printf("enter value of modified printing\n");
	scanf("%f",&te.mprinting);
	printf("enter value of modified rent\n");
	scanf("%f",&te.mrent);
	printf("enter value of modified travel\n");
	scanf("%f",&te.mtravel);
	printf("enter value of modified utilities\n");
	scanf("%f",&te.mutilities);
	printf("enter value of modified internet\n");
	scanf("%f",&te.minternet);
 te.total2=te.maccounting+te.mbankcharges+te.mboardexpenses+te.mconference+te.mliabilityinsurance+te.mmiscelleneous+te.mofficeequipments+te.mofficesupplies+te.mpayrollexpenses+te.mpostageandshipping+te.mprinting+te.mrent+te.mtravel+te.mutilities+te.minternet;
		 printf("sum of the modified expenditure=%f",te.total2);
		 fp1=fopen("filemodexp.c","a");
		 fprintf(fp1,"Accounting Charges=%f\n",te.maccounting);
		 fprintf(fp1,"Bank Charges=%f\n",te.mbankcharges);
		 fprintf(fp1,"Board Expenses=%f\n",te.mboardexpenses);
		 fprintf(fp1,"Conference Expenses=%f\n",te.mconference);
		 fprintf(fp1,"Liability Insurance=%f\n",te.mliabilityinsurance);
		 fprintf(fp1,"Miscelleneous=%f\n",te.mmiscelleneous);
		 fprintf(fp1,"Office equipments=%f\n",te.mofficeequipments);
		 fprintf(fp1,"office Supplies=%f\n",te.mofficesupplies);
		 fprintf(fp1,"Pay roll expenses=%f\n",te.mpayrollexpenses);
		 fprintf(fp1,"Postage and shipping=%f\n",te.mpostageandshipping);
		 fprintf(fp1,"Printing=%f\n",te.mprinting);
		 fprintf(fp1,"Rent=%f\n",te.mrent);
		 fprintf(fp1,"Travels=%f\n",te.mtravel);
		 fprintf(fp1,"Utilities=%f\n",te.mutilities);
		 fprintf(fp1,"Internet=%f\n",te.minternet);
		 printf("\n");
		 printf(" modified data has been stored\n");
		 fclose(fp1);
		 fp1=fopen("fileexpsum.c","w");
	fprintf(fp1,"sum=%f\n",total2);
	fclose(fp1);
	total2=0;
	break;
		 case 2:
		 	printf("enter modified grands\n");
			scanf("%f",te.mgrands);
			printf("enter modified donations\n");
			scanf("%f",te.mdonations);
			printf("enter modified miscelleneous\n");
			scanf("%f",te.mmiscelleneous);
				te.total1=te.mdonations+te.mgrands+te.mmiscelleneous;
		printf("sum of the modified income=%f",total1);
		fp1=fopen("filemodsum.c","a");
		 fprintf(fp1,"Grants=%f\n",te.mgrands);
		 fprintf(fp1,"Donations=%f\n",te.mdonations);
		 fprintf(fp1,"Miscellaneous=%f\n",te.mmiscelleneous);
		 printf("\n");
		 printf("modified data has been stored");
		 fclose(fp1);
		 fp1=fopen("file1sum","w");
			 fprintf(fp1,"Sum=%f\n",te.total1);
		 fclose(fp1);
		 total1=0;
		 break;
		}
		fflush(stdin);
		printf("\nis anything left for modification(s/n):");
		scanf("%c",&ch1);
		
	}
	while(ch1=='s');
}
void view_income()
{
	fp1=fopen("file1sum.c","r");
	if(fp1==NULL)
	{
		printf("we will be not able to open the file\n");
	}
	else
	{
			while(!feof(fp1))
		{
			te.ch2=fgetc(fp1);
			printf("%c",te.ch2);
		}
		fclose(fp1);
	}
	
}
