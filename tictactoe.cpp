#include <iostream>
using namespace std;
void kalosorisma();
int enalagipaikti(int);
int main()
{
	system("chcp 1253");
	kalosorisma();
	char status[3][3];
	int player=1,move,cut;
	bool sin = true;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			status[i][j] = '-';
		}
	}
	do 
	{
		int p = 1,draw=1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << status[i][j];
			}
			cout << "\n";
		}
		jump: cout << "Ο παίκτης " << player << " να μας δώσει την κίνηση του " << endl;
		do
		{
			cin >> move;
			if (move <=0 || move>9)
			{
				cout << "Λάθος θέση εισαγωγή ξανά " << endl;
			}
		} while (move<=0||move>9);
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (p == move)
				{
					if (status[i][j] == 'x' || status[i][j] == 'o')
					{
						goto jump;
					}
					else
					{
						if (player == 1)
						{
							status[i][j] = 'x';
						}
						if (player == 2)
						{
							status[i][j] = 'o';
						}
					}
				}
					p++;
			}

		}
	
		if (status[0][0] == 'x' && status[0][1] == 'x' && status[0][2] == 'x')
		{
			cut = 1;
			sin = false;
		}
			
		if (status[1][0] == 'x' && status[1][1] == 'x' && status[1][2] == 'x')
		{
			cut = 1;
			sin = false;
		}
		
		if (status[2][0] == 'x' && status[2][1] == 'x' && status[2][2] == 'x')
		{
			cut = 1;
			sin = false;
		}
		if (status[0][0] == 'x' && status[1][0] == 'x' && status[2][0] == 'x')
		{
			cut = 1;
			sin = false;
		}
			
		if (status[0][1] == 'x' && status[1][1] == 'x' && status[2][1] == 'x')
		{
			cut = 1;
			sin = false;
		}

		if (status[0][2] == 'x' && status[1][2] == 'x' && status[2][2] == 'x')
		{
			cut = 1;
			sin = false;
		}

		if (status[0][0] == 'x' && status[1][1] == 'x' && status[2][2] == 'x')
		{
			cut = 1;
			sin = false;
		}
			
		if (status[2][0] == 'x' && status[1][1] == 'x' && status[0][2] == 'x')
		{
			cut = 1;
			sin = false;
		}
			

		
			if (status[0][0] == 'o' && status[0][1] == 'o' && status[0][2] == 'o')
			{
				cut = 2;
				sin = false;
			}
			
			if (status[1][0] == 'o' && status[1][1] == 'o' && status[1][2] == 'o')
			{
				cut = 2;
				sin = false;
			}
			
			if (status[2][0] == 'o' && status[2][1] == 'o' && status[2][2] == 'o')
			{
				cut = 2;
				sin = false;
			}
			

			if (status[0][0] == 'o' && status[1][0] == 'o' && status[2][0] == 'o')
			{
				cut = 2;
				sin = false;
			}
			
			if (status[0][1] == 'o' && status[1][1] == 'o' && status[2][1] == 'o')
			{
				cut = 2;
				sin = false;
			}
			
			if (status[0][2] == 'o' && status[1][2] == 'o' && status[2][2] == 'o')
			{
				cut = 2;
				sin = false;
			}
			

			if (status[0][0] == 'o' && status[1][1] == 'o' && status[2][2] == 'o')
			{
				cut = 2;
				sin = false;
			}
			
			if (status[2][0] == 'o' && status[1][1] == 'o' && status[0][2] == 'o')
			{
				cut = 2;
				sin = false;
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (status[i][j] == 'x' || status[i][j] == 'o')
					{
						draw = draw + 1;
					}
				}
			}
			if (draw == 10)
			{
				cut = 3;
				sin = false;
			}
		player = enalagipaikti(player);
	} while (sin==true);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << status[i][j];
		}
		cout << "\n";
	}
	if (cut==1||cut==2)
	{
		cout << "Ο νικητής είναι ο παίκτης: " << cut << endl;
	}
	if (cut == 3)
	{
		cout << "Το παιχνίδι είναι ισοπαλία" << endl;
	}
	return 0;
}

void kalosorisma()
{
	cout << "Καλώς ήρθατε στο tic tac toe " << endl;
}

int enalagipaikti(int player) {
	if (player == 1)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}
