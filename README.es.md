# ludogame-console
[English](https://github.com/Seulhan-Choi/ludogame-console/README.en.md)

Este proyecto es una implementación en C++ del clásico juego de mesa Ludo, diseñado para hasta 4 jugadores. Cada jugador tiene como objetivo navegar sus cuatro piezas desde el inicio hasta el centro del tablero, incorporando estrategia, azar e interacción entre jugadores a través de las capturas de piezas.

## Características

- **Personalización de Jugadores**: Soporte para hasta 4 jugadores.
- **Simulación de Lanzamiento de Dados**: Utiliza un generador de números pseudoaleatorios para imitar la imprevisibilidad de los lanzamientos de dados.
- **Movimiento Avanzado**: Implementa lógica para el movimiento de piezas, capturas y zonas seguras basadas en los resultados de los dados.
- **Zonas Seguras**: Espacios designados en el tablero que ofrecen protección contra las capturas.
- **Condiciones de Victoria**: Rastrea el progreso hacia el objetivo para todos los jugadores, identificando al ganador una vez que todas las piezas alcanzan el centro.

## Prerrequisitos

- CMake (versión 3.10 o superior)
- Un compilador de C++ que soporte C++11 o posterior (p. ej., GCC, Clang)

## Construyendo el Proyecto

Este proyecto utiliza CMake para su construcción. Sigue estos pasos para compilar:

### Clonar el Repositorio

Primero, clona el repositorio en tu máquina local:

```sh
git clone <url-del-repositorio>
```

### Generar el Sistema de Construcción

Crea un directorio de construcción y navega hacia él:

```sh
mkdir build && cd build
```

Genera el sistema de construcción con CMake:

```sh
cmake ..
```

### Compilar el Proyecto

Compila el proyecto con:

```sh
cmake --build .
```

Esto creará un ejecutable llamado `LudoGame` (o `LudoGame.exe` en Windows).

## Ejecutando el Juego

Después de la compilación, ejecuta el juego desde el directorio de construcción:

```sh
./LudoGame
```

## Estructura del Proyecto

- `src/`: Archivos fuente incluyendo `main.cpp`, `game.cpp`, `piece.cpp`, `player.cpp` y `dice.cpp`.
- `include/`: Archivos de cabecera para el juego, jugadores, piezas y clases de dados.
- `CMakeLists.txt`: Archivo de configuración de CMake.
- `README.md`: Documentación para el proyecto.

## Visión General del Juego

- El juego comienza solicitando el número de jugadores.
- Los jugadores se turnan para lanzar los dados y eligen qué pieza mover basándose en el resultado.
- El juego aplica reglas para el movimiento, capturas y logro del objetivo.
- El estado del juego, incluyendo el estatus del tablero y las elecciones de los jugadores, se muestra a través de la salida de la consola.

## Contribuyendo

Las contribuciones son bienvenidas. Por favor, haz un fork del repositorio y envía un pull request con tus cambios.

## Licencia

Este proyecto se lanza bajo la Licencia MIT. Consulta el archivo `LICENSE` para más detalles.