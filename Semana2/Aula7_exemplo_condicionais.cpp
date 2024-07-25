/* Exemplo 1 - Escreva um programa que leia três notas de um aluno e calcule a média dessas notas. 
Se a média for maior ou igual a 7, imprima "Aprovado :)". Se a média estiver entre 5 e 6.9 imprima "Exame Final :(".
Caso contrário, deve imprimir "Reprovado F".
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    float media = (n1 + n2 + n3) / 3;

    if (media >= 7)
        cout << "Aprovado\n";
    else if ( media <= 6.9 && media >= 5)
        cout << "Exame Final\n";
    else 
        cout << "Reprovado\n"; 

}

/* Exemplo 2 - Escreva um programa que leia a idade de uma pessoa 
e verifique se ela é maior de idade (18 anos ou mais) e se tem permissão para votar. 
Considere que para votar, a pessoa deve ser maior de 16 anos. */

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int idade;
    cin >> idade;

    if (idade >= 18 && idade > 16)
        cout << "É maior de idade e tem permissão para votar\n";
        
    else 
        cout << "Não tem permissão para votar\n";
}
