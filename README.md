# Lista
Resolução do exercício de fixação sobre listas.

<div style="display: inline-block;">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> 
<img src="https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white"/> 
<img src="https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white"/> 
</a> 
</div>

# Problema 1: Listas
<div align="justify">
Considerando nossos modelos de lista (i.e., linear e dinâmica), realize as solicitações de implementação a seguir, considerando para isso estruturar sua solução da seguinte forma: 
  <p></p>
  <p>i) Uma implementação por letra e; </p>
  <p>ii) Uma implementação magma que conecte todas as letras por um único menu para execução.</p>
<ul style="none">
<li> Escreva uma função recursiva e outra não recursiva para contar o número de elementos pares e impares contidos em uma lista dinâmica. </li>
 
 <li>Crie uma função que simule um pequeno jogo que utiliza duas listas (i.e., L1 e L2). Nesse, cada lista possui tamanho máximo de 3 entradas e cada posição deve armazenar um número inteiro aleatório entre 1 e 13. Nesse jogo, após preencher ambas as listas, selecione também de forma aleatória mais um valor entre 1 e 13 e mostre-o na tela. A regra do jogo é a seguinte: Ambas as listas devem ser apresentadas por leitura sequencial a partir de suas posições de paridade, ou seja, {{L1[0], L2[0]}, {L1[1], L2[1]}, {L1[2], L2[2]}}. Cada par deve ser subtraído do valor apresentado e ganha o jogo a lista que apresentar a maior soma final. Mostre o ganhador ao final.</li>
 
 <li>Escreva uma função que receba duas listas x = [x1, x2, . . . , xn] e y = [y1, y2, . . . , yn] e retorne uma lista z = [(x1, yn),(x2, yn−1, . . . ,(xn, y1)]. Ao final, as listas x e y devem estar vazias.</li>
 
 <li>Escreva uma função que receba pares de listas x = [x1, x2, . . . , xn] e y = [y1, y2, . . . , ym] com n, m > 0 e n = m. Calcule a distância euclidiâna entre os múltiplos pares recebidos e encontre os k pares mais próximos.</li>
  </ul>
</div>

## Lógica
Uma lista é uma coleção de elementos do mesmo tipo dispostos linearmente
que podem ou não seguir determinada organização, por exemplo: [E1, E2, E3,
E4, E5,.....En], onde n deve ser >=0. 





# Compilação e Execução

O algoritmo de listas disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

| Comando                |  Função                                                                                           |
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |


# Funções principais:

ImparPar(): Função não recursiva que apresenta a quatidade de números ímpares e pares em uma lista.
Jogo(): Função que cria 2 listas de três posições aleatórias, em seguida subtrai de cada uma um número também aleatório, vence a lista cuja soma total final for maior.
listaZ(Lista X, Lista Y): Recebe duas lista e cria uma nova a partir destas de forma que suas posições sejam x0, yn, x1, yn-1 ... xn, y0.
Pares(Lista X, Lista Y, int k): Recebe duas listas e calcula o as distâncias euclidianas exibindo os k pares de meno distância.
