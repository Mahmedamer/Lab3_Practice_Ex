#include"GameProfile.h"
#include<iostream>
using namespace std;
int main()
{
	GameProfile Gamer1("Mohamed" , 6308 , 1000 , 5 , false ,127) , Gamer2;
	
	Gamer2.setCoins(200);
	Gamer2.TransferCoins(Gamer1);

	cout << "Gamer2 : " << endl;
	Gamer2.Print();

	cout << endl;

	cout << "Gamer1 : " << endl;
	Gamer1.Print();
	
	cout << endl;

	cout << "Result = " << Gamer1.ShowAdvertise() << endl;
	cout << "Gamer1 : " << endl;
	Gamer1.Print();
	
	cout << endl;

	cout << "Result = " << Gamer1.buyHints(3) << endl;
	cout << "Gamer1 : " << endl;
	Gamer1.Print();

	cout << endl;

	cout << "Result = " << Gamer1.BuyPremiumVersion() << endl;
	cout << "Gamer1 : " << endl;
	Gamer1.Print();

	cout << endl;

	cout << "Result = " << Gamer1.buyHints(7) << endl;
	cout << "Gamer1 : " << endl;
	Gamer1.Print();

	cout << endl;

	cout << "Result = " << Gamer1.ShowAdvertise() << endl;
	cout << "Gamer1 : " << endl;
	Gamer1.Print();

	return 0;
}