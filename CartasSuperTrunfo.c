#include <stdio.h>

int main() {   

    char codigo[10];  
    double populacao;     
    float area;             
    float pib;              
    int pontosturisticos;    

        printf("\nDigite o código da cidade: ");
        scanf("%s", codigo);

        printf("Digite a população: ");
        scanf("%lf", &populacao);

        printf("Digite a área (em km²): ");
        scanf("%f", &area);

        printf("Digite o PIB (em bilhões): ");
        scanf("%f", &pib); 
        
        printf("Digite a quantidade de pontos turísticos: ");    
        scanf("%d", &pontosturisticos);

        printf("\n---- Dados Inseridos ----\n");
        printf("Código da cidade: %s\n", codigo);
        printf("População: %.0lf habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);

        
    return 0;
    
}