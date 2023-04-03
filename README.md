# <PrintF>

## Description

This project was motivated by a desire to take on new language challenges and the opportunity to collaborate with a partner. Holberton School provided us with this proposal, allowing us to test our skills as programmers. Our code, _printf, is an alternative to the C language print command, "printf." It performs many of the same functions as its counterpart.

## Índice (opcional)

Si su README es extenso, agregue un índice para facilitar que los usuarios encuentren lo que necesitan.

- [Use](#use)
- [Créditos](#créditos)
- [Licencia](#licencia)


## Use

Its usage is very simple and it accepts the same options as its counterpart printf. For example:

_printf("Hello %s\n", "world");

_printf("After the number %d, follows %i", 1, 2);

_printf("%colberton %cschool", 'H', 'S');

_printf("You have %%78 battery left in your cell phone");

##Functions

main_controller is a main function that controls the occurrence of special characters in _printf, such as % or \.
switch_controller controls the cases of % by calling its respective function depending on the character that follows the % symbol.


## Cómo contribuir

Si creó una aplicación o paquete, y desea que otros desarrolladores contribuyan con ella, puede incluir directrices sobre cómo hacerlo. El [Pacto de colaboradores](https://www.contributor-covenant.org/) es un estándar de la industria, pero siempre puede redactar el suyo si lo prefiere.

## Pruebas

Vaya un paso más allá y escriba pruebas para su aplicación. Luego, proporcione ejemplos sobre cómo ejecutarlas aquí.
