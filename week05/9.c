#include <stdio.h>

main() {

	int money = 0;
	int incometax = 0;
	int residentTax = 0;
	int insurance = 0;
	int pay = 0;

	printf("input money: ");
	scanf_s("%d", &money);

	incometax = (int)(money * 0.1);
	residentTax = (int)(incometax * 0.1);
	insurance = (int)(money * 0.0589);
	pay = money - incometax - residentTax - insurance;
	
	printf("money: %d\n", money);
	printf("incometax: %d\n", incometax);
	printf("residentTax: %d\n", residentTax);
	printf("insurance: %d\n", insurance);
	printf("pay: %d", pay);


}