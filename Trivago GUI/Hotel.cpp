#include "Hotel.h"
#include <string>
#include<vector>
#include <unordered_map>
#include <SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Network.hpp>
//#include"Header.h"

using namespace std;
#include<iostream>

void HotelList::Add_hotel_Admin(searchInfo s , userInfo u)
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
		trivagologo.setPosition(300, 20);

		Text HotelData;

		string tmp0 = "ID :\nName :\nCountry :\nLocation :\nFree Breakfast :\nFree Dinner :\nStars :\nHas Gym? :\nHas Pool? :\nNumber Of Rooms :";
		

		HotelData.setString(tmp0);
		HotelData.setCharacterSize(20);
		HotelData.setFont(myfont);
		HotelData.setFillColor(Color::Black);
		HotelData.setPosition(30, 170);
		/////////////////////////////
		RectangleShape textboxes[10];
		/*for (int i = 0; i < 10; i++)
		{
			textboxes[i].setSize(Vector2f(100, 25));
			textboxes[i].setPosition(220, 10*(i+10));
			textboxes[i].setFillColor(sf::Color::White);
			textboxes[i].setOutlineThickness(1);
			textboxes[i].setOutlineColor(sf::Color(202, 202, 202));


		}*/
		textboxes[0].setSize(Vector2f(100, 25));
		textboxes[0].setPosition(90, 170);
		textboxes[0].setFillColor(sf::Color::White);
		textboxes[0].setOutlineThickness(1);
		textboxes[0].setOutlineColor(sf::Color(202, 202, 202));


		string ai0="";
		sf::Text addin0;
		addin0.setFont(myfont);
		addin0.setFillColor(sf::Color::Black);
		addin0.setPosition(101,170);
		addin0.setCharacterSize(15);


		textboxes[1].setSize(Vector2f(100, 25));
		textboxes[1].setPosition(100, 170+27);
		textboxes[1].setFillColor(sf::Color::White);
		textboxes[1].setOutlineThickness(1);
		textboxes[1].setOutlineColor(sf::Color(202, 202, 202));


		string ai1 = "";
		sf::Text addin1;
		addin1.setFont(myfont);
		addin1.setFillColor(sf::Color::Black);
		addin1.setPosition(101, 170+27);
		addin1.setCharacterSize(15);

		textboxes[2].setSize(Vector2f(100, 25));
		textboxes[2].setPosition(120, 170 + 27*2);
		textboxes[2].setFillColor(sf::Color::White);
		textboxes[2].setOutlineThickness(1);
		textboxes[2].setOutlineColor(sf::Color(202, 202, 202));


		string ai2 = "";
		sf::Text addin2;
		addin2.setFont(myfont);
		addin2.setFillColor(sf::Color::Black);
		addin2.setPosition(121, 170 + 27*2);
		addin2.setCharacterSize(15);

		textboxes[3].setSize(Vector2f(100, 25));
		textboxes[3].setPosition(120, 170 + 27 * 3);
		textboxes[3].setFillColor(sf::Color::White);
		textboxes[3].setOutlineThickness(1);
		textboxes[3].setOutlineColor(sf::Color(202, 202, 202));

		string ai3 = "";
		sf::Text addin3;
		addin3.setFont(myfont);
		addin3.setFillColor(sf::Color::Black);
		addin3.setPosition(121, 170 + 27 * 3);
		addin3.setCharacterSize(15);

		textboxes[4].setSize(Vector2f(100, 25));
		textboxes[4].setPosition(175+5, 170 + 27 * 4);
		textboxes[4].setFillColor(sf::Color::White);
		textboxes[4].setOutlineThickness(1);
		textboxes[4].setOutlineColor(sf::Color(202, 202, 202));

		string ai4 = "";
		sf::Text addin4;
		addin4.setFont(myfont);
		addin4.setFillColor(sf::Color::Black);
		addin4.setPosition(181, 170 + 27 * 4);
		addin4.setCharacterSize(15);

		textboxes[5].setSize(Vector2f(100, 25));
		textboxes[5].setPosition(175, 170 + 27 * 5);
		textboxes[5].setFillColor(sf::Color::White);
		textboxes[5].setOutlineThickness(1);
		textboxes[5].setOutlineColor(sf::Color(202, 202, 202));


		string ai5 = "";
		sf::Text addin5;
		addin5.setFont(myfont);
		addin5.setFillColor(sf::Color::Black);
		addin5.setPosition(176, 170 + 27 * 5);
		addin5.setCharacterSize(15);

		textboxes[6].setSize(Vector2f(100, 25));
		textboxes[6].setPosition(120, 170 + 27 * 6);
		textboxes[6].setFillColor(sf::Color::White);
		textboxes[6].setOutlineThickness(1);
		textboxes[6].setOutlineColor(sf::Color(202, 202, 202));

		string ai6 = "";
		sf::Text addin6;
		addin6.setFont(myfont);
		addin6.setFillColor(sf::Color::Black);
		addin6.setPosition(121, 170 + 27 * 6);
		addin6.setCharacterSize(15);
		
		textboxes[7].setSize(Vector2f(100, 25));
		textboxes[7].setPosition(150, 170 + 27 * 7);
		textboxes[7].setFillColor(sf::Color::White);
		textboxes[7].setOutlineThickness(1);
		textboxes[7].setOutlineColor(sf::Color(202, 202, 202));


		string ai7 = "";
		sf::Text addin7;
		addin7.setFont(myfont);
		addin7.setFillColor(sf::Color::Black);
		addin7.setPosition(151, 170 + 27 * 7);
		addin7.setCharacterSize(15);

		textboxes[8].setSize(Vector2f(100, 25));
		textboxes[8].setPosition(150, 170 + 27 * 8);
		textboxes[8].setFillColor(sf::Color::White);
		textboxes[8].setOutlineThickness(1);
		textboxes[8].setOutlineColor(sf::Color(202, 202, 202));


		string ai8 = "";
		sf::Text addin8;
		addin8.setFont(myfont);
		addin8.setFillColor(sf::Color::Black);
		addin8.setPosition(151, 170 + 27 * 8);
		addin8.setCharacterSize(15);

		textboxes[9].setSize(Vector2f(100, 25));
		textboxes[9].setPosition(220, 170 + 27 * 9);
		textboxes[9].setFillColor(sf::Color::White);
		textboxes[9].setOutlineThickness(1);
		textboxes[9].setOutlineColor(sf::Color(202, 202, 202));


		string ai9 = "";
		sf::Text addin9;
		addin9.setFont(myfont);
		addin9.setFillColor(sf::Color::Black);
		addin9.setPosition(221, 170 + 27 * 9);
		addin9.setCharacterSize(15);

		sf::RectangleShape retbtn(sf::Vector2f(130, 60));
		retbtn.setPosition(840, 473);
		retbtn.setFillColor(sf::Color(98, 190, 96));
		retbtn.setOutlineThickness(2);
		retbtn.setOutlineColor(sf::Color::White);

		sf::Text rettxt;
		rettxt.setFont(myfont);
		rettxt.setString("Add");
		rettxt.setPosition(859, 482);
		rettxt.setCharacterSize(30);
		rettxt.setFillColor(sf::Color::White);


		Hotel hoteltmp;
		char tmpchoice;
		//cout << "Enter the new hotel's data:\n";
		/*cout << "ID: "; cin >> hoteltmp.ID;
		cout << "Name: ";                     cin.clear(); cin.sync(); getline(cin, hoteltmp.Name);
		cout << "Country: ";                     cin.clear(); cin.sync(); getline(cin, hoteltmp.Country);
		cout << "Location: ";                     cin.clear(); cin.sync(); getline(cin, hoteltmp.Location);
		cout << "Has Free Meals?: y/n "; cin >> tmpchoice; if (tmpchoice == 'y') {
			cout << "Has Free Breakfast?: y/n "; cin >> tmpchoice; if (tmpchoice == 'y') { hoteltmp.Free_Meals[0] = true; }
			else { hoteltmp.Free_Meals[0] = false; }
			cout << "Has Free Dinner?: y/n "; cin >> tmpchoice; if (tmpchoice == 'y') { hoteltmp.Free_Meals[1] = true; }
			else { hoteltmp.Free_Meals[1] = false; }
		}

		cout << "Number Of Stars: "; cin >> hoteltmp.Number_Of_Stars;
		hoteltmp.Rate = 5.0;

		cout << "Has Gym?:  y/n "; cin >> tmpchoice; if (tmpchoice == 'y') { hoteltmp.Has_Gym = true; }
		else { hoteltmp.Has_Gym = false; }
		cout << "Has Pool?:  y/n "; cin >> tmpchoice;  if (tmpchoice == 'y') { hoteltmp.Has_pool = true; }
		else { hoteltmp.Has_pool = false; }
		cout << "Number Of Rooms: "; cin >> hoteltmp.Number_Of_Rooms;
//		system("cls");
//		*/
		//for (int i = 0; i < hoteltmp.Number_Of_Rooms; i++)
