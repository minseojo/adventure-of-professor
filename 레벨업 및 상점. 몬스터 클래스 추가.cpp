#include <iostream>
#include <windows.h>
#include <string>                   // �����̳� �Լ��� ���� ����� ����, ����� �����ư��� ��� ���� ���� �ʿ伺 ����  
#define MAX_SIZE 100 
                                   // �� ����� �ִٴ� ���� �Ͽ� attak, defense, bag, run 
using namespace std;

 bool kill = false;                // ���߿� ���͸� ���̸� kill�� true;�� �ٲ۴�. true�϶� ����ġ�� �÷� ������ �ø��� ���� ���� 
 
class professor_state    
{
 		 
 public:
	int level;           // ����
	int EX_VA;  
 	int experince_value[EX_VA];   // ����ġ�� �ϴ� 5�� ���� ���߿� ����ؼ� ���� 
	string bag[MAX_SIZE];             // �⺻ �������̳�, �������� �� ������ ����� ���� 
    string skill[MAX_SIZE];       // �⺻ ��ų�̳�, �������� �� ��ų ����� ���� 
	void levelup()
	{
		level++;
	} 
};

class store
{
	public:
		int item;
		int potion;
}

class Monster
{
	public: 
	     int level;
	     int giving_experince;
};

void experincevalueup(professor_state a, Monster b )                           // ���� ���� �� ������ ����ġ �Լ� 
{
		while(kill){ 
		  	  for(int i= 1; i<= b.giving_experince ; i++){          // ������ giving experince ��, ���͸� ������ �ִ� ����ġ�� 3�̶� �Ҷ� ����ġ�� 5 ���� 3���� ��.  
		  	  	     a.experince_value[i]  = 1;                     // giving experince ��  
				} 
			  for(int i = 1; i <= a.EX_VA; i++){               // ����ġ �� 5������ ��� 1�� �ɽ� ������  
			  	if(a.experince_value[i] = 1){
			  		a.levelup();
				    int next = a.EX_VA *2;              // ������ �ҽ�  ����ġ �� 2��Ǳ�� �ϴ� �س� �̰͵� ���߿� ����� ���� 
					a[next];		
				  }
			  }	
			  
				
		  }
		 kill = False;	               
}

void attack();              // ����  : 1�� ������ 1. ��ų1 2. ��ų2 3. ��ų3 �̷������� ���� �ִ� ��ų �����ְ� 1.2.3�� �ϳ� ����  
void defense();             // ����  : ����Ͽ� 2���� ������ ����ó�� ��ų��� ���� ������ ���ҽ�Ű�� 
void bag();                 // ���� : 3�� ������ ���濡 ����� ������ ��� ���� 
void run();                 // ����  : ���� 

void menu();

int main()
{
 professor_state Song;             // ���ΰ��� ������ �� �� 
 Song.skill[0] = "basic attack";       // �⺻ ���ݰ� �⺻��ų ���� ���߿� ��ġ ���ؾ�� 
 Song.skill[1] = "basic skill";
 Song.level  = 0;           // ����
 Song.EX_VA = 5;
 
 Monster jang;
 jang.giving_experince = 3;
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
   defense(); 
   break;
  case 3:
   bag();
   break;
  case 4:
   run();
   break;
  case 5:
   cout << "�̰���ϴ�." << endl;  // if ���޾Ƽ� ������ �̰����� ��� 
   kill = true;
   experincevalueup(Song, jang);   
   cout << "�׾����ϴ�. " << endl; // if ���޾Ƽ� �������� ��?? ��� 

   return 0;                       // �׸��� ����  

   } 
  system("pause");
 }
 return 0;
}

void menu()
{
    cout <<"������������������������������" << endl;
    cout <<"��          ��   ��!!!      ��" << endl;
    cout <<"��       1. ��   ��         ��" << endl;
    cout <<"��       2. ��   ��         ��" << endl;
    cout <<"��       3. ��   ��         ��" << endl;
    cout <<"��       4. ��   ��         ��" << endl;
    cout <<"��                          ��" << endl; 
    cout <<"������������������������������" << endl;

}

void attack(){
	cout << "����" << endl;       // ���� �ð� ��?? ���� 
}
void defense(){
	cout << "���� " << endl;   // ���� 
}
void bag(){
	cout << " ���� " << endl;     // ���� 
}
void run(){
	cout << "�� �� " << endl;       // ����  
}
