#ifndef MONSTER_H
#define MONSTER_H

class Monster
{
private:
	std::string name_ = "none";
	int speed_ = 0;
	int hp_ = 0;
	int def_ = 0;
	int atk_ = 0;

public:
	Monster() = default;
	Monster(std::string name) : name_(name) {} // not relevant for the formative project
	Monster(std::string name, int speed, int hp, int def, int atk);

	~Monster(); // not relevant for the formative project

	int Hp() { return hp_; }
	std::string get_name() { return name_; }


	void TellTheName();// not relevant for the formative project
	void TellTheName(std::string race);// not relevant for the formative project

	void GetDamage(int damage);
	void Heal(int heal_value);// not relevant for the formative project

	bool IsAlive();

};
#endif // MONSTER_H
