#include <iostream>
#include <map>
#include <functional>

class Menu 
{
    private:
        int valueOne = 0;
        int valueTwo = 0;
        int dummy = 0;
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

            if (choice == 1) 
            {
                SetCurrentFunction = std :: bind (&Menu :: SelectValue , this);
                SetPreviousFunction = std :: bind (&Menu :: StoreData , this);

                SetCurrentFunction();
            } 

            else if (choice == 2) 
            {
                SetCurrentFunction = std :: bind (&Menu :: Run , this);
                SetPreviousFunction = std :: bind (&Menu :: Run , this);

                SetPreviousFunction();
            }
        }

        void SelectValue()
        {
            std :: cout << "1.Value1 . \n2.Value2 . \n3.Back . \n Enter Choice = " ;

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
            dummy = 1;
        }

        void Run() 
        {
            int count =0;
            SetCurrentFunction = std :: bind (&Menu :: Run , this);
            SetPreviousFunction = std :: bind (&Menu :: Run , this);
            
            while (dummy == 0) 
            {
                std :: cout << "Loop count " <<  count ++;
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
};

int main() 
{
    Menu menu;
    menu.Run();
    return 0;
}
