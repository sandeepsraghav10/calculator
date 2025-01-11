// simple calculator

#include<stdio.h>
#include<math.h>
//#include<

int main()
{
	int choice;
	double no1,no2,res;
        printf("Simple Calculator\n");
        
	while(1)
	{     
		printf("\n");
	printf("------------------------\n");
	printf("1.Addition\n 2.Subtraction\n 3.Division\n 4.Modulas\n 5.Multiplication\n 6.Power\n 7.Exit\n");
	printf("\n");
	printf("Enter your choice \n");
	scanf("%d",&choice);
		printf("\n");
	      if(choice==7)
	      { 
	            break;
	      }
	      
	printf("Enter First numbers\n");
	scanf("%lf",&no1);
	if(choice==3||choice==4)
	{     l1:
	      printf("Enter Second numbers(!=0)\n");
	      scanf("%lf",&no2);
	      if(no2==0){
	      printf("Invalid choice\n");
	      goto l1;
	      }
	}else{
	      printf("Enter Second numbers\n");
	      scanf("%lf",&no2);
	}
	
	switch(choice)
	{
		case 1 :  res=no1+no2;
		          printf("Result=%.2f", res);
			   break;
		case 2 : res=no1-no2;      
                          printf("Result=%.2f", res);
			   break;
		case 3 : res=no1/no2;
		          printf("Result=%.2f", res);
			   break;
		case 4 :  res=(int)no1%(int)no2;
		          printf("Result=%.2f", res);
			   break;
		case 5 :  res=no1*no2;
		          printf("Result=%.2f", res);
			   break;
		/*case 6:   res=power(no1,no2);
		          printf("Result=%.2f", res); 
	            	  break;*/
		default : printf("Enter valid choice\n");
		//delay(15);
	}
		printf("\n");
	}
}
			 
			 