//		{
////			/*cout << "Enter room " << i + 1 << "'s data:\n";
////*/
//			hoteltmp.roomList.Add_Room_Admin(s,u);
//		}
//
//
//		IDmap[hoteltmp.ID] = hoteltmp;



		int rect = 0;

		while (window.isOpen())
		{

			sf::Event event;
			while (window.pollEvent(event))
			{

				if (event.type == sf::Event::Closed)
					window.close();

				if (event.type == sf::Event::TextEntered)
				{
					if (rect == 1 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai0 += event.text.unicode;
						addin0.setString(ai0);
					}
					else if (rect == 1 && event.text.unicode == 8 && ai0.size()!=0)
					{
						ai0.pop_back();
						addin0.setString(ai0);
					}


					if (rect == 2 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai1 += event.text.unicode;
						addin1.setString(ai1);
					}
					else if (rect == 2 && event.text.unicode == 8 && ai1.size() != 0)
					{
						ai1.pop_back();
						addin1.setString(ai1);
					}


					if (rect == 3 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai2 += event.text.unicode;
						addin2.setString(ai2);
					}
					else if (rect == 3 && event.text.unicode == 8 && ai2.size() != 0)
					{
						ai2.pop_back();
						addin2.setString(ai2);
					}

					if (rect == 4 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai3 += event.text.unicode;
						addin3.setString(ai3);
					}
					else if (rect == 4 && event.text.unicode == 8 && ai3.size() != 0)
					{
						ai3.pop_back();
						addin3.setString(ai3);
					}

					if (rect == 5 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai4 += event.text.unicode;
						addin4.setString(ai4);
					}
					else if (rect == 5 && event.text.unicode == 8 && ai4.size() != 0)
					{
						ai4.pop_back();
						addin4.setString(ai4);
					}

					if (rect == 6 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai5 += event.text.unicode;
						addin5.setString(ai5);
					}
					else if (rect == 6 && event.text.unicode == 8 && ai5.size() != 0)
					{
						ai5.pop_back();
						addin5.setString(ai5);
					}

					if (rect == 7 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai6 += event.text.unicode;
						addin6.setString(ai6);
					}
					else if (rect == 7 && event.text.unicode == 8 && ai6.size() != 0)
					{
						ai6.pop_back();
						addin6.setString(ai6);
					}

					if (rect == 8 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai7 += event.text.unicode;
						addin7.setString(ai7);
					}
					else if (rect == 8 && event.text.unicode == 8 && ai7.size() != 0)
					{
						ai7.pop_back();
						addin7.setString(ai7);
					}

					if (rect == 9 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai8 += event.text.unicode;
						addin8.setString(ai8);
					}
					else if (rect == 9 && event.text.unicode == 8 && ai8.size() != 0)
					{
						ai8.pop_back();
						addin8.setString(ai8);
					}

					if (rect == 10 && event.text.unicode < 128 && event.text.unicode != 8) {
						ai9 += event.text.unicode;
						addin9.setString(ai9);
					}
					else if (rect == 10 && event.text.unicode == 8 && ai9.size() != 0)
					{
						ai9.pop_back();
						addin9.setString(ai9);
					}


				}
				if (event.type == sf::Event::MouseButtonPressed) {
					if (event.mouseButton.button == sf::Mouse::Left) {
						if (textboxes[0].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 1;
						
						}
						if (textboxes[1].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 2;

						}
						if (textboxes[2].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 3;

						}
						if (textboxes[3].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 4;

						}
						if (textboxes[4].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 5;

						}
						if (textboxes[5].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 6;

						}

						if (textboxes[6].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 7;

						}
						if (textboxes[7].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 8;

						}

						if (textboxes[8].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 9;

						}
						if (textboxes[9].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							rect = 10;

						}
						if (retbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							if (ai0 == "" || ai1 == "" || ai2 == "" || ai3 == "" || ai4 == "" || ai5 == "" || ai6 == "" || ai7 == "" || ai8 == "" || ai9 == "")
								continue;
							hoteltmp.ID = stoi(ai0);
							hoteltmp.Name = ai1;
							hoteltmp.Country = ai2;
							hoteltmp.Location = ai3;
							if (ai4 == "yes"){
								hoteltmp.Free_Meals[0] = true;
							}
							else
							{
								hoteltmp.Free_Meals[0] = false;

							}
							if (ai5 == "yes"){
								hoteltmp.Free_Meals[1] = true;
							}
							else
							{
								hoteltmp.Free_Meals[1] = false;

							}

							//hoteltmp.ID = sto(ai4);
							hoteltmp.Number_Of_Stars = stoi(ai6);
							hoteltmp.Rate = 5.0;

							if (ai7 == "yes"){
								hoteltmp.Has_Gym = true;
							}
							else
							{
								hoteltmp.Has_Gym = false;

							}
							if (ai8 == "yes"){
								hoteltmp.Has_pool = true;
							}
							else
							{
								hoteltmp.Has_pool = false;

							}
							hoteltmp.Number_Of_Rooms = stoi(ai9);
							window.close();
							for (int i = 0; i < hoteltmp.Number_Of_Rooms; i++)
							{
								hoteltmp.roomList.Add_Room_Admin(s, u);
							}
							IDmap[hoteltmp.ID] = hoteltmp;
							AdminWindow(s, u);

						}
					}


					}
				}
			
			
			window.clear();
			window.draw(background);
			window.draw(trivagologo);
			window.draw(HotelData);

			window.draw(retbtn);
			window.draw(rettxt);
			for (int i = 0; i < 10; i++)
				window.draw(textboxes[i]);
			window.draw(addin0);
			window.draw(addin1);
			window.draw(addin2);
			window.draw(addin3);
			window.draw(addin4);
			window.draw(addin5);
			window.draw(addin6);
			window.draw(addin7);
			window.draw(addin8);
			window.draw(addin9);

			window.display();
		}
	

}

void RoomList::Add_Room_Admin(searchInfo s, userInfo u)
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
	trivagologo.setPosition(300, 20);

	Text HotelData;

	string tmp0 = "Room Number :\nSingle? :\nHas TV? :\nHas Wifi? :\n";


	HotelData.setString(tmp0);
	HotelData.setCharacterSize(20);
	HotelData.setFont(myfont);
	HotelData.setFillColor(Color::Black);
	HotelData.setPosition(30, 170);
	/////////////////////////////
	RectangleShape textboxes[4];
	textboxes[0].setSize(Vector2f(100, 25));
	textboxes[0].setPosition(190, 170);
	textboxes[0].setFillColor(sf::Color::White);
	textboxes[0].setOutlineThickness(1);
	textboxes[0].setOutlineColor(sf::Color(202, 202, 202));


	string ai0 = "";
	sf::Text addin0;
	addin0.setFont(myfont);
	addin0.setFillColor(sf::Color::Black);
	addin0.setPosition(201, 170);
	addin0.setCharacterSize(15);


	textboxes[1].setSize(Vector2f(150, 25));
	textboxes[1].setPosition(150, 170 + 27);
	textboxes[1].setFillColor(sf::Color::White);
	textboxes[1].setOutlineThickness(1);
	textboxes[1].setOutlineColor(sf::Color(202, 202, 202));


	string ai1 = "";
	sf::Text addin1;
	addin1.setFont(myfont);
	addin1.setFillColor(sf::Color::Black);
	addin1.setPosition(151, 170 + 27);
	addin1.setCharacterSize(15);

	textboxes[2].setSize(Vector2f(100, 25));
	textboxes[2].setPosition(170, 170 + 27 * 2);
	textboxes[2].setFillColor(sf::Color::White);
	textboxes[2].setOutlineThickness(1);
	textboxes[2].setOutlineColor(sf::Color(202, 202, 202));


	string ai2 = "";
	sf::Text addin2;
	addin2.setFont(myfont);
	addin2.setFillColor(sf::Color::Black);
	addin2.setPosition(171, 170 + 27 * 2);
	addin2.setCharacterSize(15);

	textboxes[3].setSize(Vector2f(100, 25));
	textboxes[3].setPosition(170, 170 + 27 * 3);
	textboxes[3].setFillColor(sf::Color::White);
	textboxes[3].setOutlineThickness(1);
	textboxes[3].setOutlineColor(sf::Color(202, 202, 202));

	string ai3 = "";
	sf::Text addin3;
	addin3.setFont(myfont);
	addin3.setFillColor(sf::Color::Black);
	addin3.setPosition(171, 170 + 27 * 3);
	addin3.setCharacterSize(15);

	
	sf::RectangleShape retbtn(sf::Vector2f(130, 60));
	retbtn.setPosition(840, 473);
	retbtn.setFillColor(sf::Color(98, 190, 96));
	retbtn.setOutlineThickness(2);
	retbtn.setOutlineColor(sf::Color::White);

	sf::Text rettxt;
	rettxt.setFont(myfont);
	rettxt.setString("Add");
	rettxt.setPosition(859, 482);
	rettxt.setCharacterSize(30);
	rettxt.setFillColor(sf::Color::White);


	Room roomtmp;
	//char tmpchoice;
	/*cout << "Room Number: ";			 cin >> roomtmp.Room_Number;
	cout << "Is it Single?:  y/n "; cin >> tmpchoice;	 if (tmpchoice == 'y') { roomtmp.Singularity = true; }
	else { roomtmp.Singularity = false; }
	cout << "Has Wifi?:  y/n ";	cin >> tmpchoice;	 if (tmpchoice == 'y') { roomtmp.Has_Wifi = true; }
	else { roomtmp.Has_Wifi = false; }
	cout << "Has TV?:  y/n ";	cin >> tmpchoice;	     if (tmpchoice == 'y') { roomtmp.Has_TV = true; }
	else { roomtmp.Has_TV = false; }
	*/
	int rect = 0;

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::TextEntered)
			{
				if (rect == 1 && event.text.unicode < 128 && event.text.unicode != 8) {
					ai0 += event.text.unicode;
					addin0.setString(ai0);
				}
				else if (rect == 1 && event.text.unicode == 8 && ai0.size() != 0)
				{
					ai0.pop_back();
					addin0.setString(ai0);
				}


				if (rect == 2 && event.text.unicode < 128 && event.text.unicode != 8) {
					ai1 += event.text.unicode;
					addin1.setString(ai1);
				}
				else if (rect == 2 && event.text.unicode == 8 && ai1.size() != 0)
				{
					ai1.pop_back();
					addin1.setString(ai1);
				}


				if (rect == 3 && event.text.unicode < 128 && event.text.unicode != 8) {
					ai2 += event.text.unicode;
					addin2.setString(ai2);
				}
				else if (rect == 3 && event.text.unicode == 8 && ai2.size() != 0)
				{
					ai2.pop_back();
					addin2.setString(ai2);
				}

				if (rect == 4 && event.text.unicode < 128 && event.text.unicode != 8) {
					ai3 += event.text.unicode;
					addin3.setString(ai3);
				}
				else if (rect == 4 && event.text.unicode == 8 && ai3.size() != 0)
				{
					ai3.pop_back();
					addin3.setString(ai3);
				}
			}
			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (textboxes[0].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 1;

					}
					if (textboxes[1].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 2;

					}
					if (textboxes[2].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 3;

					}
					if (textboxes[3].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 4;

					}
					if (retbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						//	string tmp0 = "Room Number :\nSingle :\nHas TV? :\nHas Wifi? :\n";
						if (ai0 == "" || ai1 == "" || ai2 == "" || ai3 == "")
							continue;
							
						window.close();

						roomtmp.Room_Number = stoi(ai0);
						
						if (ai1 == "yes"){
							roomtmp.Singularity = true;
						}
						else
						{
							roomtmp.Singularity = false;

						}
						if (ai2 == "yes"){
							roomtmp.Has_TV = true;
						}
						else
						{
							roomtmp.Has_TV = false;

						}

						if (ai3 == "yes"){
							roomtmp.Has_Wifi = true;
						}
						else
						{
							roomtmp.Has_Wifi = false;

						}
						//hoteltmp.ID = sto(ai4);
						for (int i = 0; i < 12; i++)
						{
							for (int j = 0; j < 30; j++) {
								roomtmp.Calender[i][j] = false;
							}

						}
						Rooms[roomtmp.Room_Number] = roomtmp;

					}
				}


			}
		}


		window.clear();
		window.draw(background);
		window.draw(trivagologo);
		window.draw(HotelData);

		window.draw(retbtn);
		window.draw(rettxt);
		for (int i = 0; i < 4; i++)
			window.draw(textboxes[i]);
		window.draw(addin0);
		window.draw(addin1);
		window.draw(addin2);
		window.draw(addin3);
		window.display();
	}


}

