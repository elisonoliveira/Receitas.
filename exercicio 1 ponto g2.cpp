#include<conio.h>
#include<stdio.h>
#include<string.h>

struct regreceitas{
	char nome[100];
	char tipo[10];
	char ingredientes[100];
	char mododepreparo[150];
	
};

main()
{
	int i=0,op=0,cont=0,x=0,y=0,w=0,z=0,c=0,v=0,b=0,n=0,l=0,m=0,k=0;
	char consulta[50],nomereceita[50];
	struct regreceitas receitas[120];
	
do{
	printf("\n\nDigite: ");
	printf("\n1-Incluir receita.");
	printf("\n2-Consultar receita por nome.");
	printf("\n3-Listar receita por tipo.");
	printf("\n4-Atualizar receita por nome.");
	printf("\n5-Sair.\n");
	scanf("%i",&op);


		switch(op)
		{
			case 1:
				{
				do{
				
				if(cont==99)
				{
					printf("\nVoce chegou no limite de receitas!! ");
					break;
				}
				printf("\nNome da receita: ");fflush(stdin);
				gets(receitas[cont].nome);
				
				do{
				
				printf("\nTipo de receita: ");fflush(stdin);
				printf("\n1-doce.");
				printf("\n2-salgada.\n");
				scanf("%i",&y);
				
				
				if(y==1)
				strcpy(receitas[cont].tipo,"doce");
				
				if(y==2)
				strcpy(receitas[cont].tipo,"salgada");
				
				if((y < 1) || (y > 2))
				printf("\nDigito Invalido! Digite novamente.");
				
			    }while((y < 1) || (y > 2));
			    
			    printf("\nInforme os ingredientes: ");fflush(stdin);
			    gets(receitas[cont].ingredientes);
			    
			    printf("\nInforme o modo de preparo: ");fflush(stdin);
			    gets(receitas[cont].mododepreparo);
			    
			    do{
			    printf("\nDeseja incluir outra receita? ");fflush(stdin);
			    printf("\n1-sim.");
			    printf("\n2-nao.\n");
			    scanf("%i",&x);
			    
			    if(x==2)
			    break;
			    
			    if((x > 2) || (x <1))
			    printf("\nDigito invalido! Digite novamente.");
			    
			    }while((x > 2) || (x < 1));
			    
			    cont++;
			    }while(x!=2);
		        }
		        
		        break;
		        
		    case 2:
			{
				do{
				printf("\nInforme o nome da receita que deseja consultar: ");fflush(stdin);
				gets(consulta);
				
				for(i=0; i<cont; i++)
				{
					if(strcmp(consulta,receitas[i].nome)==0)
					{
					printf("\nNome da receita: %s",receitas[i].nome);
					printf("\nTipo: %s",receitas[i].tipo);
					printf("\nIngredientes: %s",receitas[i].ingredientes);
					printf("\nModo de preparo: %s",receitas[i].mododepreparo);
				    }
				}
				
				printf("\n\n OBS: Se sua consulta nao foi encontrada, eh porque ela ainda nao existe!");
				
				do{
				printf("\n\nDeseja fazer outra consulta por nome? ");fflush(stdin);
				printf("\n1-Sim.");
				printf("\n2-Nao.\n");
				scanf("%i",&c);
				
				if(c<1 || c>2)
				printf("\nDigito invalido!! Digite novamente.");
				
			    }while(c<1 || c>2);
				
			    }while(c!=2);
			}
			break;
			
			case 3:
			{
					do{
					printf("\nInforme o tipo de receita: ");fflush(stdin);
					printf("\n1-Doce.");
					printf("\n2-Salgada.\n");
					scanf("%i",&z);
					
					if(z<1 || z>2)
					printf("\nDigito Invalido!! Digite novamente.");
					
				    }while(z<1 || z>2);
				    
				    if(z==1)
				    {
				    	for(w=0; w<cont; w++)
				    	{
				    		if(strcmp(receitas[w].tipo,"doce")==0)
				    		{
				    		    printf("\n===============================================================================");
								printf("\nNome: %s",receitas[w].nome);
				    			printf("\nIngredientes: %s",receitas[w].ingredientes);
				    			printf("\nModo de preparo: %s",receitas[w].mododepreparo);
				    			printf("\n===============================================================================");
				    		}
				    		
				    	}
				    }
				    
				    if(z==2)
				    {
				    	for(v=0; v<cont; v++)
				    	{
				    		if(strcmp(receitas[v].tipo,"salgada")==0)
				    		{
				    			printf("\n================================================================================");
								printf("\nNome: %s",receitas[v].nome);
				    			printf("\nIngredientes: %s",receitas[v].ingredientes);
				    			printf("\nModo de preparo: %s",receitas[v].mododepreparo);
				    			printf("\n================================================================================");
				    		}
				    	}
				    }
				
			}
			break;
			case 4:
			{
				do{
					printf("\nInforme o nome da receita: ");fflush(stdin);
					gets(nomereceita);
					
					for(b=0; b<cont; b++)
					{
						if(strcmp(receitas[b].nome,nomereceita)==0)
						{
							printf("\nSua receita foi encontrada para atualizacao de dados!");
							do{
				
				                 printf("\nTipo de receita: ");fflush(stdin);
				                 printf("\n1-doce.");
				                 printf("\n2-salgada.\n");
				                 scanf("%i",&n);
				
				                 if(n==1)
				                 strcpy(receitas[b].tipo,"doce");
				
				                 if(n==2)
				                 strcpy(receitas[b].tipo,"salgada");
				
				                 if((n < 1) || (n > 2))
				                 printf("\nDigito Invalido! Digite novamente.");
				
			                  }while((n > 2) || (n < 1));
			    
			                     printf("\nInforme os ingredientes: ");fflush(stdin);
			                     gets(receitas[b].ingredientes);
			    
			                     printf("\nInforme o modo de preparo: ");fflush(stdin);
			                     gets(receitas[b].mododepreparo);
			    
						}
					}
					
					do{
					printf("\nDeseja atualizar outra receita? ");fflush(stdin);
					printf("\n1-Sim.");
					printf("\n2-Nao.\n");
					scanf("%i",&k);
					
					if((k<1) || (k>2))
					printf("\nDigito invalido!! tente novamente.");
					
				    }while((k<1) || (k>2));
					
				  }while(k!=2);
			}
			break;
			
			case 5:
			l=1;    
		}
}while(l!=1);
	
}
