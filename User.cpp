#include "Source.h" 
#include "Attack.cpp"
class User
{
public:
	string name="";      //���������� ��� ����� 
    int hp=0;            //���������� ��� �������� 
	int protection=0;    //���������� ��� ������ 
	int Class=0;         //���������� ��� ������ ������  
	int a = 1;           //������� ��� ������ �����
	const int count = 3; //���������� ����������
	int person = 0;      //����� ���������� ������ ��������� 
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
		if (Class<=3)
		{
			if (Class == 1) { person = 1; }
			else if (Class == 2) { person = 2; }
			else{ person = 3; }
		}
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
	void Fight( User& UserBeta);
};

inline void User::Fight( User & UserBeta)// ��������� �����  
{
	int Att=0;
	do 
	{////////////////////////////////////////////////
		switch (this->person)
		{
		case 1:
		{
			cout << "(����:20-25) " << endl <<
			        "(����:15-40) " << endl <<
			        "(����:30-35) " << endl <<
			        "(����:15-20) " << endl;
		    cin >> Att;
			Attack(Att, UserBeta.hp, UserBeta.protection, UserBeta.person);
		}
		case 2:
		{
			cout << "(����:15-20) " << endl <<
				    "(����:12-15) " << endl <<
				    "(����:30-40) " << endl <<
				    "(����:20-30) " << endl;
			cin >> Att;
			Attack(Att, UserBeta.hp, UserBeta.protection, UserBeta.person);
		}
		case 3:
		{
			cout << "(����:10-30) " << endl <<
				    "(����:15-35) " << endl <<
				    "(����:20-40) " << endl <<
				    "(����:15-25) " << endl;
			cin >> Att;
			Attack(Att, UserBeta.hp, UserBeta.protection, UserBeta.person);
		}
		default:break;
		}
     /////////////////////////////////////////////////
		switch (UserBeta.person)
		{
		case 1:
		{
			cout << "(����:20-25) " << endl <<
				    "(����:15-40) " << endl <<
				    "(����:30-35) " << endl <<
				    "(����:15-20) " << endl;
			cin >> Att;
			Attack(Att, this->hp, this->protection, this->person);
		}
		case 2:
		{
			cout << "(����:15-20) " << endl <<
				    "(����:12-15) " << endl <<
				    "(����:30-40) " << endl <<
				    "(����:20-30) " << endl;
			cin >> Att;
			Attack(Att, this->hp, this->protection, this->person);
		}
		case 3:
		{
			cout << "(����:10-30) " << endl <<
				    "(����:15-35) " << endl <<
				    "(����:20-40) " << endl <<
				    "(����:15-25) " << endl;
			cin >> Att;
			Attack(Att, this->hp, this->protection, this->person);
		}
		default:break;
		}

	} while (this->hp<0 || UserBeta.hp < 0);

	if (this->hp==0)
	{
		cout << "�������:" << UserBeta.name << endl;
	}
	else
	{
		cout << "�������:" << this->name << endl;
	}

}



