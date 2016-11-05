#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
	string key = argv[1];
	if (argc != 2)
	{
		printf("Try again");
		return 1;
	}
	for (int i = 0; i < strlen(key); i++)
	{
		if (!isalpha(key[i]))
		{
			printf("Try again");
			return 1;
		}
	}
	string txt
		txt = GetString();

	char keytxt[strlen(txt)];


	for (int i = 0, j = 0; i < strlen(txt); i++)
	{
		if (((txt[i] >= 65) && (txt[i] <= 90))
			|| ((txt[i] >= 97) && (txt[i] <= 122)))
		{
			keytxt[i] = generalword[j % strlen(generalword)];
			j++;
		}
	}
	for (int i = 0; i < strlen(txt); i++)
	{
		if ((txt[i] >= 65) && (txt[i] <= 90))
		{
			txt[i] = 65 + (txt[i] - 65 + toupper(keytxt[i]) - 65) % 26;
		}
		else if ((txt[i] >= 97) && (txt[i] <= 122))
		{
			txt[i] = 97 + (txt[i] - 97 + tolower(keytxt[i]) - 97) % 26;
		}
	}
	printf("%s\n", txt); 
	return 0;
}
