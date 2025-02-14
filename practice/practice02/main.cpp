#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int userInput;
    
    std::cout << "Welcome to your Bank Account!" << std::endl;
    std::cout << "Initializing account with $100.00..." << std::endl;
    std::cout << std::endl;

    while (true) {
        std::cout << "---Bank Account Menu---" << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Make A Deposit" << std::endl;
        std::cout << "3. Make A Withdrawal" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> userInput;
        std::cout << std::endl;

        switch (userInput) {
            case 1: {
                int num; 
                std::cout << "Your current balance is: ";
                break;
            }
            case 2: {
                float deposit;
                std::cout << "How much would you like to deposit?" << std::endl;
                std::cout << "Amount: ";
                std::cin >> deposit;
                break;
            }
            case 3: {
                float withdrawal;
                std::cout << "How much would you like to withdraw? " << std::endl;
                std::cout << "Amount: ";
                std::cin >> withdrawal;
                break;
            }
            case 0:
                std::cout << "Thank you for trusting us with your banking needs! Goodbye!" << std::endl;
                std::cout << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please choose from options 0-3." << std::endl;
                break;
        }
        std::cout << std::endl;
        std::cout << "Returning to menu..." << std::endl;
        std::cout << std::endl;
    }

    return 0;

}

/*AI: AI was utilized to help me with the bool I wanted to add. I wanted to add the condition that if
no multiples were found it would state that but I was having trouble structuring the code to make it work
the way I was wanting. */