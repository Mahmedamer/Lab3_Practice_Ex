#include "Gameprofile.h"
#include<iostream>
using namespace std;

// Constructor
GameProfile::GameProfile(string n , int level , int c , int h, bool premium , int ads )
{
	setName(n);
	setCurrentLevel(level);
	setCoins(c);
	setHints(h);
	setIsPremiumVersion(premium);
	setWatchedAdvertisements(ads);
}

// Setters
void GameProfile::setName(string s)
{
	if (s.length() == 0)
	{
		s = "Letter";
	}
	Name = s;
}

void GameProfile::setCurrentLevel(int level) 
{
	if (level < 0)
	{
		level = 0;
	}
	CurrentLevel = level;
}

void GameProfile::setHints(int h)
{
	if (h < 0)
	{
		h = 3;
	}
	Hints = h;
}

void GameProfile::setCoins(int c)
{
	if (c < 0)
	{
		c = 0;
	}
	Coins = c;
}

void GameProfile::setIsPremiumVersion(bool p)
{
	IsPremiumVersion = p;
}

void GameProfile::setWatchedAdvertisements(int ads)
{
	if (ads < 0)
	{
		ads = 0;
	}
	watchedAdvertisements = ads;
}

// Getters
string GameProfile::getName()
{
	return Name;
}

int GameProfile::getCurrentLevel()
{
	return CurrentLevel;
}

int GameProfile::getHints()
{
	return Hints;
}

int GameProfile::getCoins()
{
	return Coins;
}

bool GameProfile::getIsPremiumVersion()
{
	return IsPremiumVersion;
}

int GameProfile::getWatchedAdvertisements()
{
	return watchedAdvertisements;
}

// Others
bool GameProfile::buyHints(int N)
{
	int max = Coins / 100;
	if (N > max)
	{
		return false;
	}
	Coins -= N * 100;
	Hints += N;
	return true;
}

int GameProfile::getRank()
{
	return ( CurrentLevel / 1000 );
}

bool GameProfile::BuyPremiumVersion()
{
	if (IsPremiumVersion == true)
	{
		return true;
	}
	if (Coins < 500)
	{
		return false;
	}
	Coins -= 500;
	IsPremiumVersion = true;
	return true;
}

bool GameProfile::ShowAdvertise()
{
	if (IsPremiumVersion)
	{
		return true;
	}
	Coins += 50;
	watchedAdvertisements += 1;
	return true;
}

void GameProfile::TransferCoins(GameProfile &gp)
{
	gp.Coins += Coins;
}

void GameProfile::Print()
{
	cout << "Name : " << Name << endl;
	cout << "Level : " << CurrentLevel << endl;
	cout << "Coins : " << Coins << endl;
	cout << "Hints : " << Hints << endl;
	cout << "Ads : " << watchedAdvertisements << endl;
	cout << "Premium : " << IsPremiumVersion << endl;
	cout << "Rank : " << getRank() << endl;
}