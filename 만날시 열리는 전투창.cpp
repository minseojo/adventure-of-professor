#include <iostream>
#include <windows.h>
#include <string>
#define MAX_SIZE 100
using namespace std;

struct professor_state    
{
 string bag[MAX_SIZE];
 string skill[MAX_SIZE];    
 int level;
 int hp; 
};

void attack();
void bag();
void run();

void menu();

int main()
{
 professor_state Song, jang, Red;  
 int selMenu;
   

 while(1)
 {
  system("cls");
  menu();
  cout << "�����ϼ���  "; 
  cin >> selMenu;
  fflush(stdin);
  system("cls");
  switch(selMenu)
  {
  case 1:
   attack();
   break;
  case 2:
   bag();
   break;
  case 3:
   run();
   break;
  case 4:
   cout << "�̰���ϴ�." << endl;  // if ���޾Ƽ� ������ �̰����� ��� 
   cout << "�׾����ϴ�. " << endl; // if ���޾Ƽ� �������� ������ ��� 
   return 0; 

   } 
  system("pause");
 }
 return 0;
}

void menu()
{
    cout <<"������������������������������" << endl ;
    cout <<"��          ��   ��!!!      ��" << endl;
    cout <<"��                          ��" << endl;
    cout <<"��       1. ��   ��         ��" << endl;
    cout <<"��       2. ��   ��         ��" << endl;
    cout <<"��       3. ��   ��         ��" << endl;
    cout <<"��       4. (�� 0�ɽ� ����) ��" << endl;
   cout << "������������������������������" << endl;
   
}

void attack(){
	cout << "����" << endl;
}

void bag(){
	cout << " ���� " << endl;
}
void run(){
	cout << "�� �� " << endl;
}

