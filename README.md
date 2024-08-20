# Simulação de Corrida de Sapos

Este projeto é uma simulação simples de corrida de sapos em C++. O programa simula uma corrida entre sapos, onde cada sapo dá pulos aleatórios até alcançar uma distância definida. O primeiro sapo a atingir a linha de chegada é declarado vencedor.

## Descrição

O código define uma classe `Sapo` que representa um sapo participante na corrida. Cada sapo tem um nome, identificador e diversos atributos para acompanhar seu desempenho durante a corrida. A distância total da corrida é definida como 100 unidades.

### Funcionalidades

- **Classe `Sapo`**:
  - **Atributos**:
    - `nome`: Nome do sapo.
    - `identificador`: Identificador único do sapo.
    - `distanciaPercorrida`: Distância total percorrida pelo sapo durante a corrida.
    - `quantidadePulos`: Número total de pulos dados pelo sapo.
    - `provasDisputadas`: Número total de corridas disputadas pelo sapo.
    - `vitorias`: Número total de vitórias do sapo.
    - `empates`: Número total de empates do sapo.
    - `quantidadeTotalPulos`: Quantidade total de pulos dados por todos os sapos.
    - `distanciaTotalCorrida`: Distância total da corrida (definida como 100 unidades).
  - **Métodos**:
    - `pular()`: Incrementa a distância percorrida do sapo de forma aleatória, entre 1 e 5 unidades.
    - Getters e setters para acessar e modificar os atributos.

- **Função `realizarCorrida()`**:
  - Simula a corrida entre todos os sapos até que pelo menos um sapo atinja a distância total da corrida.
  - Declara o vencedor da corrida.

## Compilação e Execução

Para compilar e executar o código, siga estes passos:

1. **Compilar o Código**:
   - Utilize um compilador C++ para compilar o código. Por exemplo, com `g++`:
     ```sh
     g++ -o corrida_sapos corrida_sapos.cpp
     ```

2. **Executar o Programa**:
   - Execute o programa compilado:
     ```sh
     ./corrida_sapos
     ```

3. **Adicionar Mais Sapos**:
   - Para adicionar mais sapos à corrida, modifique a função `main()` e adicione novas instâncias de `Sapo` ao vetor `sapos`.

   ```cpp
   std::vector<Sapo> sapos = { Sapo("CrazyFrog", 1), Sapo("Cururu", 2), Sapo("Sapinho", 3) };