void HotelList::filter(string k, int a, string n,searchInfo s, userInfo u) {

	unordered_map<int, Hotel >::iterator it;
	it = IDmap.begin();

	int c;

	double r;

	int ss;

	cout << "Enter your choice" << endl;

	cout << "(1) to search by rate" << endl;

	cout << "(2) to search by stars" << endl;

	cout << "Enter your choice : ";

	cin >> c;

	system("cls");

	if (c == 1) {

		cout << "Enter the rate you want to search for : ";
		cin >> r;

		cout << endl;

		int num = 0;
		for (it = IDmap.begin(); it != IDmap.end(); it++) {
			if (it->second.Rate >= r && it->second.Country == k) {
				num++;

				cout << it->second.Name << ' ' << "has" << ' ' << it->second.Rate << ' ' << "rating" << endl;

				cout << "the hotel ID:" << " " << it->second.ID << endl;


			}

		}
		if (num == 0)
		{
			cout << "no hotel with" << " " << r << " " << "rating" << endl;
		}
		else {
			cout << "do you want to dispaly the rest of information (y/n) : ";

			char choice;

			cin >> choice;
			while (true)
			{

				if (choice == 'y') {
					system("cls");
					int id;

					cout << "enter th ID of the hotel you want" << endl;

					cin >> id;
					if (IDmap.find(id) == IDmap.end()) {
						cout << "ID Not Valid " << endl;
						cout << "Please enter th ID again";
						continue;
					}

					else {
						cout << "1.Country : " << IDmap[id].Country << endl;

						cout << "2.Location : " << IDmap[id].Location << endl;

						cout << "3.Rating : " << IDmap[id].Rate << endl;

						if (IDmap[id].Free_Meals[0] != false || IDmap[id].Free_Meals[1] != false)

							cout << "4.Free meals : " << "has free meals" << endl;

						else

							cout << "4.Free meals : " << "has no free meals" << endl;

						if (IDmap[id].Has_pool == true)

							cout << "5.Pool : " << "has Pool" << endl;

						else

							cout << "5.Pool : " << "has no Pool" << endl;

						if (IDmap[id].Has_Gym == true)

							cout << "6.Gym : " << "has Gym" << endl;

						else

							cout << "6.Gym : " << "has no Gym" << endl;

						if (IDmap[id].Available == true)

							cout << "7.Availability : " << "the hotel is available" << endl;

						else

							cout << "7.availability : " << "the hotel is available" << endl;

				//		show_comments(id,s,u);

						if (a == 2) {
							cout << "do you want to reserve ?(y/n)";
							char ss;
							cin >> ss;
							if (ss == 'y') {
							//	reserve(id,s,u);
							}
							cout << "Do You want to Add Comments?(y/n) ";
							char ans;
							cin >> ans;
							if (ans == 'y') {
						//		Addcomments(id, n,s,u);
							}

							cout << "Do You want to Rate A Hotel ?(y/n) ";
							char ans1;
							cin >> ans1;
							if (ans1 == 'y') {
						//		rating(id,s,u);
							}
						}
					}
				}
				cout << "Is there any other hotel you want to know it's information?(y/n) ";

				cin >> choice;

				if (choice == 'y') {

					continue;

				}

				else

					break;

			}

		}
	}

	if (c == 2) {

		cout << "Enter the number of stars : ";

		cin >> ss;
		int num = 0;
		for (it = IDmap.begin(); it != IDmap.end(); it++) {

			if (it->second.Number_Of_Stars >= ss && it->second.Country == k) {
				num++;

				cout << it->second.Name << ' ' << "has" << ' ' << it->second.Number_Of_Stars << ' ' << "stars" << endl;

				cout << "the hotel ID:" << it->second.ID << endl;


			}

		}
		if (num == 0)
		{
			cout << "no hotel with" << " " << ss << " " << "stars" << endl;
		}


		else {

			cout << "do you want to dispaly the rest of information (y/n) : ";

			char choice;

			cin >> choice;

			while (true) {
				if (choice == 'y') {

					system("cls");

					int id;

					cout << "enter th ID of the hotel you want" << endl;

					cin >> id;
					if (IDmap.find(id) == IDmap.end()) {
						cout << "ID Not Valid " << endl;
						cout << "Please enter th ID again";
						continue;
					}
					else {
						cout << "1.Country : " << IDmap[id].Country << endl;

						cout << "2.Location : " << IDmap[id].Location << endl;

						if (IDmap[id].Free_Meals[0] != false || IDmap[id].Free_Meals[1] != false)

							cout << "3.Free meals : " << "has free meals" << endl;

						else

							cout << "3.Free meals : " << "has no free meals" << endl;

						if (IDmap[id].Has_pool == true)

							cout << "4.Pool : " << "has Pool" << endl;

						else

							cout << "4.Pool : " << "has no Pool" << endl;

						if (IDmap[id].Has_Gym == true)

							cout << "5.Gym : " << "has Gym" << endl;

						else

							cout << "5.Gym : " << "has no Gym" << endl;

						if (IDmap[id].Available == true)

							cout << "6.Availability : " << "the hotel is available" << endl;

						else

							cout << "6.availability : " << "the hotel is available" << endl;

					}
				}

				cout << "there is any other hotel you want to know it's information(y/n)" << endl;

				cin >> choice;

				if (choice == 'y') {
					continue;

				}

				else

					break;
			}

		}
	}

	if (u.ad){
		AdminWindow(s, u);
	}
	else
		MainWindow(s, u);

}

void HotelList::Delete_hotel(searchInfo s, userInfo u)
{
	cout << "Currently existing hotels \n";
	showcons();
	int ID;
	cout << "Enter Hotel's ID \n";
	cin >> ID;
	IDmap.erase(ID);
	Number_of_Hotels--;
	
	if (u.ad){
		AdminWindow(s, u);
	}
	else
	MainWindow(s, u);
}

void HotelList::Display_hotels(searchInfo s, userInfo u)
{
	showcons();
	char z;
	int ID;
	z = 'y';
	while (z == 'y')
	{
		cout << "If you want to display the information of any hotel Enter its ID \n";
		cin >> ID;
		system("cls");
		if (IDmap.find(ID) != IDmap.end())
		{
			cout << "1.Hotel name : " << IDmap[ID].Name << endl;
			cout << "2.Stars : " << IDmap[ID].Number_Of_Stars << endl;
			cout << "3.Country : " << IDmap[ID].Country << endl;
			cout << "4.Location : " << IDmap[ID].Location << endl;
			cout << "5.Free meals : Breakfast : "; if (IDmap[ID].Free_Meals[0]) cout << "YES, "; else cout << "NO, "; cout << "Dinner: "; if (IDmap[ID].Free_Meals[1])cout << "YES,"; else cout << "NO " << endl;
			cout << "6.Rating : " << IDmap[ID].Rate << endl;
			if (IDmap[ID].Has_pool) { cout << "7.Pool : Has pool " << endl; }
			else { cout << "7.Pool : Doesn't have pool " << endl; }
			if (IDmap[ID].Has_Gym) { cout << "8.Gym : Has gym " << endl; }
			else { cout << "8.Gym : Doesn't have gym " << endl; }
			if (IDmap[ID].Available) { cout << "9.Availability now : Available " << endl; }
			else { cout << "9.Availability : Isn't available now" << endl; }
			cout << endl;
		//	show_comments(ID,s,u);
		}
		else
			cout << "Unavailable \n";
		cout << "If you want to display the information of another Hotel press y or Y \n";
		cin >> z;
		if (z == 'y' || z == 'Y')
			continue;
		else
			break;
	}

	if (u.ad){
		AdminWindow(s, u);
	}
	else
		MainWindow(s, u);
}

void RoomList::Update_Room(searchInfo s, userInfo u)
{
	cout << endl;
	int id;
	cout << "Enter The number of the Room you want to modify : ";
	cin >> id;
	cout << endl;
	int counter = 0;
	bool c = true;
	if (Rooms.find(id) == Rooms.end())
	{
		cout << "ID not valid" << endl;
		c = false;
	}
	system("cls");
	while (c)
	{
		if (Rooms[id].Has_Wifi) { cout << "1.Wifi : " << "Has Wifi" << endl; }
		else { cout << "1.Wifi : " << "Doesn't have Wifi" << endl; }
		if (Rooms[id].Has_TV) { cout << "2.Tv : " << "Has Tv" << endl; }
		else { cout << "2.Tv : " << "Doesn't have Tv" << endl; }
		if (Rooms[id].Singularity) { cout << "3.Single or double : " << "Single" << endl; }
		else { cout << "3.Single or double : " << "Double" << endl; }
		cout << endl;
		cout << "What do you want to modify?" << endl;
		int choose;
		cin >> choose;
		system("cls");

		switch (choose)
		{
		case 1:
		{
				  cout << "Modify Wifi availability :" << endl;
				  if (Rooms[id].Has_Wifi)
				  {
					  cout << "Room Wifi deleted " << endl;
					  Rooms[id].Has_Wifi = false;
				  }
				  else
				  {
					  cout << "Wifi Added !" << endl;
					  Rooms[id].Has_Wifi = true;
				  }
				  break;
		}
		case 2:
		{
				  cout << "Modify Tv availability :" << endl;
				  if (Rooms[id].Has_TV)
				  {
					  cout << "Room Tv deleted " << endl;
					  Rooms[id].Has_TV = false;
				  }
				  else
				  {
					  cout << "Tv Added !" << endl;
					  Rooms[id].Has_TV = true;
				  }
				  break;
		}
		case 3:
		{
				  cout << "Modify Singularity :" << endl;
				  if (Rooms[id].Singularity)
				  {
					  cout << "Room is now double !" << endl;
					  Rooms[id].Singularity = false;
				  }
				  else
				  {
					  cout << "Room is now single !" << endl;
					  Rooms[id].Singularity = true;
				  }
				  break;
		}
		default:
		{
				   break;
		}
		}
		char ans;
		cout << "Do you want to modify any other thing in this room ?" << endl;
		cin >> ans;
		system("cls");
		if (ans == 'n' || ans == 'N')
			break;
	}

}

