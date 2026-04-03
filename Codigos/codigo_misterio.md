# Explicación del `codigo_misterio`

## Descripción general

`codigo_misterio` está compuesto por **3 funciones** y **1 variable predeterminada "dato_secreto = 452"**.

|  Proceso        | Nombre original | Nombre propuesto     |     Tarea                        |
|----------------|-----------------|----------------------|----------------------------------|
| Primera función | `f_alpha`      | `invertir_numero`    | Invierte los dígitos del número  |
| Segunda función | `f_beta`       | `mitad_del_inverso`  | Divide el número invertido a la mitad |
| Tercera función | `f_gamma`      | `sumar_digitos`      | Suma los dígitos del número      |

---

## Análisis de funciones

### `f_alpha` → `invertir_numero`

La renombré `invertir_numero` tras analizar su comportamiento. La línea clave es:
```c
suma = suma + (temp % 10);
```

Lo que hace es extraer el último dígito del número (`temp % 10`) y acumularlo en `suma`,
reconstruyendo así el número con sus dígitos en orden inverso.

**Ejemplo:** con la entrada `452`, el procedimiento devuelve `254`.

---

### `f_beta` → `mitad_del_inverso`

La renombré `mitad_del_inverso` porque toma como entrada el resultado de `invertir_numero`
y lo divide a la mitad.

**Ejemplo:** `254 / 2 = 127`.

---

### `f_gamma` → `sumar_digitos`

La renombré `sumar_digitos` porque suma todos los dígitos del número recibido.

**Ejemplo:** con la entrada `127` → `1 + 2 + 7 = 10`.

---

## Flujo completo con `dato_secreto = 452`
```
452  →  invertir_numero  →  254
254  →  mitad_del_inverso →  127
127  →  sumar_digitos    →   10
```