#include <stdbool.h>

#define STACK_SIZE 20
#define ERR -1

//��������� ����
struct Stack {
	char* buf;
	int size;
	int hi;
};

//������������� �����
void InitStack(struct Stack *st);

//����������
void PushStack(struct Stack *st, char symb);

//�������� �������
char TopStack(struct Stack *st);

//������� �������
void PopStack(struct Stack *st);

//�������� �� �������
bool FullStack(struct Stack *st);

//�������� �� �������
bool EmptyStack(struct Stack *st);

//������� �����
void ClearStack(struct Stack *st);

//�����������
void ResizeStack(struct Stack *st);

//�����
void PrintStack(struct Stack *st);
