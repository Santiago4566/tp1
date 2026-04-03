# Errores en el archivo `codigo_sin_funcionar`

## Errores encontrados

| # | Ubicación | Descripción |
|---|-----------|-------------|
| 1 | Líneas 16 y 22 | Falta `;` al final de la sentencia |
| 2 | Encabezado del archivo | Falta la librería `<stdio.h>` |
| 3 | Línea 12 | Falta `&` en `valor1` dentro del `scanf` |
| 4 | Función `duplicar_numero` | No asigna correctamente el valor a `valor1` |

---

## Soluciones

### 1. Punto y coma faltante (líneas 16 y 23)

Agregar `;` al final de cada sentencia:
```c
// Antes
int suma = valor1 + valor2
return 0

// Después
int suma = valor1 + valor2;
return 0;
```

---

### 2. Librería `<stdio.h>` faltante

Agregar al comienzo del archivo:
```c
#include <stdio.h>
```

---

### 3. Operador `&` faltante en `scanf` (línea 12)

El `&` es necesario para pasar la **dirección de memoria** de `valor1`, no su valor.
```c
// Antes
scanf("%d", valor1);

// Después
scanf("%d", &valor1);
```

---

### 4. Función `duplicar_numero` no modifica el valor original

El problema era que la función recibía `numero` **por valor**, por lo que cualquier
modificación dentro de la función no afectaba a la variable original.

**Solución:** cambiar el parámetro a un **puntero** (`*numero`) para recibir la
dirección de memoria y modificar el valor directamente.
```c
// Antes
void duplicar_numero(int numero) {
    numero = numero * 2;   // Solo se modifica de manera local sin afectar a valor1
}

// Llamada
duplicar_numero(valor1);
```
```c
// Después
void duplicar_numero(int *numero) {
    *numero = *numero * 2; // Modifica el valor en la dirección recibida
}

// Llamada (línea 20): se pasa la dirección de valor1
duplicar_numero(&valor1);
```

> Al pasar `&valor1` se entrega la dirección de memoria de la
> variable. Dentro de la función, `*numero` accede y modifica el valor almacenado en
> esa dirección, afectando directamente a `valor1`.