#include<stdio.h>
int main(){
	int useropt=0;
	float amount=0,total=0;
	printf("welcome to our bank!\nHow can i help you?\n");
	while(useropt<4){
		do{			printf("1)bankbalance\n2)deposite\n3)withdraw\n4)exit\nENTER YOUR OPT(1,2,3,4) : ");
		scanf("%d",&useropt);
		if(useropt<1 || useropt>4){
			printf("you have entered invalid option.Try again \n");
		}
		switch(useropt){
			case 1:
			printf("your bank balance is ₹%.2f \n",total);
 			break;
			case 2:
			printf("enter how much amout you want to deposit : ");
			scanf("%f",&amount);
			total+=amount;
			printf("congaratulations your ₹ %.2f rupees are successfully deposited \n",amount);
			printf("your bank balance is ₹ %.2f\n",total);
			break;
			case 3:
			printf("enter how much amout you want to withdraw : ");
			scanf("%f",&amount);
			if(amount <=total){
				total-=amount;
				printf("congaratulations your ₹%.2f rupees are successfully debted\ntake your money",amount);
				printf("your bank balance is ₹ %.2f \n",total);
			}else{
				printf("sorry you have insufficient balance\n");
			}
			break;
			case 4:
			printf("you are always welcome \n");
			break;
		}
	}while(useropt<1 || useropt>4);
	}
	return 0;
}
