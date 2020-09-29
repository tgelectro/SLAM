#include <stdio.h>

int main (void){
	int nb1;
	int nb2;
	int total;
	char operateur;
	
	printf("saisir nb1");
	scanf("%d", &nb1);
	
	getchar();
	printf("saisir operateur");
	scanf("%c", &operateur);
	
	printf("saisir nb2");
	scanf("%d", &nb2);
	
	if (operateur == '+')
	{
		total = nb1 + nb2;
		printf("%d", total);
	}

	if (operateur == '/')
	{
		total = nb1 / nb2;
		printf("%d", total);
	}
		
	if (operateur == '*')
	{
		total = nb1 * nb2;
		printf("%d", total);
	}
	
	if (operateur == '-')
	{
		total = nb1 - nb2;
		printf("%d", total);
	}
	
	
	
	
}
