// while 
// ����
// 0���� ũ�ų� ����, 99���� �۰ų� ���� ������ �־��� �� 
// ������ ���� ������ �� �� �ִ�.
// ���� �־��� ���� 10���� �۴ٸ� �տ� 0�� �ٿ� �� �ڸ� ���� �����, �� �ڸ��� ���ڸ� ���Ѵ�.
// �� ����, �־��� ���� ���� ������ �ڸ� ���� �տ��� ���� ���� ���� ������ �ڸ� ���� �̾� ���̸� 
// ���ο� ���� ���� �� �ִ�.���� ���� ����.
//
// 26���� �����Ѵ�. 2 + 6 = 8�̴�. ���ο� ���� 68�̴�. 
// 6 + 8 = 14�̴�. ���ο� ���� 84�̴�. 
// 8 + 4 = 12�̴�. ���ο� ���� 42�̴�. 
// 4 + 2 = 6�̴�.  ���ο� ���� 26�̴�.
//
//���� ���� 4������ ���� ���� ���ƿ� �� �ִ�.���� 26�� ����Ŭ�� ���̴� 4�̴�.
//
//N�� �־����� ��, N�� ����Ŭ�� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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

	cout << "������ �Է��ϼ���(1~99) : ";
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
		cout << "�μ� ���� ���� ���� : " << newSecondNum << endl << endl;

		cout << "���ο� ���� : " << secondNum << newSecondNum << endl << endl;

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