#include<stdio.h>
main()
{
	printf("select a food item: \n1. pizza\n2. burger\n3. pasta\n4. french fries\n4. sandwich");
	int choice=0;
	scanf("%d ,&choice");
	switch(choice)
	{
		case1:
			printf("you chose pizza.");
			break;
		case2:
			printf("you chose burger.");
			break;
		case3:
			printf("you chose pasta.");
			break;
		case4:
			printf("you chose french fries.");
			break;
		case5:
			printf("you chose sandwich.");
			break;
		default : printf("invalid choice");
	}
}
