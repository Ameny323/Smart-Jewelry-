# 💎 Bijouterie Management System

A modern and secure desktop application for managing the operations of a jewelry store, developed using **Qt Creator (C++)** and enhanced with **Arduino-based hardware integrations**.

---

## 🚀 Project Overview

This application is designed to **streamline and innovate** the internal management of a jewelry shop, covering all essential aspects such as:

- 👤 Client Management  
- 📦 Product Inventory Management  
- 🧑‍💼 Employee Management  
- 🛒 Order Management  
- 📈 Dashboard & Reports  
- 🔐 Security System Integration  
- 🔥 Fire Alarm System Simulation  

All functionalities are wrapped in a **modern, intuitive GUI**, making daily operations smoother and more efficient.

---

## 🛠️ Features

### 🖥️ Software (Qt Creator)

- **Client Management** – Add, update, search, and delete clients  
- **Product Management** – Manage jewelry items with real-time updates  
- **Employee Management** – Control employee data and access  
- **Order Management** – Handle purchases, delivery, and invoices  
- **Scanning Button for VIP Access** – Only employees can unlock VIP storage  
- **Modern UI** – Built with Qt signals, slots, and custom styles

### 🔌 Hardware (Arduino Simulation)

- **Access Control** – Simulated with a push button and buzzer  
- **Fire Alarm System** – Detects smoke and simulates water sprinklers  
- **Emergency Alert** – Activates buzzer for intrusions or fire  
- **Sensor Simulation** – MQ2 sensor, Servo motor, LEDs, etc.

---

## 🧰 Technologies Used

| Technology             | Version            | Purpose                        | Notes                                                                |
| ---------------------- | ------------------ | ------------------------------ | -------------------------------------------------------------------- |
| Qt Creator (C++)       | Qt 5.12.10         | GUI and application logic      | Stable version with good support for QSerialPort and cross-platform  |
|                        |                    |                                |                                                                      | 
| Arduino                | Arduino IDE 1.8.19 | Hardware simulation & security | Last stable 1.x version, widely compatible with libraries and boards |
|                        |                    |                                |                                                                      |
| WampServer (PHP/MySQL) | 3.2.6              | Database & local server        | PHP 7.4, Apache 2.4, MySQL 8.0; stable and widely compatible     |
|                        |                    |                                |                                                                      | 
| C++                    | —                  | Main programming language      | —                                                                    |


---

## 🎬 Application Presentation

👉 Check out the full project presentation:  
[🔗Canva](https://www.canva.com/design/DAFwTWjroDM/vlxWiKhmTLtvSAmznBw2Ow/edit?utm_content=DAFwTWjroDM&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton)

---
📦 Installation Guide
1️⃣ Clone the Project
bash
Copier
Modifier
git clone https://github.com/Ameny323/Smart-Jewelry-.git
2️⃣ Open the Project in Qt Creator
Launch Qt Creator

Open:
produis/Gestion_Produit.pro

3️⃣ Set Up the Database
Start WampServer

Visit: http://localhost/phpmyadmin

Create a new database: bijouterie

Import the SQL file:
database/bijouterie.sql

4️⃣ Configure Database Connection
File: src/connection.cpp

cpp
Copier
Modifier
db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("bijouterie");  // Replace with your DB name
db.setUserName("root");            // Your MySQL username
db.setPassword("");                // Your MySQL password
🔁 Checklist

✅ Step	Check
WampServer running	✅
MySQL ODBC 8.0 driver installed	✅
Database created & imported	✅
connection.cpp updated properly	✅

5️⃣ Launch the Application
In Qt Creator → Press Ctrl + R or click Run

🔌 Arduino Setup
✅ Requirements
Arduino Uno / Mega

Arduino IDE 1.8.19

🧩 Steps
Connect Arduino to PC via USB

Open arduino/arduino_main.ino in Arduino IDE

Select correct COM port

Click Upload to flash the board

🔗 Hardware Wiring (Simulation)
Component	Purpose
Push Button	Access control for VIP entry
Buzzer	Alerts for intrusions/fire
MQ2 Sensor	Fire detection
Servo Motor	Simulate door/gate movement
LEDs	Visual indicators (e.g., access)

🧪 Feature Testing Guide
Feature	Test Description
👥 Client Management	Add/edit/delete client records
🔐 Access Button	Press → Buzzer sounds + LED unlocks
🔥 Fire Alarm	Simulate smoke → Alarm + sprinklers activate
👨‍💼 Employee Section	Register employee → Secure access verification
📊 Reports	Trigger actions → Check dashboard live updates

🤝 Contributing
Feel free to fork the repo, open issues, and submit pull requests to enhance this project!

📫 Contact
For any queries or suggestions, contact:
Ameny323 – GitHub Profile

Let me know if you'd like a PDF version, website-ready markdown, or animated walkthrough slides!






Vous avez dit :
 🔌 Arduino Setup make ot n=bigger and bold in readme


ChatGPT a dit :
Here’s your updated 🔌 Arduino Setup section in a visually well-structured and bold, prominent format for the README:

🔌 ARDUINO SETUP
1️⃣ Connect Your Arduino Board
Recommended Boards: Arduino Uno or Arduino Mega

Connect the board to your PC via USB cable

2️⃣ Open the Arduino IDE
Launch the Arduino IDE

Open the main sketch located at:

bash
Copier
Modifier
arduino/arduino_main.ino
3️⃣ Upload the Sketch
Select the correct COM port for your board

Click Upload to flash the program onto the Arduino



📫 Contact
For any queries or suggestions, contact:
Ameny.benzaghdane@esprit.tn

