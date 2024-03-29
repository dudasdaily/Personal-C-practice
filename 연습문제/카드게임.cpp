#include <iostream>
#include <random>
#include <string>
#include <cctype>//isdigit()을 쓰기 위해 포함
#include <windows.h>
using namespace std;

void get_String(string*);
int check_Error(string);
int Str_to_Int(string);
string Int_to_Str(int);
int giveResult(int, int, int);
void InformResult(int, string, string, string, int* bet, int* chip);
void betting(int*, int*);
int chip = 10000;//칩


int main()
{
	string str1, str2, usrstr;
	int bet = 0;
	int first = 0, second = 0, player;
	int check, result;

	//난수 생성 및 범위 지정
	random_device generator;
	mt19937 engine(generator());
	uniform_int_distribution<> random(1, 13);

	while (chip > 0)//칩이 0개 가 되기 전까지 반복
	{
		betting(&bet, &chip);

		cout << endl;

		//usrstr에 카드 선택을 입력받음.
		get_String(&usrstr);


		//A, J, Q, K를 입력했을 경우와 2 ~ 9 사이의 값을 입력했을 경우 1을 리턴 그외 0 리턴
		check = check_Error(usrstr);

		while (check == 0)
		{
			cout << "잘못된 값을 입력했습니다." << endl << endl;
			Sleep(1000);
			get_String(&usrstr);
			check = check_Error(usrstr);
		}


		//A,J,Q,K 와 2~9의 문자열을 숫자로 변환해서 player에 저장
		player = Str_to_Int(usrstr);

		//1~13까지의 난수를 저장
		first = random(engine);
		second = random(engine);

		//중복 방지
		while ((first == second) || (first == player) || (second == player))
		{
			first = random(engine);
			second = random(engine);
		}

		//first와 second의 값을 string으로 변환 후 저장
		str1 = Int_to_Str(first);
		str2 = Int_to_Str(second);

		//게임 결과가 이겼을 경우 1, 졌을경우 0을 result에 저장
		result = giveResult(first, second, player);

		//게임 결과 알림
		InformResult(result, str1, str2, usrstr, &bet, &chip);
	}

	return 0;
}

void get_String(string* str)
{
	cout << "카드 값을 입력해주세요(영문은 대문자로) : ";
	getline(cin, *str);
}

int check_Error(string str)
{
	if (str == "A" || str == "J" || str == "Q" || str == "K")
		return 1;

	else if (isdigit(str[0]) != 0)
	{
		int a = stoi(str);

		if (a > 1 && a <= 10)
			return 1;

		else
			return 0;
	}

	else if (isdigit(str[0]) == 0)
		return 0;

	else
		return 0;
}

int Str_to_Int(string str)
{
	int data;

	if (str == "A")
		data = 1;

	else if (str == "J")
		data = 11;

	else if (str == "Q")
		data = 12;

	else if (str == "K")
		data = 13;

	else
		data = stoi(str);

	return data;

}

string Int_to_Str(int a)
{
	if (a == 1 || a == 11 || a == 12 || a == 13)
	{
		if (a == 1)
			return "A";

		else if (a == 11)
			return "J";

		else if (a == 12)
			return "Q";

		else
			return "K";
	}

	else
		return to_string(a);
}

int giveResult(int first, int second, int player)
{	
	if (first < player && player < second)
		return 1;

	else if (first > player && player > second)
		return 1;

	else
		return 0;
}

void betting(int* bet, int* chip)
{
	cout << "현재 보유 칩 : " << *chip << endl;
	cout << "배팅할 금액을 입력하세요 : ";
	cin >> *bet;

	while (*bet > *chip || *bet <= 0)
	{
		cout << endl << endl;
		cout << "배팅할 금액이 보유한 칩보다 많거나 잘못된 값을 입력했습니다." << endl;
		cout << "현재 보유한 칩 : " << *chip << endl;
		cout << "배팅할 금액을 입력하세요 : ";
		cin >> *bet;
	}

	*chip -= *bet;

	rewind(stdin);
}

void InformResult(int result, string str1, string str2, string usrstr, int* bet, int* chip)
{
	cout << endl << "딜러의 첫번째 선택 : ";
	cout << str1 << endl;

	Sleep(1000);

	cout << "딜러의 두번째 선택 : ";
	cout << str2 << endl;
	Sleep(1000);

	cout << "플레이어의 선택 : ";
	cout << usrstr << endl << endl;
	Sleep(1000);

	if (result == 1)
	{
		Sleep(1000);
		cout << "YOU WIN!!" << endl;

		*chip += 2 * (*bet);
	}

	else if (result == 0)
	{
		Sleep(1000);
		cout << "YOU LOSE" << endl << endl;
	}

	*bet = 0;
}
