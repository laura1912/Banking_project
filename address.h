//Bank System
// Bank can have: Funds Available, BankAccounts, Employees (Manager, Owner, Security guard), Customer, address..
// BankAccount: Account numbers/IBAN , BIC, Customer.
// + Address: name, houseNumber, street, City, zipCode, country, mobileNumber.
// + Mobile Number: countryCode, number.
// + Person: Name, age, Social ID, address.
// Employee: Employee ID, company Name, numberOfDaysWorkingHere, experienceInMonths.
// we'll work on this everyday..


class Address 
{
	public:
		string name;
		int housenumber;
		string street;
		string city;
		int zipcode;
		string country;
		long mobilenumber;
	private:
		void setname(string name)
		{
			this->name=name;
		}
		void sethousenumber(int housenumber)
		{
			this->housenumber=housenumber;
		}
		void setstreet(string street)
		{
			this->street=street;
		}
		void setcity(string city)
		{
			this->city=city;
		}
		void setzipcode(int zipcode)
		{
			this->zipcode=zipcode;
		}
		void setcountry(string country)
		{
			this->country=country;
		}
		void setmobilenumber(long mobilenumber)
		{
			this->mobilenumber=mobilenumber;
		}
		string getname()
		{
			return name;
		}
		int gethousenumber()
		{
			return housenumber;
		}
		string getstreet()
		{
			return street;
		}
		string getcity()
		{
			return city;
		}
		int getzipcode()
		{
			return zipcode;
		}
		string getcountry()
		{
			return country;
		}
		long getmobilenumber()
		{
			return mobilenumber;
		}
}
