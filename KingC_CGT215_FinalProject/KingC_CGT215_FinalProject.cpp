// KingC_CGT215_FinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>

using namespace std;
using namespace sf;
using namespace sfp;


int main()
{
    RenderWindow window(VideoMode(1000, 1000),"Labyrinth"); 
    World world(Vector2f(0, 0));

    // Border
 
    //Ceiling
    PhysicsRectangle Upper;
    Upper.setSize(Vector2f(1000, 100));
    Upper.setCenter(Vector2f(500,50));
    Upper.setStatic(true);
    world.AddPhysicsBody(Upper);

    //Floor
    PhysicsRectangle Floor;
    Floor.setSize(Vector2f(1000, 100));
    Floor.setCenter(Vector2f(50,500));
    Floor.setStatic(true);
    world.AddPhysicsBody(Floor);

    //Floor
    PhysicsRectangle Lwall;
    Lwall.setSize(Vector2f(1000, 100));
    Lwall.setCenter(Vector2f(50, 500));
    Lwall.setStatic(true);
    world.AddPhysicsBody(Lwall);







 



    window.clear(Color(0, 0, 0));
    window.draw(Floor);
    window.draw(Upper);
    window.display();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
