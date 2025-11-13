#include <iostream>
#include <string>

class Mutante {
public:
	virtual void usarPoder() {
		std::cout << "Usando poder...."<<std::endl;
	}
};

class Wolverine : public Mutante {
public:
	void usarPoder() override {
		std::cout << "Ativando garras de adamantium!" << std::endl;
	}
};

class JeanGrey : public Mutante {
public:
	void usarPoder() override {
		std::cout << "Telepatia e telecinese ativadas!" << std::endl;
	}
};

class Noturno : public Mutante {
public:
	void usarPoder() override {
		std::cout << "BAMF! Teletransportando..." << std::endl;
	}
};

int main() {
	
	Wolverine w1;
	JeanGrey j1;
	Noturno n1;

	Mutante* mutantes[3] = {&w1, &j1, &n1};
	for (Mutante* m : mutantes) {
		m->usarPoder();
	}

	return 0;
}
