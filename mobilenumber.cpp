//Bank System
// Bank can have: Funds Available, BankAccounts, Employees (Manager, Owner, Security guard), Customer, address..
// BankAccount: Account numbers/IBAN , BIC, Customer.
// + Address: name, houseNumber, street, City, zipCode, country, mobileNumber.
// + Mobile Number: countryCode, number.
// + Person: Name, age, Social ID, address.
// Employee: Employee ID, company Name, numberOfDaysWorkingHere, experienceInMonths.
// we'll work on this everyday..

class Mobilenumber
{
	public:
		long countrycode;
		long number;
	private:
		void setcountrycode(long countrycode)
		{
			this->countrycode=countrycode;
		}
		void setnumber(long number)
		{
			this->number=number;
		}
		long getcountrycode()
		{
			return countrycode;
		}
		long getnumber()
		{
			return number;
		}
};
