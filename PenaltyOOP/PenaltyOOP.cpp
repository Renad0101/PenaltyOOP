#include <iostream>
#include<map>
#include<vector>

using namespace std;

#include"penaltyy.h"
#include"Car.h"

int main()
{
	map<Car*, vector<Penalty>> penalties;



	Car car1("Toyota", "Prado", 2008);
	Car car2("Mercedes", "C-200", 1999);
	Car car3("Infinity", "Fx-35", 2006);



	penalties[&car1].push_back(Penalty{ 1,"Double Line","10.05.2022",60 });
	penalties[&car1].push_back(Penalty{ 2,"Red Light","20.05.2022",500 });


	penalties[&car2].push_back(Penalty{ 1,"Red light","30.05.2022",100 });
	penalties[&car2].push_back(Penalty{ 2,"Double Line","05.06.2022",50 });
	penalties[&car2].push_back(Penalty{ 3,"Parking","15.06.2022",90 });


	penalties[&car3].push_back(Penalty{ 1,"Parking","15.06.2022",120 });
	penalties[&car3].push_back(Penalty{ 2,"Red Light","05.07.2022",200 });
	penalties[&car3].push_back(Penalty{ 3,"Speed","15.07.2022",300 });



	for (auto& p : penalties)
	{
		cout << "*********************  CAR  ********************** ===" << endl;
		cout << *p.first << endl;
		cout << "*********************   Penalties   *****************" << endl;
		for (size_t i = 0; i < p.second.size(); i++)
		{
			cout << p.second[i] << endl;
		}
	}


}