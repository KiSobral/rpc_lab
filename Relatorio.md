# Laboratório 1 Programação para Sistemas Paralelos e Distribuídos 2021.2

> Aluno: Hugo Sobral de Lima Salomão   
> Matrícula: 18/0018604   

> Aluno: Leonardo da Silva Gomes   
> Matrícula: 18/0021974

## Introdução

Esta atividade foi desenvolvida para entender os conceitos de RPC assim como botar em prática os assuntos relevantes tratados em ambiente de sala de aula virtual.

Além de funcionar como mecanismo fixador sobre RPC, este experimento funciona como ponte para a compreensão de características basicas de aplicações distribuidas por meio de buscas sequenciais simples em um vetor de tamanho fixado (10 posições).


## Execução do projeto

O código do cliente foi desenvolvido de maneira genérica o suficiente para poder executar tanto em um, quanto em dois hosts.

### Cenário A da especificação

Este cenário trata-se da execução do cliente com apenas um host. Para executar desta maneira é preciso passar apenas um parâmetro de host na execução do ```lab_client```.

1. Primeiro é necessário executar o stub do servidor:

```sh
./lab_server
```

2. Agora é necessário executar apenas o stub do cliente informando o localhost como único host:

```sh
./lab_client 127.0.0.1
```

### Cenário B da especificação

Este cenário trata-se da execução do cliente com dois hosts. Para executar desta maneira é preciso passar dois parâmetros de host na execução do ```lab_client```.

1. Primeiro é necessário copiar o projeto em uma segunda máquina, seja esta virtual ou um dispositivo real. Você pode encontrar o repositório para clone neste [link](https://github.com/KiSobral/rpc_lab).

2. Com o repositório clonado, é preciso rodar o stub do servidor na máquina auxiliar.

```sh
./lab_server
```

3. Agora, na máquina onde você ira executar o código do cliente, instancie o servidor com:

```sh
./lab_server
```

4. Agora é necessário executar apenas o stub do cliente informando o localhost e o host da segunda máquina:
```sh
./lab_client 127.0.0.1 <host_da_segunda_maquina>
```


## Opiniões

Um dos grandes desafios do laboratório foi a compreensão do formato XDR para definição dos procedimentos. Foi de certa forma desafiador conseguir encontrar uma maneira de tratar com arrays no IDF ```.x```. Porém, após a leitura da [documentação disponibilizada pela IBM](https://www.ibm.com/docs/en/aix/7.2?topic=representation-xdr-data-types), fomos capazes de definir todas as contraints necessárias para o desenvolvimento do projeto.

Outro obstáculos que tivemos de superar ao longo do laboratório foi a incapacidade de rodar dois serviços de server dentro de uma mesma máquina, já que o portmapper não permite que dois servidores RPC estejam rodando simultaneamente dentro de uma mesma máquina. Inicialmente enxergamos a ferramente Docker como opção viávelpara a resolução do problema, entretanto, este apresentou mais problemas do que soluções então descartamos usá-lo. Desta forma, nos utilizamos de VM's e de segundos computadores disponíveis para cada membro para fazer os testes do programa.

No geral, o laboratório foi de enorme importância para o entendimento acerca do formato RPC e para despertar a curiosidade acerca dos conteúdos relevantes para a matéria.