#include <stdio.h>
#include <stdlib.h>

/**
 * getChar1 - helper function to getChar
 * @ind: the index to get
 * Return: the character or 0 if ind > 31
 */
char getChar1(int ind)
{
	char chars1[32];

	chars1[0] = 'A';
	chars1[1] = '-';
	chars1[2] = 'C';
	chars1[3] = 'H';
	chars1[4] = 'R';
	chars1[5] = 'D';
	chars1[6] = 'w';
	chars1[7] = '8';
	chars1[8] = '7';
	chars1[9] = 'l';
	chars1[10] = 'N';
	chars1[11] = 'S';
	chars1[12] = '0';
	chars1[13] = 'E';
	chars1[14] = '9';
	chars1[15] = 'B';
	chars1[16] = '2';
	chars1[17] = 'T';
	chars1[18] = 'i';
	chars1[19] = 'b';
	chars1[20] = 'g';
	chars1[21] = 'p';
	chars1[22] = 'n';
	chars1[23] = 'M';
	chars1[24] = 'V';
	chars1[25] = 'y';
	chars1[26] = 's';
	chars1[27] = '5';
	chars1[28] = 'X';
	chars1[29] = 'z';
	chars1[30] = 'v';
	chars1[31] = 't';
	if (ind > 31)
		return (0);
	return (chars1[ind]);
}

/**
 * getChar2 - helper function to getChar
 * @ind: the index to get
 * Return: the character or 0 if ind > 63
 */
char getChar2(int ind)
{
	char chars1[64];

	chars1[32] = 'O';
	chars1[33] = 'G';
	chars1[34] = 'J';
	chars1[35] = 'c';
	chars1[36] = 'Y';
	chars1[37] = 'L';
	chars1[38] = 'U';
	chars1[39] = '+';
	chars1[40] = '4';
	chars1[41] = 'm';
	chars1[42] = 'j';
	chars1[43] = 'W';
	chars1[44] = '6';
	chars1[45] = 'f';
	chars1[46] = 'x';
	chars1[47] = 'q';
	chars1[48] = 'Z';
	chars1[49] = 'e';
	chars1[50] = 'F';
	chars1[51] = '3';
	chars1[52] = 'Q';
	chars1[53] = 'a';
	chars1[54] = '1';
	chars1[55] = 'r';
	chars1[56] = 'P';
	chars1[57] = 'h';
	chars1[58] = 'd';
	chars1[59] = 'K';
	chars1[60] = 'I';
	chars1[61] = 'o';
	chars1[62] = 'u';
	chars1[63] = 'k';
	if (ind > 63)
		return (0);
	return (chars1[ind]);
}


/**
 * getChar - gets a char
 * @ind: the index to get
 * Return: the character
 */
char getChar(int ind)
{
	char res;

	res = getChar1(ind);
	if (!res)
		res = getChar2(ind);
	return (res);
}


/**
 * f - get a character of the password
 * @len: the length of the string
 * @str: the username string
 * @ch: the character of the password to get
 * Return: the first password character
 */
char f(int len, char *str, int ch)
{
	int acc = 0;
	int i = 0;
	int temp = str[0];

	if (ch == 1)
		acc = ((len ^ 0x3b) & 0x3f);
	if (ch == 2)
	{
		for (i = 0; i < len; i++)
			acc = acc + str[i];
		acc = (acc ^ 0x4f) & 0x3f;
	}
	if (ch == 3)
	{
		acc = 1;
		for (i = 0; i < len; i++)
			acc = acc * str[i];
		acc = (acc ^ 0x55) & 0x3f;
	}
	if (ch == 4)
	{
		for (i = 0, acc = str[0]; i < len; i++)
			if (str[i] > acc)
				acc = str[i];
		srand(acc ^ 0xe);
		acc = rand() & 0x3f;
	}
	if (ch == 5)
	{
		for (i = 0; i < len; i++)
			acc = acc + (str[i] * str[i]);
		acc = ((char)acc ^ 0xef) & 0x3f;
	}
	if (ch == 6)
	{
		for (; temp > i; i++)
			acc = rand();
		acc = ((char)acc ^ 0xe5) & 0x3f;
	}
	return (getChar(acc));
}

/**
 * main - print a password for a given user
 * @argc: the number of args passed in
 * @argv: the args passed in
 * Return: always 0
 */
int main(int argc, char **argv)
{
	char one, two, thr, fou, fiv, six;
	int len = 0;
	char *name = argv[1];

	(void) argc;
	while (name[len])
	{
		len++;
	}
	one = f(len, name, 1);
	two = f(len, name, 2);
	thr = f(len, name, 3);
	fou = f(len, name, 4);
	fiv = f(len, name, 5);
	six = f(len, name, 6);

	printf("%c%c%c%c%c%c", one, two, thr, fou, fiv, six);
	return (0);
}
