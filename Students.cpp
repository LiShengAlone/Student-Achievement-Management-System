#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct tagStudent
{
	char szName[10];//姓名
	int nStuMun;//学号
	int nAge;//年龄
	int nScore;//成绩
}Student;

typedef struct tagNode
{
	Student stu;//学生信息
	struct tagNode* pNext;//指向下一个学生
}Node;

Node* g_pHead = NULL;//定义头结点
//录入学生信息
void InputStudent();

int main()
{
	char ch;
	while (1)
	{
		printf("===============欢迎使用高校学生成绩管理系统V1.0===============\n");
		printf("\t========请选择功能========\n");
		printf("\t\t1.录入学生信息\n");
		printf("\t\t2.打印学生信息\n");
		printf("\t\t3.保存学生信息\n");
		printf("\t\t4.读取学生信息\n");
		printf("\t\t5.统计所有学生人数\n");
		printf("\t\t6.查找学生信息\n");
		printf("\t\t7.修改学生信息\n");
		printf("\t\t8.删除学生信息\n");
		printf("\t\t0.退出系统\n");
		//ch = getchar();//输入一个字符之后，他必须需要敲一个回车
		ch = _getch();//输入一个字符之后，他不需要敲一个回车

		switch (ch)//分流
		{
			case '1'://录入学生信息
				InputStudent();
				break;
			case '2'://打印学生信息

				break;
			case '3'://保存学生信息

				break;
			case '4'://读取学生信息

				break;
			case '5'://统计所有学生人数

				break;
			case '6'://查找学生信息

				break;
			case '7'://修改学生信息

				break;
			case '8'://删除学生信息

				break;
			case '0'://退出系统
				printf("欢迎再次使用！\n");
				return 0;
				break;
			default:
				printf("您的输入有误！请重新输入！\n");
				break;
		}
	}
	return 0;
}

void InputStudent()
{
	printf("请输入学生信息：姓名 学号 年龄 成绩\n");
	Node *p;//当前节点
	p = g_pHead;
	//寻找尾结点
	while (g_pHead != NULL&&p->pNext != NULL)
	{
		p = p->pNext;
	}

	//开辟一块内存
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

	//输入学员信息
	scanf("%s %d %d %d", pNewNode->stu.szName, &pNewNode->stu.nStuMun, &pNewNode->stu.nAge, &pNewNode->stu.nScore);
	free(pNewNode);
	printf("数据添加成功！\n");
}