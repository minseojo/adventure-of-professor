#include <stdio.h>
#include <windows.h>
 
void main()
{
    int a;
    while(1) {
        printf("�����Է�(1:�ʱ�ȭ, 2: ����) : ");
        scanf("%d", &a);
        if(a==1) {
            system("cls");
        } else if(a==2) {
            break;
        }
    }    
}
