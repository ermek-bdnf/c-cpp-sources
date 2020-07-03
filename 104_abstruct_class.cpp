//104. abstract. virtual. override.

#include<iostream>
#include<string>

using namespace std;

//abstract class
class Weapon
{
	public:
		virtual void Shoot() = 0; //purely virtual function
		void Foo()
		{
			cout << "Foo()" << endl;
		}
};

class A
{
	public:
		A()
		{
			msg = "empty message";
		}
		
		A(string msg) //New World Order
		{
			this->msg = msg;
		}
		
		void PrintMsg()
		{
			cout << msg << endl;
		}
	
	private:
		string msg;	
		
};

class B : public A
{
	public:
		B():A("N e w  W o r l d  O r d e r") //PrintMsg() -> A(string msg)
		{
			
		}
		
};

class Gun : public Weapon
{
	public:
		void Shoot() override
		{
			cout << "Gun BANG!!" << endl;
		}
};

class SubMachineGun : public Gun
{
	public:
		void Shoot() override
		{
			cout << "SubMachineGun BANG!! BANG!! BANG!!" << endl;
		}  
};

class Bazooka : public Weapon
{
	public:
		void Shoot() override
		{
			cout << "Bazooka BANG!!" << endl;
		}  
};

class Blaster : public Weapon
{
	public:
		void Shoot() override
		{
			cout << "BLASTER WUG!WUG!" << endl;
		}
};

class Player
{
	public:
		void Shoot(Weapon *weapon)
		{
			weapon->Shoot();
		}
		
		/*
		public:
		void Shoot(SubMachineGun *sub)
		{
			sub->Shoot();
		}
		*/
};

int main()
{
	//Weapon weapon;
	
	
	Blaster blaster;
	//Gun gun;
	//SubMachineGun sub;
	//Bazooka baz;
	
	Player player;
	player.Shoot(&blaster);
	//player.Shoot(&gun);
	//player.Shoot(&sub);
	
	//Player player;
	//player.Shoot(&gun);
	
	//gun.Shoot();
	//SubMachineGun sub;
	//Gun *weapon = &sub;
	//weapon->Shoot(); //BANG!! BANG!! BANG!!
	
	//Gun *weapon = &gun;
	//weapon->Shoot(); //BANG!!
	
	//sub.Shoot();	
	
	//polymorphism
	/*
	Gun gun;
	Gun *weapon = &gun;
	*/
	return 0;
}
