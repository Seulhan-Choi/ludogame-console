# ludogame-console
[Español](https://github.com/Seulhan-Choi/ludogame-console/README.es.md)

This project is a C++ implementation of the classic board game Ludo, designed for upo 4 players. Each player aims to navigate their four pieces from the start to the center of the board, incorporating strategy, chance, and player interaction through piece captures.

## Features

- **Player Customization**: Support for up to 4 players.
- **Dice Roll Simulation**: Uses a pseudo-random number generator to mimic the unpredictability of dice rolls.
- **Advanced Movement**: Implements logic for piece movement, capturing, and safe zones based on dice outcomes.
- **Safe Zones**: Designated board spaces that offer protection from captures.
- **Victory Conditions**: Tracks progress towards the goal for all players, identifying the winner once all pieces reach the center.

## Prerequisites

- CMake (version 3.10 or higher)
- A C++ compiler supporting C++11 or later (e.g., GCC, Clang)

## Building the Project

This project uses CMake for building. Follow these steps to compile:

### Clone the Repository

First, clone the repository to your local machine:

```sh
git clone <repository-url>
```

### Generate Build System

Create a build directory and navigate into it:

```sh
mkdir build && cd build
```

Generate the build system with CMake:

```sh
cmake ..
```

### Compile the Project

Compile the project with:

```sh
cmake --build .
```

This will create an executable named `LudoGame` (or `LudoGame.exe` on Windows).

## Running the Game

After compilation, run the game from the build directory:

```sh
./LudoGame
```

## Project Structure

- `src/`: Source files including `main.cpp`, `game.cpp`, `piece.cpp`, `player.cpp`, and `dice.cpp`.
- `include/`: Header files for the game, player, piece, and dice classes.
- `CMakeLists.txt`: CMake configuration file.
- `README.md`: Documentation for the project.

## Gameplay Overview

- The game begins by prompting for the number of players.
- Players take turns rolling the dice and choose which piece to move based on the outcome.
- The game applies rules for movement, captures, and goal attainment.
- The state of the game, including board status and player choices, is displayed via console output.

## Contributing

Contributions are welcome. Please fork the repository and submit a pull request with your changes.

## License

This project is released under the MIT License. See the `LICENSE` file for more details.
