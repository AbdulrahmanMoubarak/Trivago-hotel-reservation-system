#pragma once
#include <iostream>
#include<string>
#include<unordered_map>
#include<vector>
//#include"Header.h"
#include <SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>
using namespace sf;
using namespace std;

struct searchInfo{
	string country;
	int rdate[2][2];
};
struct userInfo
{
	string name;
	bool ad;
};

struct Room
{
public:
	int Room_Number;
	bool Calender[12][30];
	bool Singularity;
	bool Has_TV;
	bool Has_Wifi;
	bool available;
};


class RoomList
{
public:
	unordered_map<int, Room> Rooms;
	void Add_Room_Admin(searchInfo, userInfo);
	void Update_Room(searchInfo, userInfo);
};

struct Hotel
{
	Sprite roomimg[2];

	int ID;
	string Name;
	string Country;
	string Location;
	bool Free_Meals[2];
	int Number_Of_Stars;
	int Number_Of_Rooms;
	double Rate;
	bool Has_Gym;
	bool Has_pool;
	bool Available;
	RoomList roomList;
	vector<pair<string, string>> vcomments;
};

class HotelList
{
public:
	int Number_of_Hotels;
	unordered_map<int, Hotel> IDmap;

public:
	void searchroom(int, searchInfo, userInfo);
	void show(searchInfo, userInfo);
	void showcons();
	void Add_hotel_Admin(searchInfo, userInfo);
	void Update_hotel(searchInfo, userInfo);
	void Delete_hotel(searchInfo, userInfo);
	void Display_hotels(searchInfo, userInfo);
	
	void search(string, int, string, searchInfo, userInfo); // in specific query gym ,pool, free_meals ..
	void filter(string, int, string, searchInfo, userInfo);
	void searchhotel(string, int, string, searchInfo, userInfo);
	void reserve(int,int, searchInfo, userInfo);
	void displaySpeceficHotel(int, string,string ,  searchInfo, userInfo);
	void MainWindow(searchInfo&, userInfo);
	void AdminWindow(searchInfo, userInfo);

};
