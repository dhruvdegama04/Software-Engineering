#include <SFML/Graphics.hpp>

int main() {
    // 1. Game Window Create Karein (Width: 800, Height: 600)
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML 2D Game - Bouncing Ball");
    window.setFramerateLimit(60); // 60 FPS limit

    // 2. Game Object (Circle/Ball) Banayein
    sf::CircleShape ball(20.0f); // 20px radius
    ball.setFillColor(sf::Color::Green);
    ball.setPosition(400.0f, 300.0f);

    // Movement Speeds
    float moveX = 4.0f;
    float moveY = 4.0f;

    // 3. MAIN GAME LOOP
    while (window.isOpen()) {
        
        // --- A. EVENT HANDLING ---
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close(); // Window Close event
        }

        // --- B. GAME LOGIC / UPDATES ---
        ball.move(moveX, moveY);

        // Screen Boundaries se Bounce Karwana
        sf::Vector2f pos = ball.getPosition();
        if (pos.x <= 0 || pos.x + ball.getRadius() * 2 >= 800) {
            moveX = -moveX; // X direction reverse
        }
        if (pos.y <= 0 || pos.y + ball.getRadius() * 2 >= 600) {
            moveY = -moveY; // Y direction reverse
        }

        // --- C. RENDERING ---
        window.clear(sf::Color::Black); // Screen clear karein
        window.draw(ball);               // Ball draw karein
        window.display();                // Frame show karein
    }

    return 0;
}