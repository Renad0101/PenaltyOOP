#pragma once
class Penalty
{
	short _id;
	string _text;
	string _dateTime;
	double _price;
public:
	Penalty(short id, string text, string dateTime, double price)
	{
		this->_id = id;
		this->_text = text;
		this->_dateTime = dateTime;
		this->_price = price;
	}

	short& getId() 
	{
		return _id;
	}

	string gettext()const 
	{ 
		return _text;
	}

	string getDateTime()const 
	{
		return _dateTime;
	}

	double getPrice()const 
	{
		return _price; 
	}

	friend ostream& operator<<(ostream& output, const Penalty& penal);
};
ostream& operator<<(ostream& output, const Penalty& penal)
{
	cout << "Id: " << penal._id << endl
		<< "Text: " << penal._text << endl
		<< "Date time: " << penal._dateTime << endl
		<< "Price: " << penal._price << endl;
	return output;
}