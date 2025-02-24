# TASK 5
  # UART Communication Between VSDSquadron Mini & ESP32

##  Project Name
*Smart UART Communicator: VSDSquadron Mini & ESP32*

## Overview
This project establishes a *UART-based communication* channel between the *VSDSquadron Mini* and *ESP32. The VSDSquadron Mini sends a **"Start"* command every 5 seconds, and the ESP32 listens and replies with *"Process Started". This project highlights the practical implementation of **RISC-V technology* in real-world communication systems.

### Goal:
- Demonstrate seamless *UART communication* between two devices.
- Facilitate real-time *data exchange* and monitoring.
- Showcase the practical use of *RISC-V technology*.

---

## Components Required

| *Item*                  | *Quantity*          |
|-------------------------|--------------------------|
|  VSDSquadron Mini   | 1                      |
|  ESP32 Dev Board   | 1                      |
| USB Cables         | 2 (One for each board) |
| Jumper Wires       | 4 (Male-to-Male)       |
| Breadboard (optional) | 1                  |

---

##  Visuals

###  Pinout Diagram

> *Note:* Replace this placeholder with your PowerPoint-generated pinout diagram.

### Circuit Connection Illustration


> *Tip:* Use PowerPoint to create a clean and professional circuit illustration.

##  Circuit Connections

| *VSDSquadron Mini*    | *ESP32*          | *Purpose*                |
|-------------------------|--------------------|----------------------------|
| *PD5 (TX)*            | *GPIO16 (RX)*    | Send Data to ESP32         |
| *PD6 (RX)*            | *GPIO17 (TX)*    | Receive Data from ESP32    |
| *GND*                 | *GND*            | Common Ground (IMPORTANT)  |
| *3.3V*                | *3.3V*           | Power Supply               |

---

##  Setup & Installation

###  Install PlatformIO & Arduino IDE

1. *PlatformIO: Install within **VS Code* for *VSDSquadron Mini*.
2. *Arduino IDE: Use to upload code to the **ESP32*.

