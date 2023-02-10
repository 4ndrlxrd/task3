#include <stdio.h>
#include <iostream>

int main()
{
	int u1, u2, p1, p2, a, b;
	u1 = 111;
	p1 = 222;
	u2 = 333;
	p2 = 444;
	printf("enter username");
	std::cin >> a;
	printf("enter password");
	std::cin >> b;
	if ((a == u1) && (b == p1) || (a == u2) && (b == p2))
	{
		printf("user has been successfully logged in");
	}
	else
	{
		printf("incorrect username or password. try again");
	}
	return 0;
}
//https://github.com/4ndrlxrd/task3