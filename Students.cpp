#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct tagStudent
{
	char szName[10];//����
	int nStuMun;//ѧ��
	int nAge;//����
	int nScore;//�ɼ�
}Student;

typedef struct tagNode
{
	Student stu;//ѧ����Ϣ
	struct tagNode* pNext;//ָ����һ��ѧ��
}Node;

Node* g_pHead = NULL;//����ͷ���
//¼��ѧ����Ϣ
void InputStudent();

int main()
{
	char ch;
	while (1)
	{
		printf("===============��ӭʹ�ø�Уѧ���ɼ�����ϵͳV1.0===============\n");
		printf("\t========��ѡ����========\n");
		printf("\t\t1.¼��ѧ����Ϣ\n");
		printf("\t\t2.��ӡѧ����Ϣ\n");
		printf("\t\t3.����ѧ����Ϣ\n");
		printf("\t\t4.��ȡѧ����Ϣ\n");
		printf("\t\t5.ͳ������ѧ������\n");
		printf("\t\t6.����ѧ����Ϣ\n");
		printf("\t\t7.�޸�ѧ����Ϣ\n");
		printf("\t\t8.ɾ��ѧ����Ϣ\n");
		printf("\t\t0.�˳�ϵͳ\n");
		//ch = getchar();//����һ���ַ�֮����������Ҫ��һ���س�
		ch = _getch();//����һ���ַ�֮��������Ҫ��һ���س�

		switch (ch)//����
		{
			case '1'://¼��ѧ����Ϣ
				InputStudent();
				break;
			case '2'://��ӡѧ����Ϣ

				break;
			case '3'://����ѧ����Ϣ

				break;
			case '4'://��ȡѧ����Ϣ

				break;
			case '5'://ͳ������ѧ������

				break;
			case '6'://����ѧ����Ϣ

				break;
			case '7'://�޸�ѧ����Ϣ

				break;
			case '8'://ɾ��ѧ����Ϣ

				break;
			case '0'://�˳�ϵͳ
				printf("��ӭ�ٴ�ʹ�ã�\n");
				return 0;
				break;
			default:
				printf("���������������������룡\n");
				break;
		}
	}
	return 0;
}

void InputStudent()
{
	printf("������ѧ����Ϣ������ ѧ�� ���� �ɼ�\n");
	Node *p;//��ǰ�ڵ�
	p = g_pHead;
	//Ѱ��β���
	while (g_pHead != NULL&&p->pNext != NULL)
	{
		p = p->pNext;
	}

	//����һ���ڴ�
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;
	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;
	}
	else
	{
		p->pNext = pNewNode;
	}

	//����ѧԱ��Ϣ
	scanf("%s %d %d %d", pNewNode->stu.szName, &pNewNode->stu.nStuMun, &pNewNode->stu.nAge, &pNewNode->stu.nScore);
	free(pNewNode);
	printf("������ӳɹ���\n");
}