void HotelList::show(searchInfo s, userInfo u)
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
	trivagologo.setPosition(300, 40);

	vector<RectangleShape> avhotels;
	vector<pair<Text, Text>> idsnames;
	vector<int> ids;
	unordered_map<int, Hotel>::iterator it;

	int counth = 0;

	int ancount=0;

	for (it = IDmap.begin(); it != IDmap.end(); it++) {


		if (80 * (counth + 2) < 564 - 20){
			RectangleShape emsh(Vector2f(300, 60));
			emsh.setPosition(20, 80 * (counth + 2));
			emsh.setFillColor(Color::White);
			emsh.setOutlineThickness(1);
			emsh.setOutlineColor(Color(202, 202, 202));
			avhotels.push_back(emsh);
			Text n;
			n.setString(it->second.Name);
			n.setCharacterSize(20);
			n.setFont(myfont);
			n.setFillColor(Color::Black);
			n.setPosition(20, 80 * (counth + 2));
			Text i;
			i.setString(to_string(it->second.ID));
			i.setCharacterSize(20);
			i.setFont(myfont);
			i.setFillColor(Color::Black);
			i.setPosition(20, 80 * (counth + 2.4));
			idsnames.push_back(make_pair(i, n));
			ids.push_back(it->first);
			counth++;
		}
		else {
			RectangleShape emsh(Vector2f(300, 60));
			emsh.setPosition(20+320, 80 * (ancount + 2));
			emsh.setFillColor(Color::White);
			emsh.setOutlineThickness(1);
			emsh.setOutlineColor(Color(202, 202, 202));
			avhotels.push_back(emsh);
			Text n;
			n.setString(it->second.Name);
			n.setCharacterSize(20);
			n.setFont(myfont);
			n.setFillColor(Color::Black);
			n.setPosition(20+320, 80 * (ancount + 2));
			Text i;
			i.setString(to_string(it->second.ID));
			i.setCharacterSize(20);
			i.setFont(myfont);
			i.setFillColor(Color::Black);
			i.setPosition(20+320, 80 * (ancount + 2.4));
			idsnames.push_back(make_pair(i, n));
			ids.push_back(it->first);
			ancount++;
		}
		

	}



	sf::RectangleShape retbtn(sf::Vector2f(130, 60));
	retbtn.setPosition(640, 473);
	retbtn.setFillColor(sf::Color(98, 190, 96));
	retbtn.setOutlineThickness(2);
	retbtn.setOutlineColor(sf::Color::White);

	sf::Text rettxt;
	rettxt.setFont(myfont);
	rettxt.setString("Return");
	rettxt.setPosition(654, 482);
	rettxt.setCharacterSize(30);
	rettxt.setFillColor(sf::Color::White);

	while (window.isOpen()){
		Event event;
		while (window.pollEvent(event)){

			if (event.type == sf::Event::Closed)
				window.close();


			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (retbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						window.close();

						AdminWindow(s, u);

					}
					for (int i = 0; i < avhotels.size(); i++)
					{
						if (avhotels[i].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							window.close();

							displaySpeceficHotel(ids[i],"show" ,  u.name, s, u);

						}
					}

				}
			}
		}

		window.clear();
		window.draw(background);
		window.draw(trivagologo);
		
		
			for (int i = 0; i < avhotels.size(); i++)
			{
				window.draw(avhotels[i]);

			}
			for (int i = 0; i < idsnames.size(); i++)
			{
				window.draw(idsnames[i].first);
				window.draw(idsnames[i].second);

			}
	
		window.draw(retbtn);
		window.draw(rettxt);

		window.display();
	}

}

void HotelList::Update_hotel(searchInfo s, userInfo u)
{
	showcons();

	int id;
	cout << endl << "Enter The ID of the hotel you want to modify : ";
	cin >> id;
	cout << endl;
	bool c = true;
	if (IDmap.find(id) == IDmap.end())
	{
		cout << "ID not valid " << endl;
		c = false;
	}
	while (c)
	{
		system("cls");
		cout << "1.Hotel name : " << IDmap[id].Name << endl;
		cout << "2.Stars : " << IDmap[id].Number_Of_Stars << endl;
		cout << "3.Country : " << IDmap[id].Country << endl;
		cout << "4.Location : " << IDmap[id].Location << endl;
		cout << "5.Free meals : Breakfast : "; if (IDmap[id].Free_Meals[0]) cout << "YES, "; else cout << "NO, "; cout << "Dinner: "; if (IDmap[id].Free_Meals[1])cout << "YES," << endl; else cout << "NO " << endl;
		if (IDmap[id].Has_pool) { cout << "7.Pool : Has pool " << endl; }
		else { cout << "6.Pool : Doesn't have pool " << endl; }
		if (IDmap[id].Has_Gym) { cout << "8.Gym : Has gym " << endl; }
		else { cout << "7.Gym : Doesn't have gym " << endl; }
		if (IDmap[id].Available) { cout << "9.Availability now : Available " << endl; }
		else { cout << "8.Availability : Isn't available now" << endl; }
		cout << "9.Rooms : " << IDmap[id].Number_Of_Rooms << " rooms" << endl;
		cout << endl;
		cout << "What do you want to modify?" << endl;
		int choice;
		cin >> choice;
		system("cls");


		switch (choice)
		{
		case 1:
		{
				  string x;
				  cout << "Modify the name: ";
				                      cin.clear(); cin.sync(); getline(cin, x);

				  IDmap[id].Name = x;

				  break;
		}
		case 2:
		{
				  int x;
				  cout << "Modify the number of stars: ";
				  cin >> x;
				  IDmap[id].Number_Of_Stars = x;
				  break;
		}
		case 3:
		{
				  string x;
				  cout << "Modify the country: ";
				                     
				  cin.clear();
				  cin.sync();
				  getline(cin, x);
				  IDmap[id].Country = x;
				  break;
		}
		case 4:
		{
				  string x;
				  cout << "Modify the location : ";
				                     
				  cin.clear();
				  cin.sync();
				  getline(cin, x);
				  IDmap[id].Location = x;
				  break;
		}
		case 5:
		{
				  char x, y;
				  cout << "Modify Free meals : " << endl;
				  cout << "Does it have breakfast ?(y/n) : ";
				  cin >> x;
				  if (x == 'y')
				  {
					  IDmap[id].Free_Meals[0] = true;
				  }
				  else
				  {
					  IDmap[id].Free_Meals[0] = false;
				  }

				  cout << "Does it have dinner ?(y/n) : ";
				  cin >> y;
				  if (y == 'y')
				  {
					  IDmap[id].Free_Meals[1] = true;
				  }
				  else
				  {
					  IDmap[id].Free_Meals[1] = false;
				  }
				  break;
		}
		case 6:
		{
				  cout << "Modify pool availability : ";
				  if (IDmap[id].Has_pool == true)
					  IDmap[id].Has_pool = false;
				  else
					  IDmap[id].Has_pool = true;
				  break;
		}
		case 7:
		{
				  cout << "Modify gym availability : ";
				  if (IDmap[id].Has_Gym == true)
					  IDmap[id].Has_Gym = false;
				  else
					  IDmap[id].Has_Gym = true;
				  break;
		}
		case 8:
		{
				  cout << "Modify hotel availability : ";
				  if (IDmap[id].Available == true)
					  IDmap[id].Available = false;
				  else
					  IDmap[id].Available = true;
				  break;
		}
		case 9:
		{
				  if (IDmap[id].roomList.Rooms.size() == 0)
				  {
					  cout << "No rooms in this hotel" << endl;
					  system("pause");
					  break;
				  }
				  else
				  {
					  cout << "Current rooms : " << endl;
					  unordered_map<int, Room>::iterator i;
					  for (i = IDmap[id].roomList.Rooms.begin(); i != IDmap[id].roomList.Rooms.end(); i++)
					  {
						  cout << "Room number : " << i->second.Room_Number << endl;
					  }
					  IDmap[id].roomList.Update_Room(s,u);
					  break;
				  }
		}
		default:
		{
				   cout << "Choise not valid" << endl;
				   break;
		}
		}
		system("cls");

		cout << "1.Hotel name : " << IDmap[id].Name << endl;
		cout << "2.Stars : " << IDmap[id].Number_Of_Stars << endl;
		cout << "3.Country : " << IDmap[id].Country << endl;
		cout << "4.Location : " << IDmap[id].Location << endl;
		cout << "5.Free meals : Breakfast : "; if (IDmap[id].Free_Meals[0]) cout << "YES, "; else cout << "NO, "; cout << "Dinner: "; if (IDmap[id].Free_Meals[1])cout << "YES," << endl; else cout << "NO " << endl;
		if (IDmap[id].Has_pool) { cout << "7.Pool : Has pool " << endl; }
		else { cout << "6.Pool : Doesn't have pool " << endl; }
		if (IDmap[id].Has_Gym) { cout << "8.Gym : Has gym " << endl; }
		else { cout << "7.Gym : Doesn't have gym " << endl; }
		if (IDmap[id].Available) { cout << "9.Availability now : Available " << endl; }
		else { cout << "8.Availability : Isn't available now" << endl; }
		cout << endl;

		char y;
		cout << "Do you want to modify any thing else " << endl;
		cin >> y;
		system("cls");
		if (y == 'n' || y == 'N')
			break;
	}

	if (u.ad){
		AdminWindow(s, u);
	}
	else
		MainWindow(s, u);
}

