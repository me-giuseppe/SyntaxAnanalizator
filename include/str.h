#include <stdbool.h>

//��������� ��������� ��������������� ��������
struct Str {
	char* s; //C�����
	int size;
};

//������������� ������
void InitStr(struct Str *str, int sz, char* s);

//������
void CopyStr(struct Str *str, int sz, char* s);

//������� ������� � ������
int FindChar(struct Str *str, char symb);

//���������� �������
void AddChar(struct Str *str, char symb);

//�������� ������� ������
void AddStr(struct Str *str, struct Str *add_str);

//�������� �� ���������
bool CompareStr(struct Str *str1, struct Str *str2);

//�������� �������
void DelChar(struct Str *str, char symb);

//������� ������
void ClearStr(struct Str *str);

//������ ������
void PrintStr(struct Str *str);