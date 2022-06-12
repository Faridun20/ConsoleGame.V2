#include "Source.h" 
#include "Attack.cpp"
class User
{
public:
	string name="";      //переменная для имени 
    int hp=0;            //переменнея для здоровья 
	int protection=0;    //переменная для защиты 
	int Class=0;         //переменная для выбора класса  
	int a = 1;           //костыль для выбора кейса
	const int count = 3; //количество персонажей
	int person = 0;      //Номер выбранного класса персонажа 
	void Enter()
	{
		cout << "Введите имя будущего персонажа: ";
		cin >> name;

		cout << "Выберете класс за который будете играть:" << endl <<
			    "1)Шмарио hp=30  protection=70 "           << endl <<
			    "2)Сутенер hp=50  protection=50 "          << endl <<
			    "3)Проститутка hp=70  protection=30 "      << endl;
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
			cout << " Выбери один из " << count << ":";
			cin >> Class;
		}
		case 2:
		{
			cout << " Дегенерат, выбери один из " << count << ":";
			cin >> Class;
		}
		case 3:
		{
			cout << " Ты чурка ? Выбери один из "<<count <<":";
			cin >> Class;
		}
		default: 
		{
			cout << "Ты тупой!!!!!" << endl;
			exit(0); 
		}
		}
	}
	void Fight( User& UserBeta);
};

inline void User::Fight( User & UserBeta)// Обработка битвы  
{
	int Att=0;
	do 
	{////////////////////////////////////////////////
		switch (this->person)
		{
		case 1:
		{
			cout << "(урон:20-25) " << endl <<
			        "(урон:15-40) " << endl <<
			        "(урон:30-35) " << endl <<
			        "(урон:15-20) " << endl;
		    cin >> Att;
			Attack(Att, UserBeta.hp, UserBeta.protection, UserBeta.person);
		}
		case 2:
		{
			cout << "(урон:15-20) " << endl <<
				    "(урон:12-15) " << endl <<
				    "(урон:30-40) " << endl <<
				    "(урон:20-30) " << endl;
			cin >> Att;
			Attack(Att, UserBeta.hp, UserBeta.protection, UserBeta.person);
		}
		case 3:
		{
			cout << "(урон:10-30) " << endl <<
				    "(урон:15-35) " << endl <<
				    "(урон:20-40) " << endl <<
				    "(урон:15-25) " << endl;
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
			cout << "(урон:20-25) " << endl <<
				    "(урон:15-40) " << endl <<
				    "(урон:30-35) " << endl <<
				    "(урон:15-20) " << endl;
			cin >> Att;
			Attack(Att, this->hp, this->protection, this->person);
		}
		case 2:
		{
			cout << "(урон:15-20) " << endl <<
				    "(урон:12-15) " << endl <<
				    "(урон:30-40) " << endl <<
				    "(урон:20-30) " << endl;
			cin >> Att;
			Attack(Att, this->hp, this->protection, this->person);
		}
		case 3:
		{
			cout << "(урон:10-30) " << endl <<
				    "(урон:15-35) " << endl <<
				    "(урон:20-40) " << endl <<
				    "(урон:15-25) " << endl;
			cin >> Att;
			Attack(Att, this->hp, this->protection, this->person);
		}
		default:break;
		}

	} while (this->hp<0 || UserBeta.hp < 0);

	if (this->hp==0)
	{
		cout << "Выиграл:" << UserBeta.name << endl;
	}
	else
	{
		cout << "Выиграл:" << this->name << endl;
	}

}