void HotelList::reserve(int id , int no,searchInfo s, userInfo u)
{

	
	//	int no;
	//	cout << "Enter the room number you would like to reserve : "; cin >> no;
		if (s.rdate[0][1] == s.rdate[1][1])
		{
			for (int i = s.rdate[0][1] - 1; i <= s.rdate[1][1] - 1; i++)
			{
				for (int j = s.rdate[0][0] - 1; j <= s.rdate[1][0] - 1; j++)
				{
					IDmap[id].roomList.Rooms[no].Calender[i][j] = true;
				}
			}
		}
		else if (s.rdate[1][1] - s.rdate[0][1] == 1)
		{
			for (int i = s.rdate[0][0] - 1; i <= 30; i++)
			{
				IDmap[id].roomList.Rooms[no].Calender[s.rdate[0][1] - 1][i] = true;
			}
			for (int i = 0; i <= s.rdate[1][0]; i++)
			{
				IDmap[id].roomList.Rooms[no].Calender[s.rdate[1][1] - 1][i] = true;
			}
		}
		else
		{
			for (int i = s.rdate[0][0] - 1; i < 30; i++)
			{
				IDmap[id].roomList.Rooms[no].Calender[s.rdate[0][1] - 1][i] = true;
			}
			for (int i = s.rdate[0][1]; i <= s.rdate[1][1] - 2; i++)
			{
				for (int j = 0; j < 30; j++)
				{
					IDmap[id].roomList.Rooms[no].Calender[i][j] = true;
				}
			}
			for (int i = 0; i <= s.rdate[1][0]; i++)
			{
				IDmap[id].roomList.Rooms[no].Calender[s.rdate[1][1] - 1][i] = true;
			}
		}


		bool av = true;
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 30; j++)
			{
				if (IDmap[id].roomList.Rooms[no].Calender[i][j] == false)
				{
					av = false;
					break;
				}
			}
			if (av == false)
				break;
		}

		if (av == true)
		{
			IDmap[id].roomList.Rooms[no].available = false;
		}

		int tmpcount = 0;
		for (unordered_map<int, Room>::iterator it = IDmap[id].roomList.Rooms.begin(); it != IDmap[id].roomList.Rooms.end(); it++)
		{

			if (it->second.available)
			{
				tmpcount++;
			}

		}
		if (tmpcount == 0)
		{
			IDmap[id].Available = false;
		}
	


}

void HotelList::search(string c, int a, string n, searchInfo s, userInfo u) {


	cout << "Enter the Information you want to search about" << endl;
	cout << "Press (1) to search for Hotels Contains Pool. " << endl <<
		"Press (2) to search for Hotels Contians Gym. " << endl <<
		"Press (3) to search for Hotels Contains Free_meals. " << endl <<
		"Press (4) to search for the three Queries. " << endl <<
		"Enter your Choice : "; int choice; cin >> choice;

	system("cls");
	unordered_map<int, Hotel >::iterator it;
	bool p = false;

	for (it = IDmap.begin(); it != IDmap.end(); it++) {

		if (choice == 1) {
			if (it->second.Has_pool == true && it->second.Country == c) {
				cout << it->second.Name << " Has Pool " << endl;
				cout << " It's ID is " << it->second.ID << endl;
				p = true;

			}
		}
		else if (choice == 2) {

			if (it->second.Has_Gym == true && it->second.Country == c) {
				cout << it->second.Name << " Has Gym" << endl;
				cout << " It's ID is " << it->first << endl;
				p = true;
			}
		}

		else if (choice == 3) {

			if (it->second.Free_Meals[0] == true || it->second.Free_Meals[1] == true) {
				if (it->second.Country == c) {

					cout << it->second.Name << " Has Free_Meals " << endl;

					cout << " It's ID is " << it->first << endl;
					p = true;
				}
			}
		}
		else if (choice == 4) {
			if (it->second.Has_Gym == true && it->second.Has_pool == true &&
				(it->second.Free_Meals[0] || it->second.Free_Meals[1])
				&& it->second.Country == c) {
				cout << it->second.Name << " Has The Three Queries. " << endl;
				cout << " It's ID is " << it->first << endl;
				p = true;
			}
		}
	}


	if (p == true)
	{
		cout << "Do You Want To See Hotel Info ? (y/n) : "; char x; cin >> x;
		system("cls");

		if (x == 'y') {

			while (true) {
				cout << "Enter the ID of the Hotel You'd like to See it's Info : ";	int id;
				cin >> id;
				if (IDmap.find(id) == IDmap.end()) {
					cout << "ID Not Valid " << endl;
					cout << "Please Re-enter ID";
					continue;
				}

				else {
					cout << "1.Hotel name :" << IDmap[id].Name << endl;

					cout << "2.Stars : " << IDmap[id].Number_Of_Stars << endl;

					cout << "3.Country : " << IDmap[id].Country << endl;

					cout << "4.Location : " << IDmap[id].Location << endl;

					cout << "5.Free meals : Breakfast : "; if (IDmap[id].Free_Meals[0])
						cout << "YES, "; else cout << "NO, "; cout << "Dinner: "; if (IDmap[id].Free_Meals[1])
						cout << "YES," << endl; else cout << "NO " << endl;

					cout << "6.Rating : " << IDmap[id].Rate << endl;

					if (IDmap[id].Has_pool) { cout << "7.Pool : Has pool " << endl; }

					else { cout << "7.Pool : Doesn't have pool " << endl; }

					if (IDmap[id].Has_Gym) { cout << "8.Gym : Has gym " << endl; }

					else { cout << "8.Gym : Doesn't have gym " << endl; }

				//	show_comments(id,s,u);


					cout << endl;

				
				}

				cout << "If there are any other Hotels You'd Like to see (y/n) : "; char ANS;
				cin >> ANS;
				if (ANS == 'n' || ANS == 'N')
					break;
				else {

					system("cls");
					continue;

				}
			}

		}

	}
	else
		cout << "there is no Hotels in this Area with this Query  " << endl;

	if (u.ad){
		AdminWindow(s, u);
	}
	else
		MainWindow(s, u);
}

