#include<iostream>
#include<string>

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
	MonsterType m_type;
	string m_name;
	string m_roar;
	int m_hitPoints;

public:
	Monster(MonsterType type, string name, string roar, int hitPoints)
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

int main()
{
	Monster character(Monster::GOBLIN, "Green", "Laugh", 20);
	string type = character.getTypeString();
	character.print(type);
	return 0;
}