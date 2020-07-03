//103. virtual. override. polymorphism

#include<iostream>
#include<string>

using namespace std;

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

class Gun
{
	public:
		virtual void Shoot()
		{
			cout << "BANG!!" << endl;
		}
};

class SubMachineGun : public Gun
{
	public:
		void Shoot() override
		{
			cout << "BANG!! BANG!! BANG!!" << endl;
		}  
};

class Bazooka : public Gun
{
	public:
		void Shoot() override
		{
			cout << "BANGBUB!!" << endl;
		}  
};

class Player
{
	public:
		void Shoot(Gun *gun)
		{
			gun->Shoot();
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
	//Gun gun;
	//SubMachineGun sub;
	Bazooka baz;
	
	Player player;
	player.Shoot(&baz); //BANGBUB!!
	//player.Shoot(&gun); //BANG!!
	//player.Shoot(&sub); //BANG!! BANG!! BANG!!
	
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
