#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class bad_inputs{};

double ctok(double c)
{
  //convert celsius to kelvin
  if(!cin) throw bad_inputs{};
  return c+273.15;  
}
double ktoc(double k)
{
  //convert kelvin to celsius
  if(!cin) throw bad_inputs{};
  return k-273.15;
}
double ftoc(double f)
{
  //convert fahrenheit to celsius and celsius to fahrenheit
  if(!cin) throw bad_inputs{};
  return (f-32)*5/9;

}
double ctof(double c2)
{
  //convert celsius to fahrenheit
  if(!cin) throw bad_inputs{};
  return (c2*1.8)+32;
}

int main()
{
    //pair detection to convert
  double val;  
  int pair;
  cout<<"Choose pair of value you want to convert"<<endl;
  cout<<"(1 for celsius to kelvin and 2 for kelvin to celsius)"<<endl;
  cout<<"(3 for fahrenheit to celsius and 4 for celsius to fahrenheit)"<<endl;
  cin>>pair;
  switch (pair)
  {
  case 1:
    cout<<"Please enter the value you want to convert (celsius to kelvin)"<<endl;
    cin>>val;
    if(val<-273.15) cout<<"WARNING: Your value is below the absolute zero"<<endl;
    try{
      cout<<val <<" celsius degree equals: "<<ctok(val)<<" kelvin"<<endl;
    }catch(bad_inputs){
      cout<<"Bad input for ctok()";
    }
    catch(...){
      cout<<"Unexpected error occured for ctok()";
    } 
    break;
  case 2:
    cout<<"Please enter the value you want to convert (kelvin to celsius)"<<endl;
    cin>>val;
    try{
      cout<<val <<" kelvin equals: "<<ktoc(val)<<" celsius degree"<<endl;
    }catch(bad_inputs){
      cout<<"Bad input for ktoc()";
    }
    catch(...){
      cout<<"Unexpected error occured for ktoc()";
    } 
    break;
  case 3:
    cout<<"Please enter the value you want to convert (fahrenheit to celsius)"<<endl;
    cin>>val;
    try{
      cout<<val <<" fahrenheit equals: "<<ftoc(val)<<" celsius degree"<<endl;
    }catch(bad_inputs){
      cout<<"Bad input for ftoc()";
    }
    catch(...){
      cout<<"Unexpected error occured for ftoc()";
    }
    break;
  case 4:
    cout<<"Please enter the value you want to convert (celsius to fahrenheit)"<<endl;
    cin>>val;
    try{
      cout<<val <<" celsius degree equals: "<<ctof(val) <<"fahrenheit"<<endl;
    }catch(bad_inputs){
      cout<<"Bad input for ctof()";
    }
    catch(...){
      cout<<"Unexpected error occured for ctof()";
    } 
    break;
    default:
    cout<<"You have entered an undifened pair";
    break;
  } 

  } 