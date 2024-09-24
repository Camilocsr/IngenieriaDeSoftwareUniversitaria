<div align="center">

## Camilo Solano Rodriguez

### Redes Sociales

## Camilo
[![Facebook](https://img.shields.io/badge/Facebook-1877F2?style=for-the-badge&logo=facebook&logoColor=white)](https://www.facebook.com/camilosolanorodriguez/)
[![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/camilosolanoro/)
[![Sitio Web](https://img.shields.io/badge/Camilo-000000?style=for-the-badge&logo=google-chrome&logoColor=white)](http://camilosolanorodriguez.com)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/Camilocsr)

### Contacto

[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:camilosolanorodiguez@gmail.com)
[![WhatsApp](https://img.shields.io/badge/WhatsApp-25D366?style=for-the-badge&logo=whatsapp&logoColor=white)](https://wa.me/+573136368783)

# Sistema de Control de Vuelos

## Descripción

Este proyecto tiene como objetivo desarrollar un sistema de control de vuelos que permita gestionar la información relacionada con aeropuertos, programas de vuelo, aviones y sus respectivos vuelos. El sistema está diseñado en base a las reglas de gestión definidas por el profesor Elkin de la Universitaria de Colombia.

## Requisitos

El sistema debe contemplar las siguientes reglas de gestión:

1. Cada aeropuerto tiene:
   - Código
   - Nombre
   - Ciudad
   - País

2. Cada aeropuerto puede recibir diversos modelos de aviones, donde cada modelo determina su capacidad (número de plazas).

3. Existe una colección de programas de vuelo en cada aeropuerto, que incluye:
   - Número de vuelo
   - Línea aérea
   - Días de la semana en que opera

4. Cada programa de vuelo tiene un aeropuerto de despegue y un aeropuerto de aterrizaje.

5. Los números de vuelo son únicos a nivel global.

6. Cada aeropuerto registra múltiples aterrizajes y despegues, asegurando que todos estén activos.

7. Cada vuelo realizado pertenece a un programa de vuelo específico e incluye:
   - Fecha
   - Plazas vacías
   - Modelo de avión utilizado

8. Algunos programas de vuelo incluyen escalas técnicas entre los aeropuertos de salida y llegada.

9. Para cada vuelo, las escalas técnicas deben ser enumeradas en orden.

### Ejemplo

Un ejemplo de programa de vuelo sería:
- Programa de vuelo: 555
- Línea aérea: Iberia
- Despegue: Barajas-Madrid-España
- Aterrizaje: Caudell-Sydney-Australia
- Escalas técnicas:
  - 1. Los Pradiños-Sao Paulo-Brasil
  - 2. El Emperador-Santiago-Chile
  - 3. Saint Kitts-Auckland-Nueva Zelanda

## Cambios en Escalas Técnicas

Si en las escalas técnicas se pudieran bajar o subir pasajeros, se requeriría una modificación en la representación de las escalas. Se debería añadir un registro de pasajeros para cada escala, permitiendo indicar cuántos pasajeros suben o bajan en cada escala.

## Diagrama E/R

A continuación se presenta un diagrama E/R que ilustra las entidades y sus relaciones:

[ Aeropuerto ]
    ├── Código (PK)
    ├── Nombre
    ├── Ciudad
    └── País

[ Modelo Avión ]
    ├── Nombre_modelo (PK)
    └── Capacidad

[ Programa Vuelo ]
    ├── Número_vuelo (PK)
    ├── Línea_aérea
    └── Días_semana

[ Vuelo ]
    ├── Fecha
    ├── Plazas_vacías
    ├── Modelo_avión (FK)
    └── Programa_vuelo (FK)

[ Escala Técnica ]
    ├── Número_orden (PK)
    ├── Aeropuerto_despegue (FK)
    ├── Aeropuerto_aterrizaje (FK)
    └── Vuelo (FK)

Relaciones:
- Un Aeropuerto puede tener múltiples Modelos de Avión.
- Un Programa Vuelo pertenece a un Aeropuerto y puede incluir múltiples Vuelos.
- Cada Vuelo utiliza un Modelo de Avión y pertenece a un Programa Vuelo.
- Un Programa Vuelo puede tener múltiples Escalas Técnicas.

## Diagrama
- El diagrama fue creado garcias a una erramienta de inteligencia artificial llamada [Diagram.io](https://dbdiagram.io/)
- Si prefieres entender la base de datos de manera grafica te invito a que revises el diagrma que esta en [Diagrama de la DB](./Documents/Diagram.pdf)