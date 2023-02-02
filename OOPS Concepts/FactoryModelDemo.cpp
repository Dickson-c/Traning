#include <iostream>

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
        Access(char choice)
        {
            switch(choice)
            {
                case 'A':
                    {
                        collegeRef = new College();
                        break;
                    }
                case 'B':
                    {
                        collegeRef = new Area();
                        break;
                    }
                case 'C':
                    {
                        collegeRef = new Standard();
                        break;
                    }
                case 'D':
                    {
                        departmentRef = new Department();
                        break;
                    }
                case 'E':
                    {
                        departmentRef = new ECE();
                        break;
                    }
                case 'F':
                    {
                        departmentRef = new ETE();
                        break;
                    }
                case 'G':
                    {
                        departmentRef = new EEE();
                        break;
                    }
                case 'H':
                    {
                        departmentRef = new CSE();
                        break;
                    }
                case 'I':
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
    int choice ;
    std :: cout << "Enter choice : ";
    std :: cin >> choice ;

    Access* accesRef = new Access(choice);

    if( choice < 3)
    {
        College* collegeRef = accesRef->getCollegeData();
        collegeRef->PrintData();

        delete(collegeRef);
    }

    else if(choice > 2)
    {
        Department* departmentRef = accesRef->getDepartmentData();
        departmentRef->PrintData();

        delete(departmentRef);
    }
}
