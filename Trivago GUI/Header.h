#pragma once
#include <SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>

#include <iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include "Hotel.h"
using namespace std;
using namespace sf;


//int Login(userInfo&);
//int MainWindow(searchInfo&,userInfo);

void Setup(HotelList& h)
{
	h.Number_of_Hotels = 0;
	Hotel val;

	val.Available = true;
	val.Country = "Egypt";
	val.Free_Meals[0] = false;
	val.Free_Meals[1] = true;
	val.Has_Gym = false;
	val.Has_pool = true;
	val.ID = 1000;
	val.Location = "Triumph - Cairo";
	val.Name = "Hotel Triumph";
	val.Number_Of_Rooms = 2;
	val.Number_Of_Stars = 2;
	val.Rate = 5;
	string name = "Ahmad.Ali";
	string comment = "This Hotel is the worst.";
	pair<string, string> C = make_pair(name, comment);
	val.vcomments.push_back(C);

	string name2 = "Mahmoud245";
	string comment2 = "I didn't enjoy my stay. :(";
	pair<string, string> C2 = make_pair(name2, comment2);
	val.vcomments.push_back(C2);

	Room rval;
	rval.Has_TV = true;
	rval.Has_Wifi = false;
	rval.available = true;
	rval.Room_Number = 1;
	rval.Singularity = true;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			rval.Calender[i][j] = false;
		}
	}

	val.roomList.Rooms.insert(make_pair(rval.Room_Number, rval));

	Room rval2;

	rval2.Has_TV = false;
	rval2.Has_Wifi = true;

	rval2.available = true;
	rval2.Room_Number = 2;
	rval2.Singularity = false;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			rval2.Calender[i][j] = false;
		}
	}
	val.roomList.Rooms.insert(make_pair(rval2.Room_Number, rval2));

	h.IDmap.insert(make_pair(val.ID, val));

	h.Number_of_Hotels++;
	//////////////////////////////////////
	Hotel val2;
	val2.Available = true;
	val2.Country = "Egypt";
	val2.Free_Meals[0] = false;
	val2.Free_Meals[1] = false;
	val2.Has_Gym = false;
	val2.Has_pool = false;
	val2.ID = 1001;
	val2.Location = "Gesr ElSuez - Cairo";
	val2.Name = "Elsalam Hotel";
	val2.Number_Of_Rooms = 2;
	val2.Number_Of_Stars = 1;
	val2.Rate = 3.2;

	val2.roomList.Rooms.insert(make_pair(rval.Room_Number, rval));

	val2.roomList.Rooms.insert(make_pair(rval2.Room_Number, rval2));

	h.IDmap.insert(make_pair(val2.ID, val2));

	h.Number_of_Hotels++;
	////////////////////////////////////
	Hotel val3;
	val3.Available = true;
	val3.Country = "France";
	val3.Free_Meals[0] = true;
	val3.Free_Meals[1] = true;
	val3.Has_Gym = true;
	val3.Has_pool = true;
	val3.ID = 1002;
	val3.Location = "Palace du colonel";
	val3.Name = "Generator Paris";
	val3.Number_Of_Rooms = 2;
	val3.Number_Of_Stars = 3;
	val3.Rate = 7.9;

	val3.roomList.Rooms.insert(make_pair(rval.Room_Number, rval));

	val3.roomList.Rooms.insert(make_pair(rval2.Room_Number, rval2));

	h.IDmap.insert(make_pair(val3.ID, val3));

	h.Number_of_Hotels++;
	////////////////////////////////////
	Hotel val4;
	val4.Available = true;
	val4.Country = "USA";
	val4.Free_Meals[0] = true;
	val4.Free_Meals[1] = true;
	val4.Has_Gym = false;
	val4.Has_pool = true;
	val4.ID = 1003;
	val4.Location = "35 Las Vegas Boulevard";
	val4.Name = "Flamingo Las Vegas";
	val4.Number_Of_Rooms = 2;
	val4.Number_Of_Stars = 3;
	val4.Rate = 7.8;
	

	val4.roomList.Rooms.insert(make_pair(rval.Room_Number, rval));

	val4.roomList.Rooms.insert(make_pair(rval2.Room_Number, rval2));

	h.IDmap.insert(make_pair(val4.ID, val4));

	h.Number_of_Hotels++;
	/////////////////////////////////////
	Hotel val5;

	val5.Available = true;
	val5.Country = "USA";
	val5.Free_Meals[0] = false;
	val5.Free_Meals[1] = false;
	val5.Has_Gym = true;
	val5.Has_pool = true;
	val5.ID = 1004;
	val5.Location = "38 Las Vegas Boulevard";
	val5.Name = "Excalibur";
	val5.Number_Of_Rooms = 2;
	val5.Number_Of_Stars = 3;
	val5.Rate = 7.8;

	val5.roomList.Rooms.insert(make_pair(rval.Room_Number, rval));

	val5.roomList.Rooms.insert(make_pair(rval2.Room_Number, rval2));

	h.IDmap.insert(make_pair(val5.ID, val5));

	h.Number_of_Hotels++;
	/////////////////////////////////////
	Hotel val6;
	val6.Available = true;
	val6.Country = "India";
	val6.Free_Meals[0] = false;
	val6.Free_Meals[1] = true;
	val6.Has_Gym = true;
	val6.Has_pool = true;
	val6.ID = 1005;
	val6.Location = "Taj East Gate";
	val6.Name = "Taj Hotel";
	val6.Number_Of_Rooms = 2;
	val6.Number_Of_Stars = 5;
	val6.Rate = 8.6;
	val6.roomList.Rooms.insert(make_pair(rval.Room_Number, rval));

	val6.roomList.Rooms.insert(make_pair(rval2.Room_Number, rval2));

	h.IDmap.insert(make_pair(val6.ID, val6));

	h.Number_of_Hotels++;
}

