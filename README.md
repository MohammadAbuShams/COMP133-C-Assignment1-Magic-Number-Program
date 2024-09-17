# Magic Number Program

## Overview

This C program finds and prints all magic numbers within a specified range that do not contain a specific digit. A magic number is defined as a number where each digit is greater than the sum of the digits to its right. The user provides the left and right bounds for the range, as well as the digit to exclude.

## Features

- **Input:**
  - **Left bound**: The starting point of the range.
  - **Right bound**: The ending point of the range.
  - **Excluded digit**: A digit to be excluded from any potential magic number.
  
- **Magic Number Definition:**
  - A number is considered magic if:
    1. Each digit is greater than the sum of the digits on its right.
    2. It does not contain the excluded digit.

## Sample Input

Enter Left bound: 740
Enter Right bound: 850
Enter the digit to exclude it: 2

## Sample Output

Magic Numbers in Range Left=740, Right=850 with exclude digit m= 2 are:
740 741 750 751 760 810 830 831 840 841 843 850

