/***********************************************************
Author: Shawn Bond
Date: 1/23/2017
Effort: ~30m
Purpose: Learn and practice the use of bitwise operators
***********************************************************/
#include <stdio.h>

//function prototypes
void set_flag(int* flag_holder, int flag_position);
int check_flag(int flag_holder, int flag_position);

int main(int argc, char* argv[])
{
	int flag_holder = 0;
	int i;

	set_flag(&flag_holder, 3);
	set_flag(&flag_holder, 16);
	set_flag(&flag_holder, 31);

	for (i = 31; i >= 0; i--) {
		printf("%d", check_flag(flag_holder, i));
		if (i % 4 == 0) {
			printf(" "); //add space every 4 characters
		}
	}
	printf("\n");
	return 0;
}

//function declarations
void set_flag(int* flag_holder, int flag_position) {
	//take integer and make sure nth bit is a 1
	*flag_holder |= (1 << flag_position);
}
int check_flag(int flag_holder, int flag_position) {
	//returns and integer that is 0 when the nth bit is 0, and 1 when its 1
	if ((1 & (flag_holder >> flag_position)) == 1)
		return 1;
	else
		return 0;
}
