#pragma once
class Car
{
	string _make;
	string _model;
	short _year;
public:
	Car(string make, string model, short year) 
	{
		this->_make = make;
		this->_model = model;
		this->_year = year;
	
	}

	string& getMake() 
	{
		return _make;
	}

	string& getModel() 
	{ 
		return _model;
	}

	short& getYear()
	{ 
		return _year; 
	}

	friend ostream& operator<<(ostream& output, const Car& c);
};

ostream& operator<<(ostream& output, const Car& c)
{
	cout << "Make: " << c._make << endl
		<< "Model: " << c._model << endl
		<< "Year: " << c._year << endl;
	return output;
}