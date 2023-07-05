#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{	
	int x;
	int s,s1,bet,numarulGhicit,copie,profit;
	string alegere;
	cout << "Jocul se numeste ghiceste cifra, daca reusesti sa o ghicesti suma de bani pe care ai jucat-o ti se dubleaza daca nu ai pierdut betul.Cifrele sunt de la 0 pana la 9 inclusiv.Doresti sa joci? (Da/Nu)";
	cout << endl; 
	cout << endl;
	cin >> alegere;
	cout << endl;
	if (alegere == "Nu" or alegere == "nu")
		return 0;

	cout << "Numarul de bani cu care intrii la masa este: ";
	cin >> s;
	cout << endl;
	copie = s;
	s1 = s;
	int ok = 1;
	
	while (copie>0)
	{
		cout << "Betul este de: ";
		cin >> bet;
		cout << endl;
		cout << "Numarul ales este: ";
		cin >> numarulGhicit;

		x = rand();
		if (numarulGhicit == (x%10))
		{
			copie = copie+bet * 2;
			cout << "AI CASTIGAT";
			cout << endl;
			cout << endl;
		}
		else
		{
			copie = copie - bet;
			cout << "AI PIERDUT";
			cout << endl;
			cout << endl;
		}
		cout << "Mai ai " << copie << "bani,";
		cout << "doresti sa continui? (Da/Nu)";
		cout << endl;
		cout << endl;
		cin >> alegere;
		cout << endl;
		cout << endl;
		if (alegere == "Nu" or alegere == "nu")
		{
			s1 = copie;
			copie = 0;
			ok = 0;
		}
		else
			x = rand();
		if (copie == 0 && ok==1)
			cout << "Ai pierdut toti banii!!!!";

	}
	if (s1 > s)
		cout << "ai castigat " << s1 - s << " bani";
	else
		cout << "ai pierdut" << s - s1 << " bani";
	cout << endl;
	return 0;
}