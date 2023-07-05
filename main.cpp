#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(800,600), "Test game");
    sf::Event ev;

    //Game loop

    while(window.isOpen()){
        while(window.pollEvent(ev)){
            switch(ev.type){
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:
                if(ev.key.code == sf::Keyboard::Escape)
                    window.close();
                break;
            }
        }
        //Update

        //Render
        window.clear(sf::Color(0,0,255));

        //Draw game


        window.display();
    }
    
    return 0;
}