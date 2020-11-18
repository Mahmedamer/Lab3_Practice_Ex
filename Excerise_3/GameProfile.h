#pragma once
#include<string>
using namespace std;

class GameProfile
{
private:
	string Name;
	int CurrentLevel;
	int Coins;
	int Hints;
	bool IsPremiumVersion;
	int watchedAdvertisements;

public:
	
	// Constructor
	GameProfile(string n = "Letter" ,int level = 0 ,int c = 0 ,int h = 3 ,bool premium = false ,int ads = 0);
	
	// Setters
	void setName(string s);
	void setCurrentLevel(int level);
	void setCoins(int c);
	void setHints(int h);
	void setIsPremiumVersion(bool premium);
	void setWatchedAdvertisements(int ads);
	
	// Getters
	string getName();
	int getCurrentLevel();
	int getCoins();
	int getHints();
	bool getIsPremiumVersion();
	int getWatchedAdvertisements();
	
	// Others
	bool buyHints(int N);
	int getRank();
	bool BuyPremiumVersion();
	bool ShowAdvertise();
	void TransferCoins(GameProfile &gp);
	void Print();
};

