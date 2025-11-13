#include <iostream>
#include <string>

class Mensagem {
public:
	virtual void enviar() {
		std::cout << "Enviando mensagem!" << std::endl;
	}
};

class MensagemTexto : public Mensagem {
	void enviar() override {
		std::cout << "Enviando texto: ola mundo!" << std::endl;
	}
};

class MensagemVoz : public Mensagem {
	void enviar() override {
		std::cout << "Enviando audio de 17s..." << std::endl;
	}
};

class MensagemImagem : public Mensagem {
	void enviar() override {
		std::cout << "Enviando imagem (2048x1080)..." << std::endl;
	}
};

int main() {
	MensagemTexto mt1;
	MensagemVoz mv1;
	MensagemImagem mi1;
	MensagemTexto mt2;
	MensagemImagem mi2;

	Mensagem* mensagens[5] = { &mt1, &mv1, &mi1, &mt2, &mi2 };
	for (Mensagem* m : mensagens) {
		m->enviar();
	}

	return 0;
}