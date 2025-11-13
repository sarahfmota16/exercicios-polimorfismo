//#include <iostream>
//#include <string>
//
//class Personagem {
//public:
//
//	std::string nome;
//	int vida;
//	std::string arma;
//
//	virtual void atacar() {
//		std::cout << "Ataque lendario!" << std::endl;
//	}
//
//	virtual void especial() {
//
//	}
//};
//
//class Mago : public Personagem {
//public:
//
//	void atacar() override {
//		std::cout << "Lancando bola de fogo!" << std::endl;
//	}
//
//	void especial() override {
//		std::cout << "Otimo! Voce usou o poder especial do Mago: +10 de vida!" << std::endl;
//		vida += 10;
//		std::cout << "Nivel vida atualizado: " << vida << std::endl;
//	}
//};
//
//class Guerreiro : public Personagem {
//public:
//
//
//	void atacar() override {
//		std::cout << "Golpeando com espada pesada!" << std::endl;
//	}
//
//	void especial() override {
//		std::cout << "Otimo! Voce usou o poder especial do Guerreiro: agora voce tera o titulo 'LENDARIO'!" << std::endl;
//		nome += " LENDARIO";
//		std::cout << "Irado! Agora voce se chama: " << nome << std::endl;
//	}
//};
//
//class Arqueiro : public Personagem {
//public:
//
//	void atacar() override {
//		std::cout << "Disparando flecha precisa!" << std::endl;
//	}
//
//	void especial() override {
//		std::cout << "Otimo! Voce usou o poder especial do Arqueiro: agora voce tera a arma SUPREMA!" << std::endl;
//		arma += " ARDENTE SUPREMA";
//		std::cout << "Nova arma desbloqueada com sucesso: " << arma << std::endl;
//	}
//};
//
//int main() {
//
//	Mago mago;
//	Guerreiro guerreiro;
//	Arqueiro arqueiro;
//
//	mago.nome = "PINK";
//	mago.vida = 40;
//	mago.arma = "Magia";
//
//	guerreiro.nome = "DOUG";
//	guerreiro.vida = 60;
//	guerreiro.arma = "Espada";
//
//	arqueiro.nome = "RON";
//	arqueiro.vida = 50;
//	arqueiro.arma = "Flecha";
//
//
//	std::cout << "------------- PERSONAGENS --------------" << std::endl;
//	std::cout << "\nMAGO: " << mago.nome << ", vida de: " << mago.vida << ", com arma " << mago.arma << std::endl;
//	std::cout << "GUERREIRO: " << guerreiro.nome << ", vida de: " << guerreiro.vida << ", com arma " << guerreiro.arma << std::endl;
//	std::cout << "ARQUEIRO: " << arqueiro.nome << ", vida de: " << arqueiro.vida << ", com arma " << arqueiro.arma << std::endl;
//
//	Personagem* personagens[3] = { &mago, &guerreiro, &arqueiro };
//
//	std::cout << "\n------------ INICIANDO BATALHA ------------\n" << std::endl;
//
//	for (Personagem* p : personagens) {
//		p->atacar();
//		std::cout << std::endl;
//	}
//
//	std::cout << "\n--------- USANDO PODERES ESPECIAIS ----------\n" << std::endl;
//
//	for (Personagem* p : personagens) {
//		p->especial();
//		std::cout << std::endl;
//	}
//
//	std::cout << "\n--------- END GAME | STATUS FINAL ----------" << std::endl;
//	std::cout << "\nMAGO: " << mago.nome << ", vida de: " << mago.vida << ", com arma " << mago.arma << std::endl;
//	std::cout << "GUERREIRO: " << guerreiro.nome << ", vida de: " << guerreiro.vida << ", com arma " << guerreiro.arma << std::endl;
//	std::cout << "ARQUEIRO: " << arqueiro.nome << ", vida de: " << arqueiro.vida << ", com arma " << arqueiro.arma << std::endl;
//
//	return 0;
//}