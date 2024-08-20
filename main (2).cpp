#include <iostream>
#include <string>
#include <random>

class Sapo {
public:
    std::string nome;
    int identificador;
    int distanciaPercorrida;
    int quantidadePulos;
    int provasDisputadas;
    int vitorias;
    int empates;
    int quantidadeTotalPulos;

    static int distanciaTotalCorrida;

    Sapo(std::string nome, int identificador) {
        this->nome = nome;
        this->identificador = identificador;
        distanciaPercorrida = 0;
        quantidadePulos = 0;
        provasDisputadas = 0;
        vitorias = 0;
        empates = 0;
        quantidadeTotalPulos = 0;
    }

    void pular() {
        // gera um número aleatório entre 1 e o máximo que o sapo pode saltar (ajuste conforme necessário)
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 5); // ajustar o máximo aqui
        int distanciaPulo = dis(gen);

        distanciaPercorrida += distanciaPulo;
        quantidadePulos++;
        quantidadeTotalPulos++;
    }

    // ... getters e setters ...
};

int Sapo::distanciaTotalCorrida = 100; // define a distância total da corrida

// função para realizar a corrida
void realizarCorrida(std::vector<Sapo>& sapos) {
    while (true) {
        // cada sapo pula
        for (Sapo& sapo : sapos) {
            sapo.pular();

            // verifica se algum sapo chegou à linha de chegada
            if (sapo.distanciaPercorrida >= Sapo::distanciaTotalCorrida) {
                // implementar lógica para determinar o vencedor e atualizar estatísticas
                std::cout << "O sapo " << sapo.nome << " venceu a corrida!" << std::endl;
                // ...
                return;
            }
        }
    }
}

int main() {
    // criar os sapos
    std::vector<Sapo> sapos;
    sapos.push_back(Sapo("CrazyFrog", 1));
    sapos.push_back(Sapo("Cururu", 2));
    // ...

    // realizar a corrida
    realizarCorrida(sapos);

    return 0;
}