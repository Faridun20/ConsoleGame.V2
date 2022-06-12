#include "Source.h" 
#include "User.cpp"

void error(int c, int& v)
{
	switch (c)
	{
	case 1:
	{
		cout << " Введи количество игроков ('>' или '=' 2): ";
		cin >> v;
	}
	case 2:
	{
		cout << " Дегенерат,Введи количество игроков ('>' или '=' 2): ";
		cin >> v;
	}
	case 3:
	{
		cout << " Ты чурка ? Введи количество игроков ('>' или '=' 2): ";
		cin >> v;
	}
	default:cout << "Ты тупой!!!!!" << endl;
		exit(0);
		break;
	}
}

int main()
{
	setlocale(NULL, "rus");

    int	NumArr;//перменная для размера масссива класса
    int b=1;   //костыль для выбора кейса
    
	cout << "Введите количество игроков ('>' или '=' 2): ";
    cin >> NumArr;
    A:
    if (NumArr>=2){}
	else
	{
		error(b, NumArr);
		b++;
		cout << NumArr << endl;
		goto A;
	}

	vector <User> Player(NumArr);

	for (int i = 0; i < NumArr; i++)
	{
		Player[i].Enter();
	}

	for (int i = 0; i < NumArr; i=+2)
	{
		Player[i].Fight (Player[i+1]);
	}


}


