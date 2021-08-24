// Program of PIT computation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	 int n;
	char surname[100];
    char other[100];
    char confirm[3];
	float gross_salary,net_salary,tax1,tax2,total_tax ;
	
	printf("\t\tTITLE OF PROJECT: PERSONAL INCOME TAX (PIT) COMPUTATION IN RWANDA\n");
	printf("\t\t----------------------------------------------------------------");
	printf("\t\t\nYou are welcome in our program!!!\n");
	printf("\n++++++++++++++++++++++++++++++++++++++\n\n");
	printf("\nEnter your surname:  ");
	scanf("%s",&surname);
	printf("\nWelcome!! %s ,could you please give us your other name? \n\n\n",surname);
	scanf("%s",&other);
	printf("\n%s %s ,welcome to our program.we would like to acknowledge your PIT on the basis of your provided data.\n",surname,other);
	printf("\n%s %s we are glad to have you, could you please Give us your Gloss Salary? \n",surname,other);
	scanf("%f",&gross_salary);
	printf("\n%s %s your Gloss Salary salary is %0.2f Rwf? \n",surname,other,gross_salary);
	printf("\nDo you have awareness about your total tax according to the provided Gross salary? \n (Yes/No)?\n");
	scanf("%s",&confirm);
	 n=strlen(confirm);	
	if(n==3)
	{        
	          
			printf("thanks");
			
	}	
	else	if(n==2)
	{        
	       if (gross_salary<=30000)
		   {
		   	total_tax=((gross_salary-30000)*0/100);
		   	 printf("Dear %s %s According to the provided Gross Salary, we can see that you are exampted from PIT\n Your Total tax is:%.2f\n\n",surname,other,total_tax);
		   	 printf("Do you know the reason you are exampted from PIT?\n");
		   	 printf("\nReply with Yes OR No \n");
	scanf("%s",&confirm);
	 n=strlen(confirm);	
	if(n==3)
	{        
	          
			printf("it sounds so great,thank you for using our application!!!!!!!!!\n");
			
	}	
	else	if(n==2)
	{    
	      printf("According to the Taxation System of Government of Rwanda,\n a person is imposed to tax only when they \n earn more than 30,000rwf.In fact the Government wants\n");
	      printf("to keep people's standard of living so that they \n can't struggle because of Tax\n");
}
else
{
	return 0;
}
			 }  
			 else if(gross_salary>=30001 && gross_salary<=100000)
			 {
			 		total_tax=((gross_salary-30000)*20/100);
			 		net_salary=gross_salary-total_tax;
			 	printf("Dear %s %s According to the provided Gross Salary,we can see that your Total Income tax is:%.2f\n\n",surname,other,total_tax);
			 		printf("Are you satsfied with the tax that you have to pay?\n\n");
			 		printf("\nReply with Yes OR No \n");
	scanf("%s",&confirm);
	 n=strlen(confirm);	
	if(n==3)
	{        
	          
			printf("it sounds so great,thank you for using our application!!!!!!!!!\n");
			
	}	
	else	if(n==2)
	{    
	     printf("It's ok! we don't blame you. So,read these tracked information carefully\n\n\n");
	     printf("According to the Taxation System of Government of Rwanda,\n a person is imposed to tax only when they earn more than 30,000rwf.\n In fact the Government wants");
	     printf("\n to keep people's standard of living so that they can't struggle because of Tax");
	     printf("STEP 1: We deducted 30,000rwf from %.2f and finally we remained with %.2f\n",gross_salary,(gross_salary-30000));
	     printf("STEP 2: A person who earns between 30,001rwf to 100,000rwf, this range is taxed 20 percent of tax rate\n");
	     printf("STEP 3: From your Gross Salary %.2f,its 20 percent is: %.2f\n",gross_salary,((gross_salary-30000)*20/100));
		 printf("STEP 4: A person who earns above 100,00rwf, this range is taxed 30 percent of tax rate\n");
		 printf("Finally, your net salary is : %0.2f and Total tax was: %.2f and this was aproved that is your Gross Salary:%.2f\n",net_salary,total_tax,(net_salary+total_tax));
}
else
{
	return 0;
}
			 		
			 }
			 else{
			 
		total_tax=(((gross_salary-30000)-70000)*30/100)+((gross_salary-(gross_salary-100000)-30000)*20/100);
		printf("total tax : %0.2f\n",total_tax);
}
	}
	else{
		printf("Invalid inputs");
	}
	getch();
	return 0;
}
