#include <stdio.h>
#include <windows.h>
int main ()
{
	short int hour, minute, second;
	printf("Enter hours, minutes and seconds to start timer");
	scanf("%d%d%d", &hour, &minute, &second);
	if (minute > 60 && second > 60){
		printf("Minutes and seconds should be less than 60.");
		exit(1);
}
  	while(1) {
  		second++;
  		if (second % 60 == 0) {
  			second = 0;
  			minute++;
		  }
		if (minute % 60 == 0 && minute != 0) {
			minute = 0;
			hour++;
		}
  		printf ("%02d : %02d : %02d", hour, minute, second);
  		sleep(1);
  		system("cls");
	}
  
  return 0;
}
