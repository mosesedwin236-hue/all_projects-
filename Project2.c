/*
program to compute discount
amount>=10,000,10% discount
amount between 5,000 and 10,000=5% discount
*/
#include <stdio.h>
int main(){
	float amount,discount,amount_to_pay;
		printf("enter amount to pay:\t");
		scanf("%f",& amount);
		
		if(amount>=1,000){
		
		discount=0.1*amount;
		amount_to_pay=amount-discount;
		printf("discount=%2\n"),discount;
		printf("Amount to pay=%.2f\n", amount_to_pay);
	}
		 
		 else if(amount>=5000 &&amount<10000){
		 	discount=0.05 * amount;
		 	amount_to_pay=amount-discount;
		 	printf("discount=%.2f\n",discount);
		 	printf("amount to pay=%.2f\n",amount_to_pay);
		 }
		 	return 0;
		 
		
}
