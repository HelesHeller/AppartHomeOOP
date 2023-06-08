#pragma once
class Human
{
private:
	char* name;

public:
	//Constructors
	Human();
	Human(const char* name);
	Human(const Human& other);

	//Destruct
	~Human();

	//Methods of access
	const char* getName() const;
};

