#include<iostream>
#include<vector>
using namespace std;

class Temp{

	double Cels,Fahr;
	public: 
		Temp(){
	
		}
	Temp(double c,double f){
		try{
			if(c > 100 || f > 100){
				throw 'e';
			}
			else{
				Cels=c;
				Fahr=f;
			}
		}
		catch(char){
			cout<<"Enter both Celsius and Fahrenheit less than 100"<<endl;
		}
		
	}
	
	Temp operator +(Temp &obj){
		Temp res;
		res.Cels = Cels + obj.Cels;
		res.Fahr = Fahr + obj.Fahr;
		return res;
	}

	double CelsiusToFahrenheit( ){
		Fahr = (Cels * 1.8 + 32);
		return  Fahr;
	}

	double FahrenheitToCelsius( ){
		Cels = ((Fahr - 32)/1.8);
		return  Cels;
	}
	
	
};

int main(){
	Temp T[10];
	vector<Temp> Temp_vect;

	for(int i=0; i<10; i++)
	{
		T[i] = Temp(5*i,7*i);
		Temp_vect.push_back(T[i]);
	}

	cout<<"Fahrenheit Temperature of first five Temperatures :"<<endl;
	for(int j=0; j<5; j++)
	{
		cout<<T[j].CelsiusToFahrenheit()<<endl;
	}


	cout<<"Celsius Temperature of last five Temperatures :"<<endl;
	vector<Temp>::iterator i;
	for(i = Temp_vect.begin()+5; i < Temp_vect.end(); i++)
	{
		cout<<i->FahrenheitToCelsius( )<<endl;
	}

	return 0;
}