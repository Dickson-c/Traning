#include <iostream>
#include <map>
#include <functional>

class Menu 
{
    private:
        int valueOne = 0;
        int valueTwo = 0;
        bool condition = true;
        std :: map <int, std::function<void()>> menu;
        std :: function <void()> SetCurrentFunction;
        std :: function <void()> SetPreviousFunction;

    public:
        Menu() 
        {
            menu[1] = std :: bind (&Menu :: StoreData , this);
            menu[2] = std :: bind (&Menu :: DisplayData , this);
            menu[3] = std :: bind (&Menu :: ResetData , this);
            menu[4] = std :: bind (&Menu :: Exit , this);
        }

        void StoreData() 
        {
            int choice = 0;
            std::cout << "1.Enter Values ." << std::endl << "2.Back ." << std::endl << "Enter Choice = ";
            std::cin >> choice;

            SetCurrentFunction = std :: bind (&Menu :: SelectValue , this);
            SetPreviousFunction = std :: bind (&Menu :: StoreData , this); 

            if (choice == 1) 
            {
                SetCurrentFunction();
            } 
            else if (choice == 2) 
            {
                SetCurrentFunction = std :: bind (&Menu :: Run , this);
                SetPreviousFunction = std :: bind (&Menu :: Run , this);                      
            }
            else if(choice >2)
            {
                std :: cout << "Enter valid input .\n";

                SetPreviousFunction();                
            }

        }

        void SelectValue()
        {
            std :: cout << "1.Value1 . \n2.Value2 . \n3.Back . \nEnter Choice = " ;

            int choice = 0;
            std :: cin >> choice ;

            if(choice == 1)
            {
                std :: cout << "Value1 = ";
                std :: cin >> valueOne;

                SetCurrentFunction();
            }
            else if(choice == 2 )
            {
                std :: cout << "Value2 = ";

                std :: cin >> valueTwo;

                SetCurrentFunction();

            }
            else if(choice == 3)
            {
                SetPreviousFunction();
            }
            else if(choice >3)
            {
                std :: cout << "Enter valid input .\n";
                SetCurrentFunction();                
            }
        }

        void DisplayData() 
        {
            std::cout << "Value1 = " << valueOne << std::endl;
            std::cout << "Value2 = " << valueTwo << std::endl;
        }

        void ResetData() 
        {
            valueOne = 0, valueTwo = 0;
        }

        void Exit() 
        {
            condition = false;
            std :: cout << "       Program terminated \n";
        }

        void LoopManager()
        {
            while(condition)
            {
                std::cout << "1. Store Values" << std::endl
                        << "2. View Values" << std::endl
                        << "3. Reset Values" << std::endl
                        << "4. Exit " << std::endl ;

                int choice = 0;

                std::cout << "Enter Choice : " ;
                std::cin >> choice;

                menu[choice]();
            }
        }

        void Run() 
        {
            SetCurrentFunction = std :: bind (&Menu :: Run , this);
            SetPreviousFunction = std :: bind (&Menu :: Run , this);

            LoopManager();
        }
};

int main() 
{
    Menu menu;
    menu.Run();
    return 0;
}
