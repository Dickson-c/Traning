#include <iostream>
#include <vector>

class College
{
    public:
        virtual void PrintData()
        {
            std :: cout << "College name is KCE" << std :: endl;
        }
};

class Area : public College
{
    public:
        void PrintData()
        {
            std :: cout << "College is located in Coimbatore district ." << std :: endl;
        }
};

class Standard : public College
{
    public:
        void PrintData()
        {
            std :: cout << "NAAC accrediation of college is A+" << std :: endl;
        }
};

class Department
{
    public:
        virtual void PrintData()
        {
            std :: cout << "Total number of departments are 5 " << std :: endl;
        }
};

class ECE : public Department
{
    public:
        void PrintData()
        {
            std :: cout << "Total number of students in ECE is 162" << std :: endl;
        }
};

class ETE : public Department
{
    public:
        void PrintData()
        {
            std :: cout << "Total number of students in ETE is 8" << std :: endl;
        }
};

class EEE : public Department
{
    public:
        void PrintData()
        {
            std :: cout << "Total number of students in EEE is 150" << std :: endl;
        }
};

class CSE : public Department
{
    public:
        void PrintData()
        {
            std :: cout << "Total number of students in CSE is 180" << std :: endl;
        }
};

class IT : public Department
{
    public:
        void PrintData()
        {
            std :: cout << "Total number of students in IT is 170" << std :: endl;
        }
};

class Access
{
    private:
        College* collegeRef;
        Department* departmentRef;

    public:
        Access(int choice)
        {
            switch(choice)
            {
                case 0:
                    {
                        collegeRef = new College();
                        break;
                    }
                case 1:
                    {
                        collegeRef = new Area();
                        break;
                    }
                case 2:
                    {
                        collegeRef = new Standard();
                        break;
                    }
                case 3:
                    {
                        departmentRef = new Department();
                        break;
                    }
                case 4:
                    {
                        departmentRef = new ECE();
                        break;
                    }
                case 5:
                    {
                        departmentRef = new ETE();
                        break;
                    }
                case 6:
                    {
                        departmentRef = new EEE();
                        break;
                    }
                case 7:
                    {
                        departmentRef = new CSE();
                        break;
                    }
                case 8:
                    {
                        departmentRef = new IT();
                        break;
                    }
                default:
                    {
                        std :: cout <<"Enter valid input ." << std :: endl;
                        break;
                    }
            }
        }

        College* getCollegeData()
        {
            return collegeRef;
        }

        Department* getDepartmentData()
        {
            return departmentRef;
        }
};

int main()
{
    int choice = 0;
    std :: cout << "Enter choice : ";
    std :: cin >> choice ;

    if(choice < 4)
    {
        Access* accesRef = new Access(choice);
        College* collegeRef = accesRef->getCollegeData();
        collegeRef->PrintData();

        delete(collegeRef);
    }
    
    else if(choice > 3)
    {
        Access* accesRef = new Access(choice);
        Department* departmentRef = accesRef->getDepartmentData();
        departmentRef->PrintData();

        delete(departmentRef);
    }
}
