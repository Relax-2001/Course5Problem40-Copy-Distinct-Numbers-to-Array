#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillArrayWithNumbersHardCoded(int Arr[100], int& ArryLength)
{
	ArryLength = 10;
	Arr[0] = 10;
	Arr[1] = 10;
	Arr[2] = 10;
	Arr[3] = 10;
	Arr[4] = 77;
	Arr[5] = 77;
	Arr[6] = 77;
	Arr[7] = 99;
	Arr[8] = 100;
	Arr[9] = 10;

}

short FindNumberPositionInArray(int Arr[100], int Length, int Number)
{

	for (int i = 0; i < Length; i++)
	{
		if (Arr[i] == Number)
			return i;
	}

	return -1;
}

bool IsNumberInArray(int Arr[100], int Length, int Number)
{
	return (FindNumberPositionInArray(Arr, Length, Number) != -1);
}

void AddArrayElement(int Arr[100], int Number, int& ArrayLength)
{
	ArrayLength++;
	Arr[ArrayLength - 1] = Number;
}

void CopyDistinctNumbersInArray(int Arr[100], int Arr2[100], int ArrLength, int& Arr2Length)
{
	for (int i = 0; i < ArrLength; i++)
	{

		if (!IsNumberInArray(Arr2, Arr2Length, Arr[i]))
		{
			AddArrayElement(Arr2, Arr[i], Arr2Length);
		}

	}
}

void PrintArray(int Arr[100], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}


int main()
{
	srand((unsigned)time(NULL));


	int Arr[100], Arr2[100], Length = 0, Length2 = 0;

	FillArrayWithNumbersHardCoded(Arr, Length);

	cout << "Array 1 elements : ";
	PrintArray(Arr, Length);

	CopyDistinctNumbersInArray(Arr, Arr2, Length, Length2);

	cout << "Array 2 elements : ";
	PrintArray(Arr2, Length2);


}