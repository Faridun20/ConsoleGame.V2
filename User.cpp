#include "User.h" 

class User
{
public:
	
	string name;         //���������� ��� ����� 
    int hp;              //���������� ��� �������� 
	int protection;      //���������� ��� ������ 
	int Class;           //���������� ��� ������ ������  
	int a = 1;           //������� ��� ������ �����
	const int count = 3; //���������� ����������

	void Enter()
	{
cout << "������� ��� �������� ���������: ";
		cin >> name;

		cout << "�������� ����� �� ������� ������ ������:" << endl <<
			    "1)������ hp=30  protection=70 "           << endl <<
			    "2)������� hp=50  protection=50 "          << endl <<
			    "3)����������� hp=70  protection=30 "      << endl;
		cin >> Class;

		A:
		if (Class<=3){}
		else
		{
			error();
			a++;
			goto A;
		}
	}

	void error()
	{
		switch (a)
		{
		case 1:
		{
			cout << " ������ ���� �� " << count << ":";
			cin >> Class;
		}
		case 2:
		{
			cout << " ���������, ������ ���� �� " << count << ":";
			cin >> Class;
		}
		case 3:
		{
			cout << " �� ����� ? ������ ���� �� "<<count <<":";
			cin >> Class;

		}
		default: 
		{
			cout << "�� �����!!!!!" << endl;
			exit(0); 
		}
		}
	}





};
