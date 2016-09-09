//Name: 
//class:

//Description: This program ask user for distances in kilometer and gasoline used in litres, and it  converts given inouts into miles and gallon. Then it output result in MPG(miles per gallon). It show outputs in floating point
//Pre-condition: input must be an integer
//post-condition: none


#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main()

{
//Description: Kilometer1, kilometer2, and litres are to be input from user. Gallon, distance, distance, miles, and MPG are to be calculated values. 
  int kilometer1;
  int kilometer2;
  int litres;
  double gallon;
  double distance;
  double miles;;
  double MPG;
  
//It format to 2 decimals
  cout<< fixed << showpoint <<setprecision(2);
  

//ask user for kilometer inputs
  cout<<" Enter distance in kilonmeter car travelled: ";
//assign input as kilometer1
  cin>>kilometer1;

//ask user for kilometer inputs 
  cout<<" Enter the number of kilometer car has travelled:  ";
//assign input as kilometer1
  cin>> kilometer2;


  if (kilometer2<kilometer1)
    cout<<"Enter number of kilometer travelled by car!!!: ";
    cin>>kilometer2;
  else
    cin>>kilometer2;
  
//calculate distance travelled by car
  distance=(kilometer2-kilometer1);

//output distance travelled by a car 
  cout<<" Distance travelled by a car: "<<distance<<endl;

//convert distance into miles
  miles=(distance/1.60934);
  cout<<"Distance travlled by a car in miles: "<<miles<<endl;
  

  cout<<" Enter the number of gasoline used in litres: ";
  cin >>litres;

//convert litres into gallon
  gallon=litres/3.78541;
  cout<<" Gallon used while travelling: "<<gallon<<endl;
 

//calculate MPG(miles per gallon)
  MPG=(miles/gallon);

//output required calculation of MPG
  cout<<" Required MPG:  "<<MPG<<endl; 
  
  return 0;

}
    
   
  
