# Tabela Hash

[![Linguagem C](https://img.shields.io/badge/Linguagem-C-green.svg)](https://github.com/PedroLouback/TrabalhoFinal-Prog.2)
[![requirement](https://img.shields.io/badge/IDE-Visual%20Studio%20Code-informational)](https://code.visualstudio.com/docs/?dv=linux64_deb)
![ISO](https://img.shields.io/badge/ISO-Linux-blueviolet)

## Sumário

<ul align="left">
 <li><a href="#problema-proposto">Problema Proposto</a>  </li>
 <li><a href="#tabela-hash">Tabela Hash</a>  </li>
 <li><a href="#lógica">Lógica</a>  </li> 
 <li><a href="#resultados-e-análises">Resultados e Análises</a></li>
 <li><a href="#bibliotecas">Bibliotecas</a> </li>
  <li><a href="#compilação-e-execução">Compilação e Execução</a> </li>
</ul>

---

## Problema Proposto

Implementar dois tipos de tabela Hash:

- [X] Hash de Endereçamento Fechado;
- [X] Hash de Endereçamento Aberto por Hash Dupla;

<div align="justify">
O código deve ter um vetor de no mínimo 20 valores inteiros, os quais serão utilizados como entrada  para as duas estruturas que, por sua vez, são criadas com o dobro do tamanho do vetor (i.e., número primo maior que esse valor dobro). Feito isso, como resultado da execução deve-se apresentar o número de colisões ocorridas para ambas as estruturas quando o mesmo vetor é armazenado. Por fim, apresentar uma breve discussão dos motivos que levaram uma estrutura a apresentar melhores resultados. 
</div>

---

## Tabela Hash
<div align="justify">
Uma Tabela Hash (também conhecida como tabela de espalhamento ou tabela de dispersão) é uma estrutura de dados especial, que associa chaves de pesquisa de qualquer tipo a valores inteiros, através de uma função. Seu objetivo é, a partir de uma chave simples, fazer uma busca rápida e obter o valor desejado.
<p></p>
Na tabela hash, uma função de transformação recebe cada elemento da entrada e gera uma chave para ele, armazenando-o em uma dada posição da tabela, endereçada pela chave. Formalmente, essa função pode ser representada como h( Kj ) = [1, . . ., M], em que o subconjunto da entrada de tamanho M é mapeada na posição Kj da tabela.
</div>

---

### Função Hash
<p>Uma Função Hash é boa se:</p>
<ul>
  <li>Produz um número baixo de colisões;</li>
  <li>É facilmente computável;</li>
  <li>É uniforme, ou seja, com um tempo constante.</li>
</ul>

<div align="justify">
Em literatura, há diversas implementações de tal função, sendo algumas dessas o resto da divisão, meio do quadrado, método da dobra, método da multiplicação, hashing universal. Se a escolha de tal função for adequada ao conjunto e houver entradas suficiente para armazenar todos os elementos sem a repetição de chaves, o custo da pesquisa cairá para O(1). Vejamos um exemplo utilizando como função o resto da divisão para o conjunto de dados acima apresentado. Para este exemplo, considere a variável T como tamanho da tabela hash e "e" como o elemento a ser indexado.
<p align="center">
 <img src=images/funhash.png alt=funçãohash> 
</p>
Observe através do exemplo que se a função utilizada for adequada e houver espaço suficiente para armazenar um único elemento por posição a estrutura em hash pode alcançar tempos de O( 1 ), o qual se refere ao melhor tempo de execução / melhor caso. Em um caso médio teremos algo próximo de O( 1+N / T ) e no pior caso O( n ). Note pelo exemplo, que a função em questão mapeou mais de um elemento por posição, essa condição da-se o nome de colisão e a forma mais comum de trata-la é utilizando lista simplesmente encadeada como entrada de cada chave da tabela. Para completar o conhecimento, veja o conteúdo apresentado nos vídeos abaixo.
</div>

---

### Tabela Hash de Endereçamento Exterior
<div align="justify">
Utiliza uma lista encadeada para cada endereço da tabela, como na figura abaixo.
</div>
<div align="center">
<img src="images/ext.png" alt=endereçamentoexterior>
</div>

---

### Tabela Hash Dupla
<div align="justify">
Também chamada de re-hash, calcula o valor da Função Hash principal e caso o enderço estiver ocupado, aplica uma segunda função hash e tenta inserir novamente.
</div>
<div align="center">
<img src="images/dup.png" alt=dupla>
 </div>
 
---

## Lógica


---

## Resultados e Análises 


---

## Bibliotecas

<p>Para o funcionamento do programa, é necessário incluir as seguintes bibliotecas: 
<ul>
    <li><code>#include 'stdlib.h'</code></li>
    <li><code>#include 'stdio.h'</code></li>
    <li><code>#include 'stdbool.h'</code></li>
</ul>

---

## Compilação e Execução
<div align="justify">
O algoritmo disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:
</div>
<p></p>
<div align="center">

| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
</div>

---

## Contato

<div>
<p align="justify"> Thaissa Vitória</p>
<a href="https://t.me/thaissadaldegan">
<img align="center"  src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 

<a href="https://www.linkedin.com/in/thaissa-vitoria-daldegan-6a84b9153/">
<img align="center"  src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>
</div>

