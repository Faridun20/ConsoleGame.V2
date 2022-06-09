#include "User.h" 

class User
{
public:
	
	string name;         //переменная для имени 
    int hp;              //переменнея для здоровья 
	int protection;      //переменная для защиты 
	int Class;           //переменная для выбора класса  
	int a = 1;           //костыль для выбора кейса
	const int count = 3; //количество персонажей

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





};
