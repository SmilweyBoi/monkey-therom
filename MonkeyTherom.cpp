#include <iostream>
#include <chrono>
#include <thread>

int main() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        

        int num = (rand() % 26) + 1;

        switch (num)
        {
        case 1:
            std::cout << 'a';
        break;
        
        case 2:
           std::cout << 'b';
        break;
        
        case 3:
          std::cout << 'c';
        break;

        case 4:
         std::cout << 'd';
        break;

        case 5:
           std::cout << 'e';
        break;

        case 6:
          std::cout << 'f';
        break;
        
        case 7:
         std::cout << 'g';
        break;

        case 8:
           std::cout << 'h';
        break;

        case 9:
           std::cout << 'i';
        break;

        case 10:
           std::cout << 'j';
        break;

        case 11:
           std::cout << 'k';
        break;

        case 12:
           std::cout << 'l';
        break;

        case 13:
           std::cout << 'm';
        break;

        case 14:
           std::cout << 'n';
        break;

        case 15:
          std::cout << 'o';
        break;
         
        case 16:
           std::cout << 'p';
        break;
        
        case 17:
          std::cout << 'q';
        break;  

        case 18:
           std::cout << 'r';
        break;

        case 19:
          std::cout << 's';
        break; 
         
        case 20:
           std::cout << 't';
        break;

        case 21:
           std::cout << 'u';
        break;

        case 22:
           std::cout << 'v';
        break;

        case 23:
           std::cout << 'w';
        break;

        case 24:
           std::cout << 'x';
        break;

        case 25:
           std::cout << 'y';
        break;

        case 26:
           std::cout << 'z';
        break;

        default:
            std::cout << "error";
        break;
        }
    }
    return 0;
}