#include<stdio.h>
#include<string.h>
void isPalindrome(char test[]);
int main(void)
{
	char * test = "levels";
	isPalindrome(test);

}

void isPalindrome(char test[])
{
	int len = strlen(test)-1;
	int i = 0;
	while(i < len)
	{
		if(test[++i] != test[--len]){
			printf("%s is a palindrome\n", test);
			return;
		}

	}
	printf("%s is not a palindrome\n", test );
}
