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

using namespace std;

int main()
{
	int digit;
	int firstNum;
	int secondNum;
	int newSecondNum = 0;
	int newNum = 0;
	int cicle = 0;

	while (true)
	{
		cout << "������ �Է��ϼ���(1~99) : ";
		cin >> digit;
		if (digit == 0) break;


		firstNum = digit / 10;
		secondNum = digit % 10;

		if (firstNum != 0)
		{
			newSecondNum = (firstNum + secondNum) % 10;
		}

		if (digit != newNum)
		{
	
			cout << "firstNumber  : " << firstNum << endl;
			cout << "SecondNUmber : " << secondNum << endl << endl;

			cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << endl;
			cout << "�μ� ���� ���� ���� : " << newSecondNum << endl << endl;

			cout << "���ο� ���� : " << secondNum << newSecondNum << endl << endl;

			++cicle;
			cout << "Cicle : " << cicle << endl;
		}
		else
		{
			cout << "";
		}
	}
	return 0;
}