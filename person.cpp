//Bank System
// Bank can have: Funds Available, BankAccounts, Employees (Manager, Owner, Security guard), Customer, address..
// BankAccount: Account numbers/IBAN , BIC, Customer.
// + Address: name, houseNumber, street, City, zipCode, country, mobileNumber.
// + Mobile Number: countryCode, number.
// + Person: Name, age, Social ID, address.
// Employee: Employee ID, company Name, numberOfDaysWorkingHere, experienceInMonths.
// we'll work on this everyday..

class Person
{
	public:
		string name;
		int age;
		long socialID;
		string address;
	private:
		void setname(string name)
		{
			this->name=name;
		}
		void setage(int age)
		{
			this->age=age;
		}
		void setsocialID(long socialID)
		{
			this->socialID=socialID;
		}
		void setaddress(string address)
		{
			this->address=address;
		}
		string getname()
		{
			return name;
		}
		int getage()
		{
			return age;
		}
		long getsocialID()
		{
			return socialID;
		}
		string getaddress()
		{
			return address;
		}
};
