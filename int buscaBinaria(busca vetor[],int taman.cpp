int buscaBinaria(busca vetor[],int tamanho,int excluirID){        //busca binaria para achar o id do celular a ser excluido
	  int posicaomeio, posicaoinicio = 0, posicaofinal = tamanho - 1;
  	bool verif = false;                                               //variavel para descobrir se achou o id

  	while (posicaoinicio<=posicaofinal){                               

    		posicaomeio = (posicaoinicio + posicaofinal) / 2;

		if (vetor[posicaomeio].id == excluirID){
      			posicaoinicio = posicaofinal + 1;              //para sair do laco
      			verif = true;
    		}

    		else if (vetor[posicaomeio].id < excluirID){
      			posicaoinicio = posicaomeio + 1;
    		}

   		else {
      			posicaofinal = posicaomeio - 1;
    		}
  	}
  	if (verif==true)             //se achou, retorna onde
    		return posicaomeio; 
  	else 
    		return -1;                 //se nao achou, retorna -1 (invalido)