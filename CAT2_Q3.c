//program to calculate gross pay,taxe and net pay
/*
Auther:Brian muriuki joseph
Reg:CT102/G/22804/24
Date:7/11/2024
*/
#include <stdio.h>
int main(){
	float hoursWorked,hourlyWage,grossPay,taxes,netPay,overtimeHours;
	
	printf("Enter hours worked in a week:");
	scanf("%f",&hoursWorked);
	
	printf("Enter hourly wage:");
	scanf("%f",&hourlyWage);
	
	if(hoursWorked>40){
		overtimeHours=hoursWorked-40;
		grossPay=(40*hourlyWage)+(overtimeHours*hourlyWage*1.5);
	}
	else{
		grossPay=hoursWorked*hourlyWage;
	}
	
	if(grossPay<=600){
		taxes=grossPay*0.15;
	}
	else{
		taxes=(600*0.15)+((grossPay-600)*0.20);
	}
	netPay=grossPay-taxes;
	
	printf("Gross pay:%.2f\n",grossPay);
	printf("Taxes:%.2f\n",taxes);
	printf("Net pay:%.2f\n",netPay);
	
	return 0;
}