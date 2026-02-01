## 🧠 Project Architecture

- **Arduino**  
  - Acts as a simple input device  
  - Reads physical buttons  
  - Sends button presses (`"R"` or `"G"`) over Serial  
  - Contains *no game logic*

- **MATLAB App Designer**  
  - Controls the game logic  
  - Randomly selects colors  
  - Measures reaction time  
  - Displays results via GUI  
  - Communicates with Arduino using `serialport`

This separation mirrors real-world engineering design.

---

## 🎯 Game Rules

1. Click **START GAME** in the MATLAB app
2. After a short random delay, the app displays **RED** or **GREEN**
3. Press the matching physical button as fast as possible
4. The app checks correctness and shows reaction time
5. Wrong button = game over

---

## 🔌 Hardware Requirements

- Arduino Uno (or compatible)
- 2 push buttons
- Jumper wires
- Breadboard

### Button Wiring (No Resistors)

This project uses Arduino’s **internal pull-up resistors**.

| Button | Arduino Pin | Connection |
|------|------------|------------|
| Red Button | D2 | Button → D2, Button → GND |
| Green Button | D3 | Button → D3, Button → GND |

Buttons are configured with `INPUT_PULLUP`:
- **Pressed = LOW**
- **Released = HIGH**

---

## 💻 Software Requirements

- MATLAB (R2020b or newer recommended)
- MATLAB App Designer
- Arduino IDE
- USB cable

⚠️ No MATLAB Arduino Support Package required.

---

## 🚀 Setup Instructions

### 1️⃣ Upload Arduino Code
Upload the provided Arduino sketch to your board using the Arduino IDE.

Make sure the IDE is **closed** before running the MATLAB app.
