#include <SFML/Graphics.hpp>
#include<iostream>
#include<string>
#include<ctime>


int main()
{
	
	srand(time(0));
	
	sf::RenderWindow window(sf::VideoMode(600, 400), "Dice roller");

	window.setKeyRepeatEnabled(false);

	sf::Texture pTexture[6];
	sf::Sprite diceImage[6];
	if (!pTexture[0].loadFromFile("dice_1.png"))
		std::cout << "Error could not load dice_1 image" << std::endl;

	diceImage[0].setTexture(pTexture[0]);

	if (!pTexture[1].loadFromFile("dice_2.png"))
		std::cout << "Error could not load dice_2 image" << std::endl;

	diceImage[1].setTexture(pTexture[1]);

	if (!pTexture[2].loadFromFile("dice_3.png"))
		std::cout << "Error could not load dice_3 image" << std::endl;

	diceImage[2].setTexture(pTexture[2]);

	if (!pTexture[3].loadFromFile("dice_4.png"))
		std::cout << "Error could not load dice_4 image" << std::endl;

	diceImage[3].setTexture(pTexture[3]);

	if (!pTexture[4].loadFromFile("dice_5.png"))
		std::cout << "Error could not load dice_5 image" << std::endl;

	diceImage[4].setTexture(pTexture[4]);

	if (!pTexture[5].loadFromFile("dice_6.png"))
		std::cout << "Error could not load dice_6 image" << std::endl;

	diceImage[5].setTexture(pTexture[5]);

	int i = rand() % 6;

	int j = rand() % 6;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}


		
		diceImage[i].setPosition(sf::Vector2f(30, 80));
		window.draw(diceImage[i]);
		
		
		diceImage[j].setPosition(sf::Vector2f(350, 80));
		window.draw(diceImage[j]);

	
		window.display();
		
	}

	



	return 0;
}