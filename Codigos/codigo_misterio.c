#include <stdio.h>

void invertir_numero(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev;
}

void mitad_del_inverso(int *p) {
    *p = *p / 2;
}

void sumar_digitos(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    invertir_numero(valor_referencia);
    mitad_del_inverso(valor_referencia);
    sumar_digitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}