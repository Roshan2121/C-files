#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

class Monster
{
public:
	enum MonsterType
	{
		DRAGON,
		GOBLIN,
		OGRE,
		ORC,
		SKELETON,
		MAX_MONSTER_TYPES,
	};
	
private:	
	int m_type;
	string m_name;
	string m_roar;
	int m_hitPoints;

public:
	Monster(int type, string name, string roar, int hitPoints)
	{
		m_type = type;
		m_name = name;
		m_roar = roar;
		m_hitPoints = hitPoints;
	}
	
	string getTypeString()
	{
		string type;
		if(m_type == DRAGON)
			type = "Dragon";
		else if(m_type == GOBLIN)
			type = "Goblin";
		else if(m_type == OGRE)
			type = "Ogre";
		else if(m_type == ORC)
			type = "Orc";
		else if(m_type == SKELETON)
			type = "Skeleton";	
		return type;				
	}
	
	void print(string type)
	{
		cout<<m_name<<" the "<<type<<" has "<<m_hitPoints<<" hit points and says "<<m_roar;
	}
};

int generatorType()
{
	int number;
	srand(static_cast<unsigned int>(time(NULL)));
	number = rand() % Monster::MAX_MONSTER_TYPES;
	return number;
}

int generatorHitPoint()
{
	int number;
	srand(static_cast<unsigned int>(time(NULL)));
	number = 1 + rand() % 100;
	return number;
}

int generatorName()
{
	int number;
	string name;
	srand(static_cast<unsigned int>(time(NULL)));
	number = rand() % 6;
	return number;
}

int main()
{
	int number = generatorType();
	int hitPoint = generatorHitPoint();
	string names[6] = {"Green", "Chinnu", "Roshu", "Mike", "Mine", "Shine"};
	string roars[6] = {"Laugh", "Scream", "Hiss", "Mew", "Bark", "Cry"};
	int choice = generatorName();
	Monster character(number, names[choice], roars[choice], hitPoint);
	string type = character.getTypeString();
	character.print(type);
	return 0;
}