void HotelList::showcons()
{
	unordered_map<int, Hotel>::iterator tmp;
	tmp = IDmap.begin();
	while (tmp != IDmap.end())
	{
		cout << tmp->second.Name << "   ID :" << tmp->second.ID << endl;
		tmp++;
	}

}
void HotelList::displaySpeceficHotel(int id, string fn ,string n, searchInfo s, userInfo u){
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
	trivagologo.setPosition(300, 20);

	Text HotelData[10];

	string tmp0 = "ID : ";
	for (int i = 0; i < to_string(id).size(); i++)
	{
		tmp0.push_back(to_string(id)[i]);
	}

	HotelData[0].setString(tmp0);
	HotelData[0].setCharacterSize(20);
	HotelData[0].setFont(myfont);
	HotelData[0].setFillColor(Color::Black);
	HotelData[0].setPosition(30, 40 * (2));
	/////////////////////////////

	string tmp1 = "Name : ";
	for (int i = 0; i < IDmap[id].Name.size(); i++)
	{
		tmp1.push_back(IDmap[id].Name[i]);
	}
	HotelData[1].setString(tmp1);
	HotelData[1].setCharacterSize(20);
	HotelData[1].setFont(myfont);
	HotelData[1].setFillColor(Color::Black);
	HotelData[1].setPosition(30, 40 * (3));
	///////////////////////////

	string tmp2 = "Country : ";
	for (int i = 0; i < IDmap[id].Country.size(); i++)
	{
		tmp2.push_back(IDmap[id].Country[i]);
	}
	HotelData[2].setString(tmp2);
	HotelData[2].setCharacterSize(20);
	HotelData[2].setFont(myfont);
	HotelData[2].setFillColor(Color::Black);
	HotelData[2].setPosition(30, 40 * 4);
	///////////////////////////////

	string tmp3 = "Location : ";
	for (int i = 0; i < IDmap[id].Location.size(); i++)
	{
		tmp3.push_back(IDmap[id].Location[i]);
	}
	HotelData[3].setString(tmp3);
	HotelData[3].setCharacterSize(20);
	HotelData[3].setFont(myfont);
	HotelData[3].setFillColor(Color::Black);
	HotelData[3].setPosition(30, 40 * (5));

	///////////////////////////
	if (IDmap[id].Free_Meals[0] || IDmap[id].Free_Meals[1]){
		HotelData[4].setString("Free Meals Available");
	}
	else{
		HotelData[4].setString("Free Meals Unavailable ");
	}
	HotelData[4].setCharacterSize(20);
	HotelData[4].setFont(myfont);
	HotelData[4].setFillColor(Color::Black);
	HotelData[4].setPosition(30, 40 * (6));
	////////////////////////////

	if (IDmap[id].Has_pool){
		HotelData[5].setString("Pool Available");
	}
	else{
		HotelData[5].setString("Pool Unavailable ");
	}
	HotelData[5].setCharacterSize(20);
	HotelData[5].setFont(myfont);
	HotelData[5].setFillColor(Color::Black);
	HotelData[5].setPosition(30, 40 * (7));
	/////////////////////////

	if (IDmap[id].Has_Gym){
		HotelData[6].setString("Gym Available");
	}
	else{
		HotelData[6].setString("Gym Unavailable ");
	}
	HotelData[6].setCharacterSize(20);
	HotelData[6].setFont(myfont);
	HotelData[6].setFillColor(Color::Black);
	HotelData[6].setPosition(30, 40 * (8));
	//////////////////////////////////

	string tmp7 = "Number Of Stars : ";
	tmp7.push_back(to_string(IDmap[id].Number_Of_Stars)[0]);
	HotelData[7].setString(tmp7);
	HotelData[7].setCharacterSize(20);
	HotelData[7].setFont(myfont);
	HotelData[7].setFillColor(Color::Black);
	HotelData[7].setPosition(30, 40 * (9));
	//////////////////////////////

	string tmp8 = "Rating : ";
	for (int i = 0; i < 4; i++)
	{
		tmp8.push_back(to_string(IDmap[id].Rate)[i]);
	}
	HotelData[8].setString(tmp8);
	HotelData[8].setCharacterSize(20);
	HotelData[8].setFont(myfont);
	HotelData[8].setFillColor(Color::Black);
	HotelData[8].setPosition(30, 40 * (10));
	////////////////////////////

	string tmp9 = "Comments : \n";
	for (int i = 0; i < IDmap[id].vcomments.size(); i++)
	{
		for (int j = 0; j < IDmap[id].vcomments[i].first.size(); j++)
		{
			tmp9.push_back(IDmap[id].vcomments[i].first[j]);
		}
		tmp9.push_back(' ');
		tmp9.push_back(':');
		tmp9.push_back(' ');
		for (int j = 0; j < IDmap[id].vcomments[i].second.size(); j++){

			tmp9.push_back(IDmap[id].vcomments[i].second[j]);
		}
		tmp9.push_back('\n');
	}
	HotelData[9].setString(tmp9);
	HotelData[9].setCharacterSize(15);
	HotelData[9].setFont(myfont);
	HotelData[9].setFillColor(Color::Black);
	HotelData[9].setPosition(30, 40 * (11));
	///////////////////////////////
Texture tmppic;
	tmppic.loadFromFile("room.jpg");
	IDmap[id].roomimg[0].setTexture(tmppic);
	Texture tmppic2;

	tmppic2.loadFromFile("room2.jpg");
	IDmap[id].roomimg[1].setTexture(tmppic2);

	IDmap[id].roomimg[0].setPosition(400, 140);
	IDmap[id].roomimg[1].setPosition(680, 140);

	sf::RectangleShape retbtn(sf::Vector2f(130, 60));
	retbtn.setPosition(840, 473);
	retbtn.setFillColor(sf::Color(98, 190, 96));
	retbtn.setOutlineThickness(2);
	retbtn.setOutlineColor(sf::Color::White);

	sf::Text rettxt;
	rettxt.setFont(myfont);
	rettxt.setString("Return");
	rettxt.setPosition(859, 482);
	rettxt.setCharacterSize(30);
	rettxt.setFillColor(sf::Color::White);

	sf::RectangleShape avhbtn(sf::Vector2f(210+50, 60));
	avhbtn.setPosition(700-100-50, 473);
	avhbtn.setFillColor(sf::Color(98, 190, 96));
	avhbtn.setOutlineThickness(2);
	avhbtn.setOutlineColor(sf::Color::White);

	sf::Text avhtxt;
	avhtxt.setFont(myfont);
	avhtxt.setString("Available Rooms");
	avhtxt.setPosition(710-100-50, 482);
	avhtxt.setCharacterSize(30);
	avhtxt.setFillColor(sf::Color::White);
	int rect = 0;

	sf::RectangleShape addrsh(sf::Vector2f(100, 30));
	addrsh.setPosition(520, 373);
	addrsh.setFillColor(sf::Color::White);
	addrsh.setOutlineThickness(1);
	addrsh.setOutlineColor(sf::Color(202, 202, 202));

	string rt = "", cm="";
	sf::Text addrin;
	addrin.setFont(myfont);
	addrin.setFillColor(sf::Color::Black);
	addrin.setPosition(520, 373);
	addrin.setCharacterSize(15);

	sf::RectangleShape addcsh(sf::Vector2f(200, 30));
	addcsh.setPosition(520, 373+50);
	addcsh.setFillColor(sf::Color::White);
	addcsh.setOutlineThickness(1);
	addcsh.setOutlineColor(sf::Color(202, 202, 202));

	sf::Text addcin;
	addcin.setFont(myfont);
	addcin.setFillColor(sf::Color::Black);
	addcin.setPosition(520, 373+50);
	addcin.setCharacterSize(15);



	sf::RectangleShape addrbtn(sf::Vector2f(100, 30));
	addrbtn.setPosition(500+60*3, 373);
	addrbtn.setFillColor(sf::Color(98, 190, 96));
	addrbtn.setOutlineThickness(2);
	addrbtn.setOutlineColor(sf::Color::White);

	sf::Text addrtxt;
	addrtxt.setFont(myfont);
	addrtxt.setString("Add Rate");
	addrtxt.setPosition(510+60*3, 382-5);
	addrtxt.setCharacterSize(20);


	sf::RectangleShape addcbtn(sf::Vector2f(210-50, 30));
	addcbtn.setPosition(700+50, 373+50);
	addcbtn.setFillColor(sf::Color(98, 190, 96));
	addcbtn.setOutlineThickness(2);
	addcbtn.setOutlineColor(sf::Color::White);

	sf::Text addctxt;
	addctxt.setFont(myfont);
	addctxt.setString("Add Comment");
	addctxt.setPosition(710+50, 382+50-5);
	addctxt.setCharacterSize(20);
	addctxt.setFillColor(sf::Color::White);
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (retbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						window.close();
						if (fn == "show"){
							show(s, u);
						}
						if (fn[0] == 'd'){
							MainWindow(s, u);
						}
						
						if (fn == "srchh"){
							if (n == "Admin")
								searchhotel(IDmap[id].Country, 1, n, s, u);
							else
								searchhotel(IDmap[id].Country, 2, n, s, u);
						}
						
					}
					if (avhbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						window.close();
						searchroom(id, s, u);

					}
					if (addrsh.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 1;
					}
					if (addcsh.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 2;
					}

					if (addrbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						if (stof(rt) < 0 || stof(rt) > 10){
							continue;
						}
						if (rt != "" ){
								IDmap[id].Rate = (IDmap[id].Rate + stof(rt)) / 2;
								window.close();

							displaySpeceficHotel(id,"dsh" , n,s,u);

						}
					}
					if (addcbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						if (cm != ""){
							
							IDmap[id].vcomments.push_back(make_pair(n,cm));
							window.close();

							displaySpeceficHotel(id,"dsh" , n,s,u);

						}
					}
				}
			}
			if (event.type == sf::Event::TextEntered)
			{
				if (rect == 1 && event.text.unicode < 128 && event.text.unicode != 8) {
					rt += event.text.unicode;
					addrin.setString(rt);
				}
				else if (rect == 1 && event.text.unicode == 8 && rt.size() != 0)
				{
					rt.pop_back();
					addrin.setString(rt);
				}

				else if (rect == 2 && event.text.unicode < 128 && event.text.unicode != 8) {
					cm += event.text.unicode;
					addcin.setString(cm);

				}
				else if (rect == 2 && event.text.unicode == 8 && cm.size() != 0)
				{
					cm.pop_back();
					addcin.setString(cm);
				}
			}
		
		}
		window.clear();
		window.draw(background);
		window.draw(trivagologo);
		window.draw(HotelData[0]);

		window.draw(HotelData[1]);
		window.draw(HotelData[2]);
		window.draw(HotelData[3]);
		window.draw(HotelData[4]);
		window.draw(HotelData[5]);
		window.draw(HotelData[6]);
		window.draw(HotelData[7]);
		window.draw(HotelData[8]);
		window.draw(HotelData[9]);
		window.draw(IDmap[id].roomimg[0]);
		window.draw(IDmap[id].roomimg[1]);

		window.draw(retbtn);
		window.draw(rettxt);
		if (fn != "show"){
		window.draw(avhbtn);
		window.draw(avhtxt);
		}
		if (!u.ad){
		
		window.draw(addrsh);

		window.draw(addrin);
		window.draw(addcsh);
		window.draw(addcin);
		window.draw(addrbtn);
		window.draw(addrtxt);
		window.draw(addcbtn);
		window.draw(addctxt);
		}
		window.display();
	}
}
void HotelList::searchhotel(string c, int a, string n, searchInfo s, userInfo u)
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
	trivagologo.setPosition(300, 60);

	vector<RectangleShape> avhotels;
	vector<pair<Text, Text>> idsnames;
	vector<int> ids;
	//	RectangleShape *avhotels= new RectangleShape[Number_of_Hotels];

	unordered_map<int, Hotel>::iterator it;

	int counth = 0;

	string AD;

	//cout << " Available Hotels in this country :  " << endl;

	for (it = IDmap.begin(); it != IDmap.end(); it++) {

		if (it->second.Available && it->second.Country == c) {

		//	cout << it->second.Name << "  " << it->second.ID << endl;

			RectangleShape emsh(Vector2f(300, 60));
			emsh.setPosition(20, 80 * (counth+2));
			emsh.setFillColor(Color::White);
			emsh.setOutlineThickness(1);
			emsh.setOutlineColor(Color(202, 202, 202));
			avhotels.push_back(emsh);
			Text n;
			n.setString(it->second.Name);
			n.setCharacterSize(20);
			n.setFont(myfont);
			n.setFillColor(Color::Black);
			n.setPosition(20, 80 * (counth+2));
			Text i;
			i.setString(to_string(it->second.ID));
			i.setCharacterSize(20);
			i.setFont(myfont);
			i.setFillColor(Color::Black);
			i.setPosition(20, 80 * (counth + 2.4));
			idsnames.push_back(make_pair(i, n));
			ids.push_back(it->first);
			counth++;

		}

	}

	Text noAv;
	noAv.setString("NO AVAILABLE HOTELS IN THIS COUNTRY");
	noAv.setCharacterSize(20);
	noAv.setFont(myfont);
	noAv.setFillColor(Color::Black);
	noAv.setPosition(200,200);

	sf::RectangleShape retbtn(sf::Vector2f(130, 60));
	retbtn.setPosition(640, 473);
	retbtn.setFillColor(sf::Color(98, 190, 96));
	retbtn.setOutlineThickness(2);
	retbtn.setOutlineColor(sf::Color::White);

	sf::Text rettxt;
	rettxt.setFont(myfont);
	rettxt.setString("Return");
	rettxt.setPosition(654, 482);
	rettxt.setCharacterSize(30);
	rettxt.setFillColor(sf::Color::White);

	while (window.isOpen()){
		Event event;
		while (window.pollEvent(event)){

			if (event.type == sf::Event::Closed)
				window.close();


			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (retbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						window.close();

						MainWindow(s, u);

					}
					for (int  i = 0; i < avhotels.size(); i++)
					{
						if (avhotels[i].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
							window.close();

							displaySpeceficHotel(ids[i],"srchh" , n,s,u);

						}
					}
						
				}
			}
		}

			window.clear();
			window.draw(background);
			window.draw(trivagologo);
			if (counth == 0){
				window.draw(noAv);
			}
			else{
			for (int i = 0; i < avhotels.size(); i++)
			{
				window.draw(avhotels[i]);

			}
			for (int i = 0; i < idsnames.size(); i++)
			{
				window.draw(idsnames[i].first);
				window.draw(idsnames[i].second);

			}
			}
			window.draw(retbtn);
			window.draw(rettxt);

			window.display();
	}








}

