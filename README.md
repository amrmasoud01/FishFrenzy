# FishFrenzy 🐠🖱️

A C-based 2D game built with `graphics.h`, where players control a fish using the mouse to dodge obstacles in dynamic aquatic scenes. FishFrenzy features retro-style visuals, collision detection, mouse input handling, and escalating difficulty levels for an engaging gameplay experience.

## Table of Contents
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [How to Run](#how-to-run)
- [Gameplay](#gameplay)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Features
- **Mouse Controls**: Navigate the fish using mouse movements.
- **Dynamic Obstacles**: Dodge moving obstacles in an aquatic environment.
- **Retro Graphics**: Built with `graphics.h` for a nostalgic 2D look.
- **Collision Detection**: Avoid obstacles to keep the fish alive.
- **Escalating Difficulty**: Obstacles increase in speed and number over time.

## Prerequisites
To compile and run FishFrenzy, you’ll need the following:

### Required Programs
- **Turbo C++ or DOSBox**:
  - `graphics.h` is a legacy library typically supported by Turbo C++.
  - Recommended: Install [DOSBox](https://www.dosbox.com/) to run Turbo C++ on modern systems.
  - Alternatively, use an old system with Turbo C++ pre-installed.
- **C Compiler**:
  - Comes with Turbo C++ (e.g., `tcc`).
- **Operating System**:
  - Windows (for Turbo C++ compatibility).
  - If using DOSBox, it works on Windows, macOS, or Linux.

### Required Libraries
- **`graphics.h`**: Included with Turbo C++ for 2D graphics rendering.
- **Standard C Libraries**:
  - `stdio.h`, `conio.h`, `dos.h` (for mouse input and delays).
  - These are typically bundled with Turbo C++.

## Installation
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/FishFrenzy.git
   cd FishFrenzy
   ```
   Replace `yourusername` with your GitHub username.

2. **Set Up Turbo C++**:
   - Download and install Turbo C++ (or use a pre-installed version).
   - If using a modern system, install DOSBox:
     - Windows: Download from [dosbox.com](https://www.dosbox.com/).
     - macOS/Linux: Install via package manager (e.g., `brew install dosbox` or `sudo apt install dosbox`).
   - Mount Turbo C++ in DOSBox:
     ```dosbox
     mount c ~/path/to/turboc
     c:
     cd TC\BIN
     ```
   - Launch Turbo C++ by running `TC.EXE`.

3. **Copy Files**:
   - Copy the FishFrenzy project files (`main.cpp`, `fishfrenzy.cpp`, etc.) into the Turbo C++ directory (e.g., `C:\TC`).

## How to Run
1. **Compile the Code**:
   - Open Turbo C++.
   - Load `main.cpp` (File > Open).
   - Compile the project:
     - Press `Alt + F9` to compile.
     - Ensure `graphics.h` and other libraries are accessible (they should be in `C:\TC\INCLUDE`).
   - Link the object files:
     - Turbo C++ automatically links if no errors occur.

2. **Run the Game**:
   - Press `Ctrl + F9` to run the compiled program.
   - Alternatively, in DOSBox, navigate to the compiled executable (e.g., `main.exe`) and run:
     ```dosbox
     main.exe
     ```

3. **Troubleshooting**:
   - If `graphics.h` is missing, ensure it’s in the Turbo C++ `INCLUDE` directory.
   - If the screen doesn’t render, check the graphics driver initialization in `main.cpp` (e.g., `initgraph` settings).

## Gameplay
- **Objective**: Control the fish with your mouse to avoid obstacles.
- **Controls**:
  - Move the mouse to navigate the fish.
  - Left-click to start/restart the game (if implemented in code).
- **Goal**: Survive as long as possible while dodging obstacles.
- **Difficulty**: Obstacles increase in speed and frequency as the game progresses.

## File Structure
- `main.cpp`: Entry point for the game, initializes graphics and game loop.
- `fishfrenzy.cpp`: Core game logic, including fish movement and obstacle generation.
- `fishfrenzy.depend`: Dependency file (if applicable).
- `fishfrenzy.layout`: Turbo C++ project layout file.
- `README.md`: This file.
- `LICENSE`: MIT License file.

## Contributing
Contributions are welcome! To contribute:
1. Fork the repository.
2. Create a feature branch (`git checkout -b feature/your-feature`).
3. Commit changes (`git commit -m 'Add your feature'`).
4. Push to the branch (`git push origin feature/your-feature`).
5. Open a pull request.

Report bugs or suggest improvements via the [Issues](https://github.com/yourusername/FishFrenzy/issues) tab.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---
