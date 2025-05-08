# CS50 – Harvard University

Welcome! 👋 This repository contains my personal solutions, notes, and projects for [CS50: Introduction to Computer Science](https://cs50.harvard.edu/x), offered by Harvard University.

## 🧠 Course Topics Covered
- C programming and memory
- Algorithms and data structures
- Python programming
- SQL and databases
- Web development with HTML, CSS, JavaScript, and Flask

## 📁 Structure
Each week is organized into its own folder, containing:
- My notes
- Problem Set solutions
- Lab exercises

## 🚀 Why I'm taking CS50
I'm a Software Engineering student at Universidade Federal de Goiás (Brazil), and I'm studying CS50 to strengthen my computer science fundamentals and prepare for remote developer roles in international companies.

---

🔗 [View the course](https://cs50.harvard.edu/x)

#include <cs50.h>
#include <stdio.h>

void check_card(long card_number);

int main(void)
{
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while (number < 1 || number > 9999999999999999);

    check_card(number);
}

void check_card(long card_number)
{
    int num_digits = 0;
    int rest = 0;
    int rest = 0;
    int rest = 0;
    int rest = 0;
    int rest = 0;
    int sum = 0;
    int sum = 0;
    int sum = 0;
    long temp = card_number;

    while (temp > 0)
    {
        temp /= 10;
        num_digits++;
    }
    for (int i = 0; i < num_digits; i++)
    {
        sum += 
        sum2 +=
        rest
        rest2
        rest3
        rest5
        rest4 = rest5
    }


}

