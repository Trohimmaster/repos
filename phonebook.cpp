#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstring>
#include <Windows.h>
using namespace std;

void function(int menu, int Phone_Book[], char Name[], char nam, char Num[], char num)
{
	
	cout << "Выберете номер функции для ее выполнения: ";
	cin >> menu;
	cout << endl;
	system("cls");

	switch (menu)
	{
	case 1:
	{
		cout << "\t\tДобавить новый контакт\n\n";
		for (int i = 0; i < 10; i++)
		{
			cout << "Введите имя:";
			cin >> nam;
			strcpy_s(Phone_Book[i].Name, nam);
			cout << "Введите номер:";
			cin >> num;
			strcpy_s(Phone_Book[i].Num, num);
			cout << "Если хотите перейти к функциям, нажмите 1. Если хотите добавить контакт, нажмите 0" << endl;
			cin >> exit;
			if (exit == 0)
			{
				break;
			}
			if (exit == 1)
			{
				cout << " \n";
			}
		}
	}
	case 2:
	{
		cout << "\t\tПереименовать\n\n";
		int N; //  строка переименования
		cout << "Введите номер строки с именем :" << endl;
		cin >> N;
		cout << "Введите имя:";
		cin >> nam;
		strcpy_s(Phone_Book[N].Name, nam);

		break;
	}

	case 3:
	{
		cout << "\t\tИзменить номер\n\n";
		int N; //  строка переименования
		cout << "Введите номер строки Number:" << endl;
		cin >> N;
		cout << "Введите новый номер:";
		cin >> num;
		strcpy_s(Phone_Book[N].Num, num);
		break;
	}
/*
	case 4:
	{
		cout << "\t\tУдалить\n\n";
		int N; //  строка переименования
		int k; //
		cout << "Введите номер строки Name и Number:" << endl;
		cin >> N;
		cin
			strcpy_s(Phone_Book[N].Name, '_');
		strcpy_s(Phone_Book[N].Num, '_');
	}

	case 5: cout << "Выбрать звук";

	case 6: cout << "Применить фото к контакту";

	case 7: cout << "Добавить e-mail";

	case 8:
	{
		cout << "Упорядочить по имени";
		int z; // переменная для обмена в массиве
		for (int j = 0; j < 10 - 1; j++)
		{
			for (int i = 0; i < 10 - 1; i++)
			{
				if (Phone_Book[i].Name > Phone_Book[i + 1].Name)
				{
					z = Phone_Book[i].Name;
					Phone_Book[i].Name = A[i + 1];
					A[i + 1] = z;
				}
			}
		}
		for (int i = 0; i < N; i++)
		{
			cout << A[i] << " " << endl;
		}
		*/
	case 9:
	{
		cout << "\t\tТелефонная книга\n\n"; // Показать телефонную книгу
		for (int i = 0; i < 10; i++)
		{
			cout << Phone_Book[i].Name << "\t";
			cout << Phone_Book[i].Num << "\n";
		}
	}

	case 0:
	{
		int exit;
		cout << "\t\tВыход\n\n" << "Вы действительно хотите выйти? y/n ";
		cin >> exit;
		if (exit = 'y')
		{
			break;
		}
	}

	}
	}



int main()
{
	setlocale(LC_ALL, "rus");
	char nam[20];
	char num[20];
	int exit;
	int menu;
	struct
	{
		char Name[20];
		char Num[15];

	}Phone_Book[10];
	cout << "\t\tТелефонная книга\n\n";
	
	for (int i = 0; i < 10; i++)
	{	
			cout << "Введите имя:";
			cin >> nam;
			strcpy_s(Phone_Book[i].Name, nam);
			cout << "Введите номер:";
			cin >> num;
			strcpy_s(Phone_Book[i].Num, num);
			cout << "Если хотите перейти к функциям, нажмите 1. Если хотите добавить контакт, нажмите 0" << endl;
			cin >> exit;
			if(exit == 0)
			{
				break;
			}
			if (exit == 1) 
			{
				cout << " \n";
			}
	}
	system("cls");
	while (!(menu == 0))
	{
		cout << "1 Добавить новый контакт" << endl;
		cout << "2 Переименовать" << endl;
		cout << "3 Изменить номер" << endl;
		cout << "4 Удалить" << endl;
		cout << "5" << endl;
		cout << "6" << endl;
		cout << "7" << endl;
		cout << "8 Упорядочить" << endl;
		cout << "9 Телефонная книга" << endl;
		cout << "0 Выйти" << endl;
		function(int menu, int Phone_Book[], char Name[], char nam, char Num[], char num)
	}
	
	
	_getch();
	return 0;
}
