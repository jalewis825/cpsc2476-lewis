#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int userInput;

    while (true) {
        std::cout << "---Vector Management---" << std::endl;
        std::cout << "1. Add number to vector" << std::endl;
        std::cout << "2. Print the vector" << std::endl;
        std::cout << "3. Double the vector" << std::endl;
        std::cout << "4. Sum of vector" << std::endl;
        std::cout << "5. Print multiples of specified value" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> userInput;

        switch (userInput) {
            case 1: {
                int num; 
                std::cout << "Enter number you'd like to add to the vector: "; 
                std::cin >> num;
                numbers.push_back(num);
                std::cout << num << " has been added to the vector." << std::endl;
                break;
            }
            case 2: {
                if (numbers.empty()){
                    std::cout << "The vector is empty." << std::endl;
                } else {
                    std::cout << "Vector contents: ";
                    for (int num : numbers) {
                        std::cout << num << " ";
                    }
                    std::cout << std::endl;
                }
                break;
            }
            case 3: {
                if (numbers.empty()){
                    std::cout << "The vector is empty." << std::endl;
                } else {
                    for (int &num : numbers) {
                        num *= 2;
                    } 
                    std::cout << "Doubled Vector: ";
                    for (int num : numbers) {
                        std::cout << num << " ";
                    }    
                    std::cout << std::endl;
                }
                break;
            }
            case 4: {
                if (numbers.empty()){
                    std::cout << "The vector is empty." << std::endl;
                } else {
                    int sum = 0;
                    for (int num :numbers) {
                        sum += num;
                    }
                    std::cout << "The sum of all numbers in the vector is: " << sum << std::endl;
                }
                break;
            }
            case 5: {
                if (numbers.empty()){
                    std::cout << "The vector is empty." << std::endl;
                } 
                
                int multiple;
                std::cout << "Enter a number you'd like to find multiples of: ";
                std::cin >> multiple;
                
                bool found = false; //check to see if at least one multiple is found

                std::cout << "Multiples of " << multiple << " within the vector: ";
                    for (int num : numbers) {
                        if (num % multiple == 0){
                            std::cout << num << " ";
                            found = true;
                        }
                    }
                if (!found){
                    std::cout << "0" << std::endl;
                }
                break;   
            } 
            case 0:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                std::cout << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please choose from options 0-5." << std::endl;
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