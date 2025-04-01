# Jogo de Cartas de Cidades

Descrição

Este programa em C permite comparar duas cartas de cidades com base em diversos atributos, como população, PIB, área, densidade populacional, pontos turísticos e um "super poder" calculado a partir desses dados. O objetivo é determinar qual carta tem melhores estatísticas em cada categoria.

Como Funciona

O programa solicita ao usuário que insira informações sobre duas cartas de cidades.

Os seguintes atributos são inseridos para cada carta:

Estado (A-H)

Código da carta (ex: A01)

Nome da cidade

População

Área (em km²)

PIB (em bilhões de reais)

Número de pontos turísticos

O programa calcula:

Densidade populacional (população / área)

PIB per capita (PIB / população)

Super poder (uma métrica combinada de todos os atributos)

As cartas são comparadas para determinar a vencedora em cada categoria.

Os resultados são exibidos no console.

Como Compilar e Executar

Salve o código em um arquivo cartas_cidades.c.

Compile o programa usando um compilador como gcc:

gcc cartas_cidades.c -o cartas_cidades

Execute o programa:

./cartas_cidades

Exemplo de Entrada e Saída

Entrada:

Digite o estado da primeira carta (A-H): A
Digite o código da primeira carta (ex: A01): A01
Digite o nome da cidade:
São Paulo
Digite a população:
12000000
Digite a área (em km²):
1521
Digite o PIB (em bilhões de reais):
699
Digite o número de pontos turísticos:
50

Saída:

Comparação de Cartas:
População: Carta 1 venceu (1)
Área: Carta 2 venceu (0)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 2 venceu (0)
Densidade Populacional: Carta 1 venceu (1)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)

