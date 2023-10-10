#include<stdio.h>
#include<math.h>

int main(void)
 {
	int choice, i, a, b;
	float x, y, result;
	do {
	printf("\nSelect your operation (0 to exit):\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	printf("5. Square root\n6. X ^ Y \n7. X ^ 2\n8. X ^ 3\n");
	printf("9. 1 / X\n10. X ^ (1 / Y)\n");
	printf("Choice: ");
	scanf("%d", &choice);
	if(choice == 0) 
		break;
		switch(choice) {
			case 1:
			printf("\nEnter X: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = x + y;
			printf("\nResult: %f", result);
			break;
			case 2:
			printf("\nEnter X: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result= x-y;
			printf("\nResult: %f", result);
			break;
			case 3:
			printf("\nEnter X: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = x * y;
			printf("\nResult: %f", result);
			break;
			case 4:
			printf("\nEnter X: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = x / y;
			printf("\nResult: %f", result);
			break;
			case 5:
			printf("\nEnter X: ");
			scanf("%f", &x);
			result = sqrt(x);
			printf("\nResult: %f", result);
			break;
			case 6:
			printf("\nEnter X: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = pow(x, y);
			printf("\nResult: %f", result);
			break;
			case 7:
			printf("\nEnter X: ");
			scanf("%f", &x);
			result = pow(x, 2);
			printf("\nResult: %f", result);
			break;
			case 8:
			printf("\nEnter X: ");
			scanf("%f", &x);
			result = pow(x, 3);
			printf("\nResult: %f", result);
			break;
			case 9:
			printf("\nEnter X: ");
			scanf("%f", &x);
			result = pow(x, -1);
			printf("\nResult: %f", result);
			break;
			case 10:
			printf("\nEnter X: ");
			scanf("%f", &x);
			printf("\nEnter Y: ");
			scanf("%f", &y);
			result = pow(x, (1/y));
			printf("\nResult: %f", result);
			break;
			default:
			printf("\nInvalid Choice!");
			}
	} while(choice);
	return 0;
}


