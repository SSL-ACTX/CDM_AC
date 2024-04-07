# Calculator Application

## Description
This is a simple calculator application developed in Visual Basic .NET. The application allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. It also provides a history feature to keep track of previous calculations.

## Features
- Basic arithmetic operations: addition, subtraction, multiplication, division
- Decimal point functionality
- History feature to track previous calculations

## Usage
1. Enter numbers using the number buttons (0-9).
2. Perform arithmetic operations by clicking on the corresponding operator buttons (+, -, *, /).
3. Use the decimal button (.) to input decimal points.
4. Press the "AC" button to clear the input and result fields.
5. Click on the "Equal" button (=) to calculate the result.
6. View the history of calculations in the history box.

## Components
- `PictureBox`: Displays UI image
- `InputBox`: Input field for numbers and operators
- `ResultBox`: Displays the result of calculations
- `HistoryBox`: Displays the history of calculations

## Event Handlers
- `Form1_Load`: Loads UI image on form load
- Number buttons (0-9): Append corresponding number to the input field
- Operator buttons (+, -, *, /): Append corresponding operator to the input field
- Decimal button (.): Append decimal point to the input field
- "AC" button: Clear input and result fields
- "Equal" button (=): Calculate the result and display it in the result field
- `UpdateHistory`: Update the history box with each calculation

## Disclaimer
This application is developed for educational purposes and may require further customization or modification.