void HotelList::searchroom(int id ,searchInfo s, userInfo u)
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
	trivagologo.setPosition(300, 60);

	vector<RectangleShape> avrs;
	vector<vector<Text>> roomsats;
	vector<int> roomnos;
	unordered_map<int, Room>::iterator it;

	it = IDmap[id].roomList.Rooms.begin();

	bool check = false;

	int count = 1;

	Text noAv;
	noAv.setString("NO AVAILABLE ROOMS IN THIS DATE");
	noAv.setCharacterSize(20);
	noAv.setFont(myfont);
	noAv.setFillColor(Color::Black);
	noAv.setPosition(200, 200);
	for (unordered_map<int, Room>::iterator it = IDmap[id].roomList.Rooms.begin(); it != IDmap[id].roomList.Rooms.end(); it++)
	{
		check = false;

		if (s.rdate[0][1] == s.rdate[1][1])
		{
			for (int i = s.rdate[0][1] - 1; i <= s.rdate[1][1] - 1; i++)
			{
				for (int j = s.rdate[0][0] - 1; j <= s.rdate[1][0] - 1; j++)
				{
					if (it->second.Calender[s.rdate[0][1]-1][j] == true)
					{
						check = true;
						break;
					}
					//countr++;
				}
			}
		}
		else if (s.rdate[1][1] - s.rdate[0][1] == 1)
		{
			for (int i = s.rdate[0][0] - 1; i <= 30; i++)
			{
				if (it->second.Calender[s.rdate[0][1] - 1][i] == true)
				{
					check = true;
					break;
				}
			}
			for (int i = 0; i <= s.rdate[1][0]; i++)
			{

				if (it->second.Calender[s.rdate[1][1] - 1][i] == true)
				{
					check = true;
					break;
				}
			}
		}
		else
		{
			for (int i = s.rdate[0][0] - 1; i <= 30; i++)
			{
				if (it->second.Calender[s.rdate[0][1] - 1][i] == true)
				{
					check = true;
					break;
				}
			}
			for (int i = s.rdate[0][1]; i <= s.rdate[1][1] - 2; i++)
			{
				for (int j = 0; j < 30; j++)
				{
					if (it->second.Calender[i][j] == true)
					{
						check = true;
						break;
					}
				}
			}
			for (int i = 0; i <= s.rdate[1][0]; i++)
			{
				if (it->second.Calender[s.rdate[1][1] - 1][i] == true)
				{
					check = true;
					break;
				}
			}
		}
		if (check == false)
		{

			count++;

			

			RectangleShape emsh(Vector2f(300, 100));
			emsh.setPosition(20, 110 * (count ));
			emsh.setFillColor(Color::White);
			emsh.setOutlineThickness(1);
			emsh.setOutlineColor(Color(202, 202, 202));
			avrs.push_back(emsh);

			
			vector<Text> r;
			Text n;
			n.setString(to_string(it->second.Room_Number));
			n.setCharacterSize(20);
			n.setFont(myfont);
			n.setFillColor(Color::Black);
			n.setPosition(20, 110 * (count ));
			r.push_back(n);
			///
			Text si;
			if (it->second.Singularity)
			si.setString("Single");
			else
			si.setString("Double");

			si.setCharacterSize(20);
			si.setFont(myfont);
			si.setFillColor(Color::Black);
			si.setPosition(20, 110 * (count +0.2 ));
			r.push_back(si);

			Text tv;
			if (it->second.Has_TV)
			tv.setString("TV Available");
			else
				tv.setString("TV Unavailable");

			tv.setCharacterSize(20);
			tv.setFont(myfont);
			tv.setFillColor(Color::Black);
			tv.setPosition(20, 110 * (count +(0.2)*2));
			r.push_back(tv);

			Text wifi;
			if (it->second.Has_Wifi)
			wifi.setString("Wifi Available");
			else
				wifi.setString("Wifi Unavailable");

			wifi.setCharacterSize(20);
			wifi.setFont(myfont);
			wifi.setFillColor(Color::Black);
			wifi.setPosition(20, 110 * (count +(0.2)*3));
			r.push_back(wifi);

			/*vector<RectangleShape> avrs;
			vector<Text[4]> roomsats;
			vector<int> roomnos;*/
			roomsats.push_back(r);
			roomnos.push_back(it->first);
		}

	}

	sf::RectangleShape retbtn(sf::Vector2f(130, 60));
	retbtn.setPosition(640, 473);
	retbtn.setFillColor(sf::Color(98, 190, 96));
	retbtn.setOutlineThickness(2);
	retbtn.setOutlineColor(sf::Color::White);

	sf::Text rettxt;
	rettxt.setFont(myfont);
	rettxt.setString("Return");
	rettxt.setPosition(654, 482);
	rettxt.setCharacterSize(30);
	rettxt.setFillColor(sf::Color::White);
	while (window.isOpen()){
		Event event;
		while (window.pollEvent(event)){

			if (event.type == sf::Event::Closed)
				window.close();


			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (retbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						window.close();
						displaySpeceficHotel(id,"srchr" ,u.name, s, u);

					}
					for (int i = 0; i < avrs.size(); i++)
					{
						if (avrs[i].getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

							if (!u.ad){
								window.close();

							reserve(id,roomnos[i], s, u);
							displaySpeceficHotel(id,"dsh ",u.name, s, u);

							}

						}
					}

				}
			}
		}

		window.clear();
		window.draw(background);
		window.draw(trivagologo);
		if (count == 1){
			window.draw(noAv);
		}
		else{
			for (int i = 0; i < avrs.size(); i++)
			{
				window.draw(avrs[i]);

			}
			for (int i = 0; i < roomsats.size(); i++)
			{
				for (int j = 0; j < roomsats[i].size(); j++)
				{
					window.draw(roomsats[i][j]);

				}

			}
		}
		window.draw(retbtn);
		window.draw(rettxt);

		window.display();
	}

}


