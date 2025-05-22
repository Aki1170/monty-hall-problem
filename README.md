# 🎩 Monty Hall Problem Simulator

This project is a clean, modular C++ implementation of the classic **Monty Hall problem**.  
It simulates and compares different player strategies using object-oriented design and customizable simulations.

## 📚 What is the Monty Hall Problem?

It's a probability puzzle based on a game show scenario:

- You choose one of three hats — one hides a prize (a nut 🌰).
- The host reveals one empty hat.
- You can **stick with your original choice** or **switch** to the other remaining one.
- Should you switch?

> Spoiler: Switching doubles your chances. This project shows why.

## 🛠️ Features

- Written in modern C++ (C++17)
- Separate classes for players, host, and simulation logic
- Three strategies implemented:
  - `StubbornPlayer` (never switches)
  - `SwitchingPlayer` (always switches)
  - `ProbabilisticPlayer` (switches with a given probability)
- Easily extendable with more strategies
- Ready-to-use simulation with adjustable game count

## 📁 Project Structure

| File                          | Description                          |
|-------------------------------|--------------------------------------|
| `montyhall_main.cpp`          | Entry point                          |
| `player.h / player.cpp`       | Abstract base class for strategies   |
| `stubborn_player.*`           | Player who never switches            |
| `switching_player.*`          | Player who always switches           |
| `probabilistic_player.*`      | Player who switches based on chance  |
| `host.*`                      | Manages game logic & prize location  |
| `simulation.*`                | Runs multiple games and tracks stats |

## 🧪 Example Output

StubbornPlayer win rate: 33.19%
SwitchingPlayer win rate: 66.51%
ProbabilisticPlayer (25%) win rate: 41.57%
ProbabilisticPlayer (50%) win rate: 49.88%
ProbabilisticPlayer (75%) win rate: 58.32%


## 🚀 Building

Use CMake:

```bash
cmake -S . -B build
cmake --build build
./build/montyhall
```

Or open the project in Qt Creator for easier build, run, and debugging.

📄 License

This project is provided for educational and non-commercial use.
Feel free to use, modify, and expand it.

🐾 Pull requests and contributions are welcome!

