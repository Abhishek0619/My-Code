#include<stdio.h>
int main()
{
	int num,rev_num=0,rem;
	printf("Enter number:");
	scanf("%d",&num);
	int original_num=num;
	while(num>0)
	{
		rem=num%10;
		rev_num=rev_num*10+rem;
		num/=10;
	}
	printf("The reverse number is %d\n",rev_num);
	if(original_num==rev_num)
		printf("The number is a palindrome");
	else
		printf("Not a palindrome");
				
}
	