void HotelList::MainWindow(searchInfo& s, userInfo u){



	RenderWindow window;
	int rect = 0;

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
	trivagologo.setPosition(300, 60);


	sf::Text country;
	country.setFont(myfont);
	country.setString("Country: ");
	country.setPosition(225, 210);
	country.setFillColor(sf::Color::Black);
	country.setCharacterSize(30);

	sf::RectangleShape cnsh(sf::Vector2f(220, 50));
	cnsh.setPosition(400, 210);
	cnsh.setFillColor(sf::Color::White);
	cnsh.setOutlineThickness(2);
	cnsh.setOutlineColor(sf::Color(202, 202, 202));

	s.country = "";
	sf::Text countryin;
	countryin.setFont(myfont);
	countryin.setFillColor(sf::Color::Black);
	countryin.setPosition(400, 210);

	//////////////////

	string date[2][2] = { { "", "" }, { "", "" } };



	sf::Text stdtxt;
	stdtxt.setFont(myfont);
	stdtxt.setString("Start Date :");
	stdtxt.setPosition(185, 300);
	stdtxt.setCharacterSize(30);
	stdtxt.setFillColor(sf::Color::Black);

	sf::RectangleShape stdsh(sf::Vector2f(100, 50));
	stdsh.setPosition(400, 300);
	stdsh.setFillColor(sf::Color::White);
	stdsh.setOutlineThickness(2);
	stdsh.setOutlineColor(sf::Color(202, 202, 202));


	sf::Text sdin;
	sdin.setFont(myfont);
	sdin.setFillColor(sf::Color::Black);
	sdin.setPosition(400, 300);

	sf::RectangleShape stmsh(sf::Vector2f(100, 50));
	stmsh.setPosition(520, 300);
	stmsh.setFillColor(sf::Color::White);
	stmsh.setOutlineThickness(2);
	stmsh.setOutlineColor(sf::Color(202, 202, 202));


	sf::Text smin;
	smin.setFont(myfont);
	smin.setFillColor(sf::Color::Black);
	smin.setPosition(520, 300);


	sf::Text edtxt;
	edtxt.setFont(myfont);
	edtxt.setString("End Date :");
	edtxt.setPosition(200, 390);
	edtxt.setCharacterSize(30);
	edtxt.setFillColor(sf::Color::Black);

	sf::RectangleShape edsh(sf::Vector2f(100, 50));
	edsh.setPosition(400, 390);
	edsh.setFillColor(sf::Color::White);
	edsh.setOutlineThickness(2);
	edsh.setOutlineColor(sf::Color(202, 202, 202));


	sf::Text edin;
	edin.setFont(myfont);
	edin.setFillColor(sf::Color::Black);
	edin.setPosition(400, 390);

	sf::RectangleShape emsh(sf::Vector2f(100, 50));
	emsh.setPosition(520, 390);
	emsh.setFillColor(sf::Color::White);
	emsh.setOutlineThickness(2);
	emsh.setOutlineColor(sf::Color(202, 202, 202));

	sf::Text emin;
	emin.setFont(myfont);
	emin.setFillColor(sf::Color::Black);
	emin.setPosition(520, 390);

	/////////////////////////////


	sf::RectangleShape searchbtn(sf::Vector2f(130, 60));
	searchbtn.setPosition(160, 473);
	searchbtn.setFillColor(sf::Color(98, 190, 96));
	searchbtn.setOutlineThickness(2);
	searchbtn.setOutlineColor(sf::Color::White);

	sf::Text searchtxt;
	searchtxt.setFont(myfont);
	searchtxt.setString("Search");
	searchtxt.setPosition(174, 482);
	searchtxt.setCharacterSize(30);
	searchtxt.setFillColor(sf::Color::White);


	string wlctmp = "Welcome\n";
	for (int i = 0; i < u.name.size(); i++){
		wlctmp.push_back(u.name[i]);
	}
	sf::Text welcometxt;
	welcometxt.setFont(myfont);
	welcometxt.setString(wlctmp);
	welcometxt.setPosition(700, 200);
	welcometxt.setCharacterSize(30);
	welcometxt.setFillColor(sf::Color::Black);


	sf::RectangleShape searchqbtn(sf::Vector2f(250, 60));
	searchqbtn.setPosition(360, 473);
	searchqbtn.setFillColor(sf::Color(98, 190, 96));
	searchqbtn.setOutlineThickness(2);
	searchqbtn.setOutlineColor(sf::Color::White);

	sf::Text searchqtxt;
	searchqtxt.setFont(myfont);
	searchqtxt.setString("Search By Query");
	searchqtxt.setPosition(374, 482);
	searchqtxt.setCharacterSize(30);
	searchqtxt.setFillColor(sf::Color::White);

	sf::RectangleShape filterbtn(sf::Vector2f(130, 60));
	filterbtn.setPosition(660, 473);
	filterbtn.setFillColor(sf::Color(98, 190, 96));
	filterbtn.setOutlineThickness(2);
	filterbtn.setOutlineColor(sf::Color::White);

	sf::Text filtertxt;
	filtertxt.setFont(myfont);
	filtertxt.setString("Filter");
	filtertxt.setPosition(690, 482);
	filtertxt.setCharacterSize(30);
	filtertxt.setFillColor(sf::Color::White);

	while (window.isOpen()){
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::TextEntered)
			{
				if (rect == 1 && event.text.unicode < 128 && event.text.unicode != 8) {
					s.country += event.text.unicode;
					countryin.setString(s.country);
				}
				else if (rect == 1 && event.text.unicode == 8 && s.country.size() != 0)
				{
					s.country.pop_back();
					countryin.setString(s.country);
				}

				else if (rect == 2 && event.text.unicode < 128 && event.text.unicode != 8) {
					date[0][0] += event.text.unicode;
					sdin.setString(date[0][0]);

				}
				else if (rect == 2 && event.text.unicode == 8 && date[0][0].size() != 0)
				{
					date[0][0].pop_back();
					sdin.setString(date[0][0]);
				}
				else if (rect == 3 && event.text.unicode < 128 && event.text.unicode != 8) {
					date[0][1] += event.text.unicode;
					smin.setString(date[0][1]);

				}
				else if (rect == 3 && event.text.unicode == 8 && date[0][1].size() != 0)
				{
					date[0][1].pop_back();
					smin.setString(date[0][1]);
				}
				else if (rect == 4 && event.text.unicode < 128 && event.text.unicode != 8) {
					date[1][0] += event.text.unicode;
					edin.setString(date[1][0]);

				}
				else if (rect == 4 && event.text.unicode == 8 && date[1][0].size() != 0)
				{
					date[1][0].pop_back();
					edin.setString(date[1][0]);
				}
				else if (rect == 5 && event.text.unicode < 128 && event.text.unicode != 8) {
					date[1][1] += event.text.unicode;
					emin.setString(date[1][1]);

				}
				else if (rect == 5 && event.text.unicode == 8 && date[1][1].size() != 0)
				{
					date[1][1].pop_back();
					emin.setString(date[1][1]);
				}

			}
			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (cnsh.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 1;
					}


					if (stdsh.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 2;
					}

					if (stmsh.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 3;
					}
					if (edsh.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 4;
					}
					if (emsh.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						rect = 5;
					}
					if (searchbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

						if (date[0][0].size() == 0 || date[0][1].size() == 0 || date[1][0].size() == 0 || date[1][1].size() == 0 || s.country.size() == 0){
							continue;
						}
						if (stoi(date[0][0]) < 1 || stoi(date[0][0]) > 30 || stoi(date[1][0]) < 1 || stoi(date[1][0]) > 30 || stoi(date[0][1]) < 1 || stoi(date[0][1]) >  12 || stoi(date[1][1]) <  1 || stoi(date[1][1]) >  12)
						{
							continue;
						}

						s.rdate[0][0] = stoi(date[0][0]);

						s.rdate[0][1] = stoi(date[0][1]);

						s.rdate[1][0] = stoi(date[1][0]);
						s.rdate[1][1] = stoi(date[1][1]);

						countryin.setString("");
						//s.country.clear();
						sdin.setString("");
						date[0][0].clear();
						smin.setString("");
						date[0][1].clear();
						edin.setString("");
						date[1][0].clear();
						emin.setString("");
						date[1][1].clear();
						window.close();

						if (u.ad)
							searchhotel(s.country, 1,u.name, s,u);
						else
							searchhotel(s.country, 2, u.name, s, u);


						//return 1;
						//window.close();
					}//filterbtn searchqbtn

					if (searchqbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

						if (date[0][0].size() == 0 || date[0][1].size() == 0 || date[1][0].size() == 0 || date[1][1].size() == 0 || s.country.size() == 0){
							continue;
						}
						if (stoi(date[0][0]) < 1 || stoi(date[0][0]) > 30 || stoi(date[1][0]) < 1 || stoi(date[1][0]) > 30 || stoi(date[0][1]) < 1 || stoi(date[0][1]) >  12 || stoi(date[1][1]) <  1 || stoi(date[1][1]) >  12)
						{
							continue;
						}

						s.rdate[0][0] = stoi(date[0][0]);

						s.rdate[0][1] = stoi(date[0][1]);

						s.rdate[1][0] = stoi(date[1][0]);
						s.rdate[1][1] = stoi(date[1][1]);

						countryin.setString("");
						//s.country.clear();
						sdin.setString("");
						date[0][0].clear();
						smin.setString("");
						date[0][1].clear();
						edin.setString("");
						date[1][0].clear();
						emin.setString("");
						date[1][1].clear();
						window.close();

						if (u.ad)
							search(s.country, 1, u.name, s, u);
						else
							search(s.country, 2, u.name, s, u);


						//return 2;
					}
					if (filterbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

						if (date[0][0].size() == 0 || date[0][1].size() == 0 || date[1][0].size() == 0 || date[1][1].size() == 0 || s.country.size() == 0){
							continue;
						}
						if (stoi(date[0][0]) < 1 || stoi(date[0][0]) > 30 || stoi(date[1][0]) < 1 || stoi(date[1][0]) > 30 || stoi(date[0][1]) < 1 || stoi(date[0][1]) >  12 || stoi(date[1][1]) <  1 || stoi(date[1][1]) >  12)
						{
							continue;
						}

						s.rdate[0][0] = stoi(date[0][0]);

						s.rdate[0][1] = stoi(date[0][1]);

						s.rdate[1][0] = stoi(date[1][0]);
						s.rdate[1][1] = stoi(date[1][1]);

						countryin.setString("");
						//s.country.clear();
						sdin.setString("");
						date[0][0].clear();
						smin.setString("");
						date[0][1].clear();
						edin.setString("");
						date[1][0].clear();
						emin.setString("");
						date[1][1].clear();
						window.close();

						if (u.ad)
							filter(s.country, 1, u.name, s, u);
						else
							filter(s.country, 2, u.name, s, u);
						//return 3;
					}
				}
			}
		}
		window.clear();
		window.draw(background);
		window.draw(trivagologo);

		window.draw(country);
		window.draw(cnsh);
		window.draw(countryin);
		window.draw(stdtxt);
		window.draw(stdsh);
		window.draw(sdin);
		window.draw(stmsh);
		window.draw(smin);
		window.draw(edtxt);
		window.draw(edsh);
		window.draw(edin);
		window.draw(emsh);
		window.draw(emin);
		window.draw(searchbtn);
		window.draw(searchtxt);
		window.draw(searchqbtn);
		window.draw(searchqtxt);
		window.draw(filterbtn);
		window.draw(filtertxt);

		window.draw(welcometxt);

		window.display();

	}


}

void HotelList::AdminWindow(searchInfo s, userInfo u){

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
	trivagologo.setPosition(300, 50);
	//////////////////////////////
	sf::RectangleShape Addbtn(sf::Vector2f(200, 60));
	Addbtn.setPosition(350, 60 + 70+40);
	Addbtn.setFillColor(sf::Color(98, 190, 96));
	Addbtn.setOutlineThickness(2);
	Addbtn.setOutlineColor(sf::Color::White);

	sf::Text Addtxt;
	Addtxt.setFont(myfont);
	Addtxt.setString("Add Hotel");
	Addtxt.setPosition(355, 65+70+40);
	Addtxt.setCharacterSize(30);
	Addtxt.setFillColor(sf::Color::White);

	////////////////////////////////
	sf::RectangleShape delbtn(sf::Vector2f(200, 60));
	delbtn.setPosition(350, 60+70*2+40);
	delbtn.setFillColor(sf::Color(98, 190, 96));
	delbtn.setOutlineThickness(2);
	delbtn.setOutlineColor(sf::Color::White);

	sf::Text deltxt;
	deltxt.setFont(myfont);
	deltxt.setString("Delete Hotel");
	deltxt.setPosition(355, 60+70*2+5+40);
	deltxt.setCharacterSize(30);
	deltxt.setFillColor(sf::Color::White);

	//////////////////////////////////////
	sf::RectangleShape updbtn(sf::Vector2f(200, 60));
	updbtn.setPosition(350, 60+70*3+40);
	updbtn.setFillColor(sf::Color(98, 190, 96));
	updbtn.setOutlineThickness(2);
	updbtn.setOutlineColor(sf::Color::White);

	sf::Text updtxt;
	updtxt.setFont(myfont);
	updtxt.setString("Update Hotel");
	updtxt.setPosition(355, 60+70*3+5+40);
	updtxt.setCharacterSize(30);
	updtxt.setFillColor(sf::Color::White);
	////////////////////////////////////////

	sf::RectangleShape srchflbtn(sf::Vector2f(220, 60));
	srchflbtn.setPosition(350-10, 60+70*4+40);
	srchflbtn.setFillColor(sf::Color(98, 190, 96));
	srchflbtn.setOutlineThickness(2);
	srchflbtn.setOutlineColor(sf::Color::White);

	sf::Text srchfltxt;
	srchfltxt.setFont(myfont);
	srchfltxt.setString("Search & Filter");
	srchfltxt.setPosition(355-10 , 60 + 70*4+5+40);
	srchfltxt.setCharacterSize(30);
	srchfltxt.setFillColor(sf::Color::White);
///////////////////////////////////

	sf::RectangleShape dspbtn(sf::Vector2f(220, 60));
	dspbtn.setPosition(350-10, 60 +70*5+40);
	dspbtn.setFillColor(sf::Color(98, 190, 96));
	dspbtn.setOutlineThickness(2);
	dspbtn.setOutlineColor(sf::Color::White);

	sf::Text dsptxt;
	dsptxt.setFont(myfont);
	dsptxt.setString("Display Hotels");
	dsptxt.setPosition(355-10, 60+70*5+5+40);
	dsptxt.setCharacterSize(30);
	dsptxt.setFillColor(sf::Color::White);

	//////////////
	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::MouseButtonPressed) {
				if (event.mouseButton.button == sf::Mouse::Left) {
					if (Addbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {


						window.close();
						Add_hotel_Admin(s, u);

					}
					if (delbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
						window.close();
						Delete_hotel(s, u);
					}
					if (updbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
					
						window.close();
						Update_hotel(s, u);
					}
					if (srchflbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
					
						window.close();
						MainWindow(s, u);
					}
					if (dspbtn.getGlobalBounds().contains(window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

						window.close();
						show(s, u);
					}
				}
			}

		}

		window.clear();
		window.draw(background);
		window.draw(trivagologo);

		window.draw(Addbtn);
		window.draw(Addtxt);
		window.draw(delbtn);
		window.draw(deltxt);
		window.draw(updbtn);
		window.draw(updtxt);
		window.draw(srchflbtn);
		window.draw(srchfltxt);

		window.draw(dspbtn);
		window.draw(dsptxt);

		window.display();


	}
}