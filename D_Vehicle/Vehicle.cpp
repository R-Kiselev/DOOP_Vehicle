#include <iostream>
#include <vector>

class vehicle {
public :
	vehicle(int v_velocity = 0, std::string v_color = "white") {
		std::cout << "Vehicle created" <<std::endl;
		int velocity = v_velocity;
		std::string color = v_color;
	}
	int velocity = 0;
	virtual void move() {
		std::cout << "noise" << std::endl;
	}
};

class car : public vehicle {
public : 
	car(int velocity = 0, std::string color = "white") : vehicle{ velocity, color } {
		std::cout << "car created" << std::endl ;
	}
	void move() override {
		velocity += 10;
		std::cout << "Brrr" << std::endl;
	}
};

class boat : public vehicle {
public :
	boat(int velocity = 0, std::string color = "white") : vehicle{ velocity, color } {
		std::cout << "boat created" << std::endl ;
	}
	void move() override {
		velocity += 2;
		std::cout << "vsh vsh" << std::endl;
	}
};

class plane : public vehicle {
public :
	plane(int velocity = 0, std::string color = "white") : vehicle{ velocity, color } {
		std::cout << "plane created" << std::endl;
	}
	void move() override {
		velocity += 100;
		std::cout << "vzhuhh" << std::endl ;
	}
};

int main() {
	std::vector <vehicle*> vehicles;

	plane Boeing777(0,"red");
	vehicles.push_back(&Boeing777);
	car Tesla(50, "dark");
	vehicles.push_back(&Tesla);
	boat Titanic(10, "dark");
	vehicles.push_back(&Titanic);

	std::cout << std::endl;

	for (int i = 0; i < vehicles.size(); i++) {
		vehicles[i]->move();
	}
}	