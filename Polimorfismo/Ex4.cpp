//#include <iostream>
//#include <string>
//
//class Pagamento {
//public:
//	virtual void processar() {
//		std::cout << "Processando..." << std::endl;
//	}
//};
//
//class PagamentoPix : public Pagamento {
//public:
//	void processar() override {
//		std::cout << "Processando transferencia instantanea." << std::endl;
//	}
//};
//
//class PagamentoCartaoCredito : public Pagamento {
//public:
//	void processar() override {
//		std::cout << "Autorizando transacao via operadora." << std::endl;
//	}
//};
//
//class PagamentoBoleto : public Pagamento {
//public:
//	void processar() override {
//		std::cout << "Registrando boleto em banco." << std::endl;
//	}
//};
//
//int main() {
//	
//	PagamentoPix pix;
//	PagamentoCartaoCredito cartao;
//	PagamentoBoleto boleto;
//
//	Pagamento* pagamentos[] = { &pix, &cartao, &boleto };
//	for (Pagamento* p : pagamentos) {
//		p->processar();
//	}
//
//	return 0;
//}

