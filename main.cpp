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
	int digit; // �ʱ� �Է°�
	int firstNum; // �ʱ� �Է°��� 10�� �ڸ� ����
	int secondNum; // �ʱ� �Է°��� 1�� �ڸ� ����
	int newSecondNum; // �� �� ���� 1�� ����
	int cicle = 0;

	cout << "������ �Է��ϼ���(1~99) : ";
	cin >> digit;

	// ó�� �Է��� �� ����, ���߿� ��
	int calNum = digit;

	while (true)
	{	
		// �ʱ� �Է°��� 10�� �ڸ� ����
		firstNum = calNum / 10;
		// �ʱ� �Է°��� 1�� �ڸ� ����
		secondNum = calNum % 10;

		// �Էµ� ���� 10 �̸��� ��� 
		if (digit < 10)
		{
			newSecondNum = secondNum;
		}

		// ù��° ���� 0�� �ƴ� ���
		if (firstNum != 0)
		{
			//���ο� ���� ���
			newSecondNum = (firstNum + secondNum) % 10;
		}
		cout << endl;
		cout << "�Էµ� �� " << endl;

		cout << "firstNumber  : " << firstNum << endl;
		cout << "SecondNUmber : " << secondNum << endl << endl;

		cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << endl;
		cout << "�μ� ���� ���� ���� : " << newSecondNum << endl << endl;

		cout << "���ο� ���� : " << secondNum << newSecondNum << endl << endl;

		//�ݺ� Ƚ�� ī��Ʈ
		++cicle;
		cout << "Cicle : " << cicle << endl;
		cout << "==============================" << endl;

		// ������ ���ο� ���� 
		firstNum = secondNum;
		secondNum = newSecondNum;	
		
		// �� ���ڸ� ���ڷ� ����
		string num3 = to_string(firstNum) + to_string(secondNum);
		
		// ����� ���ڸ� ���ڷ� ����	
		calNum = stoi(num3);

		// ó�� ���� ����� ���� ������ �˻� ������ ����
		if (calNum == digit) 
		{
			cout << "�ʱⰪ " << digit << "�� " << "������ " << calNum << "�� ���� �����ϴ�. " << endl;
			cout << "bye";
			cout << endl << endl;
			break;
		}
	}
	return 0;
}