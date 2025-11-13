#include <iostream>
#include <string>

class CriaturaMagica {
public:
	virtual void emitirSom() {
		std::cout << "Emitindo sons de bicho..." << std::endl;
	}
};

class Grifo : public CriaturaMagica {
	void emitirSom() override {
		std::cout << "Rrrraaawwwwk! Kreeeeaaah!" << std::endl;
	}
};

class Dragao : public CriaturaMagica {
	void emitirSom() override {
		std::cout << "GROOAAARRR... FSHHHHHHHHHHHH!" << std::endl;
	}
};

class Fenix : public CriaturaMagica {
	void emitirSom() override {
		std::cout << "Ssshhhiiinnnngg... Riiisssssss..." << std::endl;
	}
};

void fazerBarulho(CriaturaMagica* c) {
	c->emitirSom();
}

int main() {

	Grifo g1;
	Dragao d1;
	Fenix f1;

	std::cout << "------------- MODO ARRAY --------------\n" << std::endl;

	CriaturaMagica* criaturas[3] = { &g1, &d1, &f1 };
	for (CriaturaMagica* c : criaturas) {
		c->emitirSom();
	}

	std::cout << "\n----------- MODO FUNCTION -------------\n" << std::endl;

	fazerBarulho(&g1);
	fazerBarulho(&d1);
	fazerBarulho(&f1);

	return 0;
}