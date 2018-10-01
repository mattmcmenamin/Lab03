
#include <iostream>
using std::cout;
using std::cin;

short sumShort(short val);
long sumLong(long val);
float productFloat(float vaL);
double productDouble(double val);
float productRecip(float val);


int main()
{

	short n = 0;
	cout << "enter number- ";
	cin >> n;

	cout << "\n" << "answer: " << sumShort(n) << "\n";



		long n2 = 0;
		cout << "enter a long to find sum- " << "\n";
		cin >> n2;

		cout << "\n" << "answer: " << sumLong(n2) << "\n";

		float n3 = 1;
		cout << "enter a long to find factorial" << "\n";
		cin >> n3;

		cout << "\n" << "answer: " << productDouble(n3) << "\n";

			double n4 = 1;
			cout << "enter double for factorial- " << "\n";
			cin >> n4;

			cout << "\n" << "answer: " << productDouble(n4) << "\n";

			float n5 = 1;
			cout << "enter long for factorial- " << "\n";
			cin >> n5;

			cout << "\n" << "answer: " << productRecip(n5) << "\n";



			system("pause");

	//for 
	//(float i = 3.4; i < 4.4; i += 0.2)
	//{ cout << "i = " << i << endl; }
}

short sumShort(short val)
{
	if (val >= 1)
	{
		short sum = 0;
		for (short i = 1; i <= val; i++)
		{
			sum += i;
		}
		return sum;
	}
	return 0;
}


long sumLong(long val)
{
	if (val >= 1)
	{
		long sum = 0;
		for (long i = 1; i <= val; i++)
		{
			sum += i;
		}
		return sum;
	}
	return 0;
}

float productFloat(float val)
{
	if (val >= 1)
	{
		float factorial = 1;
		for(long i=1; i<= val; i++)
		{
			factorial *= i;
		}
		return factorial;
	}
	return 0;
}

double productDouble(double val)
{
	if (val >= 1)
	{
		double factorial = 1;
		for (long i = 1; i <= val; i++)
		{
			factorial *= i;
		}
		return factorial;
	}
	return 0;
}



float productRecip(float val)
{
	if (val >= 1)
	{
		float sum = 0;
		for (float i = 1; i <= val; i++)
		{
			sum += 1 / i;
		}
		return sum - 1;
	}
	return 0;
}

