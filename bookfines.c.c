#include <stdio.h>

int book_id;
int due_date;
int return_date;
int days_overdue;
int fine_rate;
int fine_amount;

int main() {
	printf("Enter the Book ID ");
	scanf("%d", &book_id);
	
	printf("Enter the due date ");
	scanf("%d",&due_date);
	
	printf("Enter the return date ");
	scanf("%d",& return_date);
	 
	
	days_overdue=return_date-due_date;
	
	if("days_overdue<0"){
		fine_rate=0;
	}
	
	if ("days_overdue<=7"){
	fine_rate=20;
}
	else if("days_overdue>=8 &<=14"){
	fine_rate=50;
}
	else if("days_overdue>=15"){
	fine_rate=100;
}
	fine_amount=days_overdue *fine_rate;
	
    printf("daysOverdue  : %d\n", days_overdue);
    printf("fineRate     : Ksh. %d\n", fine_rate);
    printf("fineAmount   : Ksh. %d\n", fine_amount);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
