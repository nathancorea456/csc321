//Nathan Corea
//Professor Poppe
//CSC321
//


#include<stdio.h>
#include<stdlib.h>

int main(void)

{
	int x =0;
	double y =0.0;
	char c = 'a';
	float z = 0.0;

	printf("Enter an Integer: ");
	scanf("%d", &x);

	if(x > 3){

	printf("Inputted number number is greater than 3 \n");

	} else if (x == 3) {

		printf("You input 3 \n");

	} else {

	printf("Inputted number is less than 3 \n");

	}

        printf("Enter a Double: ");
        scanf("%lf", &y);

        if (y < 5.0) {

        printf("Inputted number is less than 5.0\n");

    	} else {

        printf("Inputted number is greater than or equal to 5.0\n");

    	}

        printf("Enter a Character: ");
        scanf(" %c", &c);

        if (c != 'a') {

        printf("Inputted character is not letter 'a'\n");

    	} else {
        
	printf("Inputted number is letter 'a'\n");

    }

        printf("Enter a Float: ");
        scanf("%f", &z);

        if (z == 0.0f) {

        printf("Inputted number equals zero\n");

        } else {

        printf("Inputted number does not equal zero\n");

        }

	return EXIT_SUCCESS;

}
