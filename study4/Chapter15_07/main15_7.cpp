//Circular dependency issues // std::weak_ptr
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Person
{
	string m_name;
	//shared_ptr<Person> m_partner;// circular dependency issues
	weak_ptr<Person> m_partner;

public:
	Person(const string &name) : m_name(name)
	{
		cout << m_name << " created\n";
	}

	~Person()
	{
		cout << m_name << " destroyed\n";
	}

	friend bool partnerUp(shared_ptr<Person> &p1, shared_ptr<Person> &p2)
	{
		if (!p1 || !p2)
			return false;

		p1->m_partner = p2;
		p2->m_partner = p1;

		cout << p1->m_name << " is partnered with " << p2->m_name << "\n";

		return true;
	}

	const shared_ptr<Person> getPartner() const
	{
		return m_partner.lock(); // weak_ptr should be locked
	}

	const string & getName() const
	{
		return m_name;
	}
};

int main()
{
	auto lucy = make_shared<Person>("Lucy");
	auto ricky = make_shared<Person>("Ricky");

	partnerUp(lucy, ricky);

	cout << lucy->getPartner()->getName() << endl;
	return 0;
}

