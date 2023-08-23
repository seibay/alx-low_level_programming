#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	srand(time(NULL));
	char characters[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int randomIndex = rand() % (sizeof(characters) - 1);
		password[i] = characters[randomIndex];
	}

	password[PASSWORD_LENGTH] = '\0';
	printf("Generated Password: %s\n", password);
	return (0);
}

