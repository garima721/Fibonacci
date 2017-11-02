#include <iostream>

void fibonacci(int n)
{
	int a = 0, b = 1;
	int next = a+b;
	bool done = false;
	for(int i = 1; i <= n; i++)
	{
		done = false;
		if(next % 3 == 0)
		{
			std::cout << "Buzz\n";
			done = true;
		}
		if(next % 5 == 0)
		{
			std::cout << "Fizz\n";
			done = true;
		}
		if(next % 15 == 0)
		{
			std::cout << "BuzzFizz\n";
			done = true;
		}
		bool flag = false;
		if(!done and i != 1)
		{
			for(int j = 2; j < next/2; j++)
			{
				if(next % j == 0)
				{
					flag = true;
					break;
				}
			}
			if(!flag)
				std::cout << next << std::endl;
		}
		a = b;
		b = next;
		next = a+b;
	}
}

int main()
{
	int n;
	std::cout << "Enter a no: ";
	std::cin >> n;
	fibonacci(n);
}
