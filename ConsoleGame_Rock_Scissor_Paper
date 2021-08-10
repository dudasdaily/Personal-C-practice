#include <iostream>
#include <ctime>
//#include <string.h> //원래 strcmp()을 쓸려 했으나 다른 방법을 고안해서 포함시키지 않음.
#include <windows.h>//system("cls")과 Sleep()을 쓰기 위해 포함함
#pragma warning(disable:4996)
using namespace std;

char* compse(int a);//rand로 생성한 0, 1, 2를 가위/바위/보로 변환한 포인터값을 리턴하는 함수.

int main()
{
	char select[10];//가위, 바위, 보를 입력 받을 배열
	char comselect[10];//rand로 생성한 0, 1, 2를 가위/바위/보로 저장할 배열
	int count = 0;//입력을 정확하게 했을때 값이 증가해 while문을 종료시킬 변수
	int player, com;//com은 rand로 생성한 0, 1, 2 / player는 if문에서 com과 비교하기 위해 만든 변수 
	
	srand(time(NULL));
	com = rand() % 3;//컴퓨터의 가위(0)/바위(1)/보(2) 상태 생성

	strcpy(comselect, compse(com));//0,1,2 를 가위,바위,보로 바꿔줄 함수.

	while (count == 0)//사용자로부터 가위 바위 보를 입력받을 반복문
	{
		cout << "가위/바위/보 중 하나를 입력해주세요 : ";
		gets_s(select);

		if (strcmp(select, "가위") == 0)
		{
			player = 0;
			cout << "당신은 \"가위\"를 선택했습니다." << endl;
			Sleep(2000);
			system("cls");

			count++;
		}
		else if (strcmp(select, "바위") == 0)
		{
			player = 1;
			cout << "당신은 \"바위\"를 선택했습니다." << endl;
			Sleep(2000);
			system("cls");
			count++;
		}

		else if (select == "보")
		{
			player = 2;
			cout << "당신은 \"보\"를 선택했습니다." << endl;
			Sleep(2000);
			system("cls");
			count++;
		}

		else
		{
			cout << "가위/바위/보 가 아닌 다른것을 입력하셨습니다. 다시 입력해주세요";
			Sleep(1500);
			system("cls");
		}
	}

	//결과가 바로 나오면 재미없으니깐, 애니메이션을 추가
	cout << "컴퓨터의 선택을 기다리고 있습니다";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << "." << endl;
	Sleep(1000);

	cout << "컴퓨터의 선택이 끝났습니다!";
	Sleep(2000);
	system("cls");

	if (player == com)//비겼을 경우 출력
	{
		cout << "당신의 선택은 : " << select << endl;
		Sleep(1000);

		cout << "컴퓨터의 선택은 : ";
		puts(comselect);
		Sleep(1000);

		cout << "DRAW";
	}
	else if (player == 0)//사용자가 가위를 선택했을때
	{
		cout << "당신의 선택은 : " << select << endl;
		Sleep(1000);

		cout << "컴퓨터의 선택은 : ";
		puts(comselect);
		Sleep(1000);

		if (com == 1)
			cout << "YOU LOSE";

		else if (com == 2)
			cout << "YOU WIN!";
	}

	else if (player == 1)//사용자가 바위를 선택했을때
	{
		cout << "당신의 선택은 : " << select << endl;
		Sleep(1000);

		cout << "컴퓨터의 선택은 : ";
		puts(comselect);
		Sleep(1000);

		if (com == 0)
			cout << "YOU WIN!";

		else if (com == 2)
			cout << "YOU LOSE";
	}

	else if (player == 2)//사용자가 보를 선택했을때
	{
		cout << "당신의 선택은 : " << select << endl;
		Sleep(1000);

		cout << "컴퓨터의 선택은 : ";
		puts(comselect);
		Sleep(1000);

		if (com == 0)
			cout << "YOU LOSE";

		else if (com == 1)
			cout << "YOU WIN!";
	}

	return 0;
}

char* compse(int a)
{
	char incomselect[10];
	if (a == 0)
		strcpy(incomselect, "가위");
		
	if (a == 1)
		strcpy(incomselect, "바위");

	if (a == 2)
		strcpy(incomselect, "보");

	return incomselect;
}
