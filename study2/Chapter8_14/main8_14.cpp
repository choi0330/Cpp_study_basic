// Nested types
#include <iostream>

using namespace std;

class Fruit
{
public:
	enum class FruitType
	{
		APPLE, BANANA, CHERRY,
	};

	class Innerclass
	{

	};

	struct Innerstruct
	{

	};
	
private:
	FruitType m_type;

public:
	Fruit(FruitType type)
		:m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::FruitType::CHERRY);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		cout << "Apple" << endl;
	}
	else cout << "not apple" << endl;
}