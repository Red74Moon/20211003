// while 
// 문제
// 0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때 
// 다음과 같은 연산을 할 수 있다.
// 먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다.
// 그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 
// 새로운 수를 만들 수 있다.다음 예를 보자.
//
// 26부터 시작한다. 2 + 6 = 8이다. 새로운 수는 68이다. 
// 6 + 8 = 14이다. 새로운 수는 84이다. 
// 8 + 4 = 12이다. 새로운 수는 42이다. 
// 4 + 2 = 6이다.  새로운 수는 26이다.
//
//위의 예는 4번만에 원래 수로 돌아올 수 있다.따라서 26의 사이클의 길이는 4이다.
//
//N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.

#include <iostream>
#include<string>

using namespace std;

int main()
{
	int digit;
	int firstNum;
	int secondNum;
	int newSecondNum = 0;
	int cicle = 0;

	cout << "정수를 입력하세요(1~99) : ";
	cin >> digit;

	int calNum = digit;

	while (true)
	{
		firstNum = calNum / 10;
		secondNum = calNum % 10;

		if (calNum < 10)
		{
			newSecondNum = secondNum;
		}

		if (firstNum != 0)
		{
			newSecondNum = (firstNum + secondNum) % 10;
		}

		cout << "firstNumber  : " << firstNum << endl;
		cout << "SecondNUmber : " << secondNum << endl << endl;

		cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << endl;
		cout << "두수 합의 일의 숫자 : " << newSecondNum << endl << endl;

		cout << "새로운 숫자 : " << secondNum << newSecondNum << endl << endl;

		++cicle;
		cout << "Cicle : " << cicle << endl;

		firstNum = secondNum;
		secondNum = newSecondNum;	
		
		string num3 = to_string(firstNum) + to_string(secondNum);
			
		calNum = stoi(num3);

		if (calNum == digit) 
		{
			cout << "bye";
			break;
		}
	}
	return 0;
}