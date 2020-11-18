#include"GameProfile.h"
#include<iostream>
using namespace std;
GameProfile HighestRank(GameProfile Arr[] , int n)
{
	GameProfile high = Arr[0];
	int rank = high.getRank();
	for (int i = 1; i < n; i++)
	{
		int temprank = Arr[i].getRank();
		if (temprank > rank)
		{
			high = Arr[i];
			rank = temprank;
		}
	}
	return high;
}
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

	GameProfile A[2];
	A[0] = Gamer1;
	A[1] = Gamer2;
	GameProfile G = HighestRank(A, 2);
	cout << "Gamer G : " << endl;
	G.Print();
	return 0;
}