void Login(userInfo &U)
{
	RenderWindow window;
	window.create(sf::VideoMode(1000, 564), "My window", sf::Style::Default);
	sf::Font myfont;
	myfont.loadFromFile("ArialUnicodeMS.ttf");
	
	
	sf::Texture texture;
	texture.loadFromFile("Untitled-1.png");
	
	
	sf::Sprite background(texture);
	sf::Texture logo;
	logo.loadFromFile("trivago-logo.png");


	sf::Sprite trivagologo(logo);
	trivagologo.scale(0.7, 0.7);
	trivagologo.setPosition(300, 70);
	
	sf::Text un;
	un.setFont(myfont);
	un.setString("Enter Your Username: ");
	un.setPosition(30, 250);
	un.setFillColor(sf::Color::Black);
	un.setCharacterSize(30);

	sf::RectangleShape unsh(sf::Vector2f(500, 50));
	unsh.setPosition(400, 250);
	unsh.setFillColor(sf::Color::White);
	unsh.setOutlineThickness(2);
	unsh.setOutlineColor(Color(202, 202, 202));

	sf::RectangleShape loginbtn(sf::Vector2f(130, 60));
	loginbtn.setPosition(427, 355);
	loginbtn.setFillColor(sf::Color(98, 190, 96));
	loginbtn.setOutlineThickness(2);
	loginbtn.setOutlineColor(sf::Color::White);

	sf::Text Logintxt;
	Logintxt.setFont(myfont);
	Logintxt.setString("Login");
	Logintxt.setPosition(450, 365);
	Logintxt.setCharacterSize(30);
	Logintxt.setFillColor(sf::Color::White);

	U.name = "";
	sf::Text usertext;
	usertext.setFont(myfont);
	usertext.setFillColor(sf::Color::Black);
	usertext.setPosition(400, 250);

	

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
			
			if (event.type == sf::Event::TextEntered)
			{
				if (event.text.unicode < 128 && event.text.unicode != 8) {
					U.name += event.text.unicode;
					usertext.setString(U.name);

				}
				else if (event.text.unicode == 8 && U.name.size() !=0)
				{
					U.name.pop_back();
					usertext.setString(U.name);
				}
			}
			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (loginbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						

						if (U.name == "Admin")
						{
							U.ad = true;
							//return 1;
						}
						else{
							U.ad = false;
							//return 2;
						}
						window.close();
						

						usertext.setString("");
					}
				}
			}

		}
		
		window.clear();
		window.draw(background);
		window.draw(trivagologo);
		window.draw(un);
		window.draw(unsh);
		window.draw(usertext);
		window.draw(loginbtn);
		window.draw(Logintxt);
		window.display();


	}
}
