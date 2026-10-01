# Smart Embedded Device Manager

A beginner-friendly C programming project that simulates a simple embedded device management system using structures and user input.

## Project Overview

The **Smart Embedded Device Manager** is a console-based C program designed to store and display basic information about an embedded device.

The program takes device details such as:

* Device ID
* Device Name
* Device Type
* Device Status
* Temperature
* Voltage

and displays the entered information in a structured format.

## Concepts Used

This project demonstrates the following C programming concepts:

* Structures (`struct`)
* Variables and Data Types
* Character Arrays / Strings
* `printf()` and `scanf()`
* Conditional Statements
* Input and Output
* Floating-point values
* Basic Embedded Systems data representation

## How the Program Works

1. The program starts and displays the project title.
2. The user enters the device ID.
3. The user enters the device name.
4. The user enters the device type.
5. The user enters the device status:

   * `1` = ON
   * `0` = OFF
6. The user enters the device temperature.
7. The user enters the device voltage.
8. The program displays all the stored device information.

## Sample Input

```text
---SMART EMBEDDED DEVICE MANAGER---

Enter Device ID: 101
Enter Device Name: fridge
Enter Device Status (1 = ON, 0 = OFF): 1
Enter Device Temperature: 12
Enter Device Type: hardware
Enter Device Voltage: 41
```

## Sample Output

```text
---DEVICE INFORMATION---

Device ID  : 101
Device Name: fridge
Device Type: hardware
Status     : ON
Temperature: 12.00 C
Voltage    : 41.00 V
```

## Future Improvements

This project can be extended by adding:

* Multiple device management
* Add / delete / update devices
* Device search functionality
* Menu-driven interface
* Temperature and voltage monitoring
* Warning alerts for abnormal values
* File handling for storing device data
* Microcontroller-based implementation

## Purpose

This project was created as part of my journey toward learning **Embedded Systems and Embedded C programming**.

It is my first C programming project and focuses on building a practical understanding of how device-related data can be represented and managed in software.

## Author

**Vaishnavi Pandhavle**

Electronics & Telecommunication Engineering
Aspiring Embedded Developer

