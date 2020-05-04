#include <ios>  
#include <iostream>  
 
using namespace std; 

int validateInt(int &);
double validateDouble(double &);


template <typename T>
T getValidatedInput()
{
   
    T result;
    cin >> result;

   
    if (cin.fail() || cin.get() != '\n')
    {
        
        cin.clear();

        while (cin.get() != '\n');

        throw ios_base::failure("Invalid input.");
    }

    return result;
}

//Function Definitions
int validateInt(int &intInput)
{
	while (true)
    {
        cout << "  ";

        try
        {
            intInput = getValidatedInput<int>();
        }
        catch (exception e)
        {
            cerr << e.what() << endl;
            continue;
        }

        break;
    }
    
    return intInput; 
}

double validateDouble(double &doubleInput)
{
	while (true)
    {
        cout << " ";

        try
        {
            doubleInput = getValidatedInput<double>();
        }
        catch (exception e)
        {
            cerr << e.what() << ": Invalid input."<< endl;
            continue;
        }

        break;
    }
    
    return doubleInput; 
}