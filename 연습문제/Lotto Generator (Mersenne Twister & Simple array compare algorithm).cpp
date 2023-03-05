#include <iostream>
#include <random>
#include <Windows.h>
#include <cmath>
#pragma warning (disable:4996)
using namespace std;

int main()
{
	random_device generator;
	mt19937 engine(generator());
	uniform_int_distribution<> random(0, 9);

	int select[6];
	int lottoArray[6];
	int RateCount = 0;
	int count = 1;

	cout << "1번째 숫자를 입력해주세요 : ";
	cin >> select[0];

	while (count <= 5)
	{
		cout << count + 1 << "번째 숫자를 입력해주세요 : ";
		cin >> select[count];

		if ((select[count] >= 0 && select[count] <= 9) && (select[count] != select[count - 1]))
			count++;

		else
		{
			cout << endl;
			cout << "==========================================================================" << endl;
			cout << "값의 범위가 0~9가 아니거나 전에 입력한 값과 같습니다. 다른 값을 입력하세요" << endl;
			cout << "==========================================================================" << endl;
			cout << endl;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		lottoArray[i] = random(engine);

		while (i > 0)
		{
			while (lottoArray[i] == lottoArray[i - 1])
			{
				lottoArray[i] = random(engine);
			}

			break;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		if (select[i] == lottoArray[i])
		{
			RateCount++;
		}
	}

	cout << "로또 번호 추첨중";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);

	system("cls");

	Sleep(1000);
	cout << "========================" << endl;
	cout << "  로또 번호 추첨 완료!  " << endl;
	cout << "========================" << endl << endl;
	Sleep(1000);

	cout << "추첨된 ";
	Sleep(1000);
	cout << "로또 ";
	Sleep(1000);
	cout << "번호 : ";
	Sleep(1000);

	for (int i = 0; i < 6; i++)
	{
		cout << lottoArray[i] << " ";
		Sleep(1500);
	}

	cout << endl << endl;

	cout << "당신의 ";
	Sleep(1000);
	cout << "로또 ";
	Sleep(1000);
	cout << "번호 : ";
	Sleep(1000);

	for (int i = 0; i < 6; i++)
	{
		cout << select[i] << " ";
		Sleep(1200);
	}
	cout << endl << endl;
	cout << "========================" << endl;
	cout << "	결과 발표	" << endl;
	cout << "========================" << endl;

	cout << endl;

	if (RateCount == 1)
		cout << "당신은 총 1개의 숫자를 맞췄습니다.. 6등!" << endl;

	else if (RateCount == 2)
		cout << "당신은 총 2개의 숫자를 맞췄습니다.. 5등!" << endl;

	else if (RateCount == 3)
		cout << "당신은 총 3개의 숫자를 맞췄습니다.. 4등!" << endl;

	else if (RateCount == 4)
		cout << "당신은 총 4개의 숫자를 맞췄습니다.. 3등!" << endl;

	else if (RateCount == 5)
		cout << "당신은 총 5개의 숫자를 맞췄습니다.. 2등!" << endl;

	else if (RateCount == 6)
		cout << "당신은 총 6개의 숫자를 맞췄습니다.. 로또 당첨!!!!" << endl;

	else
		cout << "저런 숫자를 하나도 맞추지 못했군요.. 꽝!!!" << endl;
}
