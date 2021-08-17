#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
using namespace std;


string playerinput();//플레이어의 입력을 받을 함수
string sameselect();//플레이어가 같은 것을 입력했을 때 입력받을 함수.
string convertint(int);//infancycom 변수를 가위/바위/보로 변환
void animation();
void informmassage(string, string, string, string);
string player_subtract(string player1, string player2);//플레이어의 두 가지 선택중 하나를 빼주는 함수.
string com_subtract(string, string);//컴퓨터의 두 가지 선택중 하나를 빼주는 함수.
int judge(string, string);//승,패 여부를 알려주는 함수.

int main()
{
	string player1, player2;//플레이어의 입력을 받을 문자열 2개
	string com1, com2;//convertint()로 바뀐 가위/바위/보를 저장할 변수
	int infancycom1, infancycom2;//rand로 생성된 0,1,2를 저장할 변수
	string player_result, com_result;//하나빼기 완료 후 저장할 변수

	cout << "가위바위보 하나빼기 게임입니다." << endl;

	player1 = playerinput();
	player2 = playerinput();

	while (player1 == player2)
		player2 = sameselect();

	cout << "플레이어의 선택이 끝났습니다!" << endl;

	Sleep(1500);
	system("cls");


	//컴퓨터의 선택 시작

	srand(time(NULL));//rand 시드값

	//Random을 써서 0,1,2 즉, 가위/바위/보를 infancy변수에 저장
	infancycom1 = rand() % 3;
	infancycom2 = rand() % 3;

	while (infancycom1 == infancycom2)
		infancycom2 = rand() % 3;

	//infancy변수를 가위/바위/보로 변환하여 com에 저장
	com1 = convertint(infancycom1);
	com2 = convertint(infancycom2);

	animation();//컴퓨터가 선택중이라는 애니메이션 출력

	informmassage(player1, player2, com1, com2);//플레이어와 컴퓨터가 선택한 값을 출력
	Sleep(2000);

	player_result = player_subtract(player1, player2);//두 가지 값 중 하나를 빼고 남은 값을 저장
	com_result = com_subtract(com1, com2);//두 가지 값 중 하나를 빼고 남은 값을 저장
	Sleep(1500);

	system("cls");
	cout << "========================" << endl;
	cout << "플레이어 : " << player_result << endl << "컴퓨터 : " << com_result << endl;
	cout << "========================" << endl;

	int WinorLose = judge(player_result, com_result);

	if (WinorLose == 0)
		cout << "졌습니다." << endl;

	else if (WinorLose == 1)
		cout << "이겼습니다!" << endl;

	else
		cout << "비겼습니다!" << endl;
}

string playerinput()
{
	int count = 0;
	while (count == 0)
	{
		string a;
		cout << "가위/바위/보 중 하나를 입력해주세요 : ";
		getline(cin, a);

		if ((a == "가위") || (a == "바위") || (a == "보"))
		{
			count++;
			return a;
		}

		else if ((a != "가위") || (a != "바위") || (a != "보"))
		{
			cout << "가위/바위/보 가 아닌 다른 값을 입력하셨습니다. 다시 입력해주세요" << endl;
			Sleep(2000);
			system("cls");
		}
	}
}

string sameselect()
{
	string a;
	cout << "같은 값을 입력했습니다. 다른 값을 입력해주세요 : ";

	getline(cin, a);

	return a;
}

string convertint(int x)
{
	if (x == 0)
		return "가위";

	else if (x == 1)
		return "바위";

	else if (x == 2)
		return "보";
}

void animation()
{
	cout << "컴퓨터가 선택중입니다";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << "." << endl;

	cout << "컴퓨터의 선택이 완료되었습니다!!" << endl;
	Sleep(2000);
	system("cls");
}

void informmassage(string x, string y, string a, string b)
{
	cout << "당신은 " << x << "/" << y << "를 냈습니다." << endl;
	Sleep(1500);
	cout << "컴퓨터는 " << a << "/" << b << "를 냈습니다." << endl;
}

string player_subtract(string player1, string player2)
{
	int count = 0;
	string player_subtract;
	
	while (count == 0)
	{
		cout << player1 << " 혹은 " << player2 << "중에 뺄 것을 고르세요 : ";
		getline(cin, player_subtract);

		if (player_subtract == player1)
		{
			count++;
			return player2;
		}

		else if (player_subtract == player2)
		{
			count++;
			return player1;
		}

		else
		{
			cout << player1 << " 혹은 " << player2 << "가 아닌 다른것을 선택하셨습니다." << endl;
			Sleep(2000);
			system("cls");
		}
	}
}

string com_subtract(string com1, string com2)
{
	int binary;

	binary = rand() % 2;

	if (binary == 0)
		return com1;

	else
		return com2;
}

int judge(string player_result, string com_result)
{
	if (player_result == "가위")
	{
		if (com_result == "바위")
			return 0;

		else if (com_result == "보")
			return 1;

		else
			return 2;
	}

	else if (player_result == "바위")
	{
		if (com_result == "가위")
			return 1;

		else if (com_result == "보")
			return 0;

		else
			return 2;
	}

	else if (player_result == "보")
	{
		if (com_result == "가위")
			return 0;

		else if (com_result == "바위")
			return 1;

		else
			return 2;
	}
}
