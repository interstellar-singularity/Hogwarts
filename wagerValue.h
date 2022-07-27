#include<stdio.h>
int wager_value(int *wager, int *counter)
{
	switch(*counter) {
		case 1:
		case 2:
		case 3:
			*wager = *wager * 5;
			break;
		case 4:
		case 5:
		case 6:
			*wager = *wager * 3;
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			*wager = *wager * 2;
			break;
		case 11:
		case 12:
			*wager = *wager * 1;
			break; 
		default:
			*wager = -*wager;
			break;
	}
	return *wager; 
}
