// Pure virtual function, Abstract class, Interface class

#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(string name)
		:m_name(name)
	{}

public:
	string getName() { return m_name; }

	virtual void speak() const = 0; // pure virtual function
};

//void Animal::speak() const
//{
//	cout << m_name << "? ? ?" << endl;
//}

class Cat : public Animal
{
public:
	Cat(string name)
		:Animal(name)
	{}

	virtual void speak() const
	{
		cout << m_name << " Meow " << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		:Animal(name)
	{}

	virtual void speak() const
	{
		cout << m_name << " Woof " << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		:Animal(name)
	{}
	virtual void speak() const override
	{
		cout << " Mooo " << endl;
	}
};

class IErrorLog // Interface class
{
public:
	virtual bool reportError(const char * errorMessage) = 0;

	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
	// default constructor
	bool reportError(const char * errorMessage)	override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
	// default destructor
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessage)	override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void doSomething(IErrorLog & log)
{
	log.reportError("Runtime error!");
}

int main()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);








	//Animal ani("Hi"); // not allowed due to pure virtual function
	//ani.speak();

	//Cow cow("diacow"); // not allowed if class Cow doesn't override the pure abstract function
	//cow.speak();

	return 0;
}
