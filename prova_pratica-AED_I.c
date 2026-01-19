#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100] , nome_novo[100], livro1[100], livro2[100], livro3[100];
    char senha [100], senha_nova[100]; 
    int  operacao, emprestimo, devolucao, size1=100, size2=100, atraso, multa, qnt_livros;

  
    printf("-----CADASTRO-----\n");
    
        printf("Crie seu usuario:");
        fgets(nome_novo,size1, stdin);
        nome_novo[strcspn(nome_novo, "\n")] = '\0'; 
        
        printf("Crie sua senha:"); 
        fgets(senha_nova ,size1, stdin);
        senha_nova[strcspn(senha_nova, "\n")] = '\0'; 

    printf("\nCadastro realizado com sucesso!\n");
    printf("------------------\n");
    
    do{
        printf("\n-----LOGIN-----\n");
        
        printf("Digite seu usuario:");
        fgets(nome,size1, stdin); 
        nome[strcspn(nome,"\n")] = '\0';  
        
        
        printf("Insira sua senha: ");
        fgets(senha ,size1, stdin);
        senha[strcspn(senha, "\n")] = '\0'; 

        
           if(strcmp(nome, nome_novo)!=0 || strcmp(senha, senha_nova)!=0 ){
           printf("Senha ou usuário incorretos, tente novamente! \n");
            } 
            
        
    }while(strcmp(nome, nome_novo)!=0 || strcmp(senha, senha_nova) !=0 );
    
    printf("\nLogin realizado com sucesso!  \n");
    printf("----------------");
    printf("\n O que você deseja fazer? Selecione a opção.\n");

    do{ 
        printf("\n-----MENU-----\n");
        printf("Consultar Livros___1\n");
        printf("Emprestar Livro____2\n"); 
        printf("Devolver Livro_____3\n");
        printf("Dados Cadastrais___4\n");
        printf("Simular Multa______5\n"); 
        printf("Cadastrar Livro____6\n"); 
        printf("Sair_______________7\n"); 
        
        scanf("%d", &operacao); 
        //getchar estragou essa parte :c 
        
        switch(operacao){
            
        case 1: 
            printf("\n-----CONSULTAR LIVROS-----\n");
            printf("A Redoma de Vidro - Sylvia Path\n");
            printf("Livro 2 - Autor \n");
            printf("Livro 3 - Autor\n"); 
        break; 
        
        case 2:
        
            printf("\n-----EMPRESTAR LIVROS-----\n");
            
                printf("Livro-1____________Digite 1\n"); 
                printf("Livro-2____________Digite 2\n"); 
                printf("Livro-3____________Digite 3\n"); 
         
            printf("Qual livro quer emprestar?Digite o número:\n");
            scanf("%d", &emprestimo );
          
            if(emprestimo==1){
                printf("Livro já emprestado! Escolha outro");
            } else if(emprestimo==2){
                printf("Livro emprestado!Devolva em 15 dias");
            }else 
               printf("Livro emprestado!Devolva em 15 dias"); 
        break;
        case 3:
            printf("\n-----DEVOLVER LIVROS-----\n"); 
                printf("Livro-1____________Digite 1\n"); 
                printf("Livro-2____________Digite 2\n"); 
                printf("Livro-3____________Digite 3\n");
            printf("Qual livro quer devolver?Digite o número:\n");
            
            scanf("%d", &devolucao); 
            if(devolucao==1){
                printf("Devolvido com sucesso!"); 
           } else 
                 printf("Esse livro não foi emprestado! Tente novamente..."); 
 
        
        break;
        
        case 4: 
            printf("\n-----DADOS CADASTRAIS-----\n");
            printf("Seus dados cadastrais são: \n");
            printf("Nome: %s\n", nome_novo);
            printf("Senha: %d\n", senha_nova); 
        break; 
        
        case 5:
        
            printf("\n-----SIMULAR MULTA-----\n"); 
            
            printf("Quantos dias você tem de atraso? \n"); 
            scanf("%d", &atraso); 
            
            multa=(atraso * 2); 
            
            printf("O valor da multa seria: R$ %d", multa); 
        break; 
        
        case 6: 
            printf("\n-----CADASTRAR LIVRO-----\n"); 
             
             
            printf("Quantos livros você quer cadastrar? "); 
            scanf("%d", &qnt_livros);
            getchar(); // Limpa o buffer de entrada
            
            if(qnt_livros==3){
                
                printf("Cadastre o nome do livro 1: ");
                    fgets(livro1,size1, stdin);
                    livro1[strcspn(livro1, "\n")] = '\0'; 

                printf("Cadastre o nome do livro 2: ");
                    fgets(livro2,size1, stdin);
                    livro2[strcspn(livro2, "\n")] = '\0'; 

                printf("Cadastre o nome do livro 3: ");
                    fgets(livro3,size1, stdin);
                    livro3[strcspn(livro3, "\n")] = '\0'; 
                
                printf("Os livros cadastrados são: %s, %s, %s", livro1, livro2, livro3); 
                
            }else if(qnt_livros==2){ 
                printf("Cadastre o nome do livro 1: ");
                    fgets(livro1,size1, stdin);
                    livro1[strcspn(livro1, "\n")] = '\0'; 
 
                printf("Cadastre o nome do livro 2: ");
                    fgets(livro2,size1, stdin);
                    livro2[strcspn(livro2, "\n")] = '\0';
                printf("Os livros cadastrados são: %s, %s", livro1, livro2); 
                printf("----------");
                
            }else if(qnt_livros==1) {
                printf("Cadastre seu livro: "); 
                    fgets(livro1,size1, stdin);
                    livro1[strcspn(livro1, "\n")] = '\0'; 
                
                printf("O livro cadastrado é: %s", livro1); 
            }else{
                printf("Você só pode cadastrar três livros por vez! Tente novamente...\n"); 
            }

        break; 
        
        case 7: 
            printf("Operação Finalizada! Saindo do programa...");
        break;
        
        default:
            printf("Número Inválido! Tente Novamente!");
        break; 
        
        }
    }while(operacao != 7); 
    
    

    return 0;
}