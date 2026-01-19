#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

int main() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));

        srand(time(0)); 

        int num = rand() % 26 + 1;

        char letter;

        switch (num)
        {
        case 1:
            letter = 'a';  
            std::cout << letter;              
        break;
        
        case 2:
            letter = 'b';  
            std::cout << letter;   
        break;
        
        case 3:
             letter = 'c';  
             std::cout << letter;   
        break;

        case 4:
            letter = 'd';  
            std::cout << letter;   
        break;

        case 5:
            letter = 'e';  
            std::cout << letter;   
        break;

        case 6:
            letter = 'f';  
            std::cout << letter;   
        break;
        
        case 7:
            letter = 'g';
            std::cout << letter;   
        break;

        case 8:
            letter = 'h';
            std::cout << letter;   
        break;

        case 9:
           letter = 'i';
           std::cout << letter;   
        break;

        case 10:
           letter = 'j';
           std::cout << letter;   
        break;

        case 11:
        letter = 'k';
           std::cout << letter;   
        break;

        case 12:
        letter = 'l';
           std::cout << letter;   
        break;

        case 13:
        letter = 'm';
           std::cout << letter;   
        break;

        case 14:
        letter = 'n';
           std::cout << letter;   
        break;

        case 15:
        letter = 'o';
           std::cout << letter;   
        break;

        case 16:
        letter = 'p';
           std::cout << letter;   
        break;

        case 17:
        letter = 'q';
           std::cout << letter;   
        break;

        case 18:
        letter = 'r';
           std::cout << letter;   
        break;

        case 19:
        letter = 's';
           std::cout << letter;   
        break;

        case 20:
        letter = 't';
           std::cout << letter;   
        break;

        case 21:
        letter = 'u';
           std::cout << letter;   
        break;

        case 22:
        letter = 'v';
           std::cout << letter;   
        break;

        case 23:
        letter = 'w';
           std::cout << letter;   
        break;

        case 24:
        letter = 'x';
           std::cout << letter;   
        break;

        case 25:
        letter = 'y';
           std::cout << letter;   
        break;

        case 26:
        letter = 'z';
           std::cout << letter;   
        break;

        default:
            std::cout << "error";
        break;
        }

   
    }
    return 0;
}