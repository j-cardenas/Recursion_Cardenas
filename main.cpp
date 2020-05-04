/*
Jesus Cardenas
Unit 7: Tower of Hanoi
Professor: Dr. Tyson McMillan 
Date: 5/3/2020
*/

#include <iostream>
#include "Input_Validation.h"
using namespace std;




/*Credit to Yusuf Shakeel who came up on my research
https://www.youtube.com/watch?v=5_6nsViVM00 */

void towerOfHanoi(int n, char beginning, char end, char aux);  

void factorialFunction();


  
/*******************Main Function**************************/
int main()  
{  
  int const t=4;
  system("clear");
  cout<<"\nPart 1\n\n";
  cout<< "**************************";
  cout  << " \nTower of Hanoi" << endl << endl;

  towerOfHanoi(t, 'A', 'C', 'B'); 

cout<< "**************************";


  cout << " \n\nPart 2" << endl << endl;
    factorialFunction();


    return 0;  
}



/*******************Tower of Hanoi**************************/
void towerOfHanoi(int n, char beginning, char end, char aux)  
{  
    if (n == 1)  
    {  
        cout << "Ring 1 " << beginning <<  
       " --> " << end << "\n" <<endl;  
      return;  
    }  
    towerOfHanoi(n - 1, beginning, aux, end);  
    cout << "Ring " << n <<" "<< beginning << 
     " --> " << end << "\n" << endl;  
    towerOfHanoi(n - 1, aux, end, beginning);  
    }


/*******************Factorial Function**************************/
void factorialFunction()
{
  int x;
  int factorial = 1; 
  cout << "Enter int value to be factored: ";
  x = validateInt(x);

  for(int i = 1; i <= x; i++) 
    {
      factorial = factorial *i;
    }
  cout << "Result is: "  << factorial << endl; 

}
  
