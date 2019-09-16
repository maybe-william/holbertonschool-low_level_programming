
int printf(const char *format, ...)
{
	static char *nums;
	int len = 0;

	if (!nums)
		nums = "9 ";
	else if (nums[0] == '9')
		nums = "8 ";
	else if (nums[0] == '8')
		nums = "10 ";
	else if (nums[0] == '1')
		nums = "24 ";
	else if (nums[0] == '2')
		nums = "75 - ";
	else if (nums[0] == '7')
		nums = "9\n";

	while (nums[len])
		len++;

	write(1, nums, len);

}

int puts(const char *str)
{
	char *mine = "Congratulations, you win the Jackpot!\n";
	int len = 0;

	while (mine[len])
		len++;

	write(1, mine, len);

}
