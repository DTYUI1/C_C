# Задачи на применение **структур**, **объединений** и **перечислений** с форматированием ввода и вывода на языке C

## 1. **Учет студентов в университете**

   **Условие:**  
   Создайте структуру `Student`, которая будет хранить информацию о студенте: имя (строка), возраст (целое число), средний балл (вещественное число). Напишите программу, которая будет принимать ввод данных для нескольких студентов и выводить их на экран в формате:

   ```bash
   Name: <name>
   Age: <age>
   GPA: <gpa>
   ```

   **Ввод:**

   ```bash
   3
   Alice 20 4.5
   Bob 22 3.8
   Charlie 21 4.2
   ```

   **Вывод:**

   ```bash
   Name: Alice
   Age: 20
   GPA: 4.5

   Name: Bob
   Age: 22
   GPA: 3.8

   Name: Charlie
   Age: 21
   GPA: 4.2
   ```

## 2. **Инвентаризация товаров**

   **Условие:**  
   Создайте структуру `Item`, которая будет хранить информацию о товаре: название (строка), количество (целое число), цена (вещественное число). Напишите программу, которая будет принимать информацию о нескольких товарах, а затем выводить отчет о всех товарах.

   **Ввод:**

   ```bash
   2
   Apple 10 2.5
   Banana 5 1.2
   ```

   **Вывод:**

   ```bash
   Item: Apple
   Quantity: 10
   Price: 2.50

   Item: Banana
   Quantity: 5
   Price: 1.20
   ```

## 3. **Календарь событий**

   **Условие:**  
   Создайте структуру `Event`, которая будет хранить информацию о событии: название события (строка), дата (структура с полями день, месяц, год), описание (строка). Напишите программу, которая будет принимать несколько событий и выводить их в формате:

   ```bash
   Event: <event_name>
   Date: <day>/<month>/<year>
   Description: <description>
   ```

   **Ввод:**

   ```bash
   2
   Birthday 12 10 2025 Party
   Meeting 5 3 2025 Business
   ```

   **Вывод:**

   ```bash
   Event: Birthday
   Date: 12/10/2025
   Description: Party

   Event: Meeting
   Date: 5/3/2025
   Description: Business
   ```

## 4. **Книга учета сотрудников**

   **Условие:**  
   Создайте структуру `Employee`, которая будет хранить информацию о сотруднике: имя (строка), должность (строка), зарплата (вещественное число). Напишите программу, которая принимает информацию о нескольких сотрудниках, а затем выводит отчет по зарплатам.

   **Ввод:**  

   ```bash
   2
   Alice Manager 5000.5
   Bob Developer 4500.75
   ```

   **Вывод:**  

   ```bash
   Name: Alice
   Position: Manager
   Salary: 5000.50

   Name: Bob
   Position: Developer
   Salary: 4500.75
   ```

## 5. **Задача с объединением (Union)**

   **Условие:**  
   Создайте объединение `Data`, которое может содержать либо целое число, либо строку, либо вещественное число. Напишите программу, которая будет по выбору пользователя записывать данные в объединение и выводить их на экран.

   **Ввод:**  

   ```bash
   1
   10
   ```

   **Вывод:**

   ```bash
   Integer: 10
   ```

   **Ввод:**

   ```bash
   2
   3.14
   ```

   **Вывод:**  

   ```bash
   Float: 3.14
   ```

   **Ввод:**

   ```bash
   3
   HelloWorld
   ```

   **Вывод:**  

   ```bash
   String: HelloWorld
   ```

## 6. **Журнал учета транспортных средств**

   **Условие:**  
   Создайте структуру `Vehicle`, которая будет хранить информацию о транспортном средстве: марка (строка), модель (строка), год выпуска (целое число), тип двигателя (перечисление: `Gasoline`, `Diesel`, `Electric`). Напишите программу, которая будет выводить информацию о нескольких транспортных средствах.

   **Ввод:**  

   ```bash
   2
   Tesla ModelS 2022 Electric
   Ford Mustang 2020 Gasoline
   ```

   **Вывод:**  

   ```bash
   Vehicle: Tesla ModelS
   Year: 2022
   Engine Type: Electric

   Vehicle: Ford Mustang
   Year: 2020
   Engine Type: Gasoline
   ```

## 7. **Работа с указателями на структуры**

   **Условие:**  
   Напишите программу, которая будет принимать информацию о студентах (структура `Student` с полями `name`, `age`, `gpa`), используя указатели на структуры, а затем выводить данные о каждом студенте.

   **Ввод:**  

   ```bash
   2
   Alice 20 4.5
   Bob 22 3.8
   ```

   **Вывод:**

   ```bash
   Name: Alice
   Age: 20
   GPA: 4.5

   Name: Bob
   Age: 22
   GPA: 3.8
   ```

## 8. **Журнал учета студентов с использованием объединений**

   **Условие:**  
   Создайте объединение `Grade`, которое может содержать либо числовую оценку (целое число), либо строку (например, "A", "B", "C" и т.д.). Напишите программу, которая принимает оценку студентов, используя объединение, и выводит результат.

   **Ввод:**

   ```bash
   2
   85
   A
   ```

   **Вывод:**  

   ```bash
   Grade: 85
   Grade: A
   ```

## 9. **Метеорологическая станция**

   **Условие:**  
   Создайте структуру `Weather`, которая будет хранить информацию о погоде: температура (вещественное число), влажность (вещественное число), состояние (перечисление: `Sunny`, `Cloudy`, `Rainy`). Напишите программу, которая будет выводить данные о текущей погоде.

   **Ввод:**  

   ```bash
   30.5 70.2 Sunny
   ```

   **Вывод:**  

   ```bash
   Temperature: 30.5°C
   Humidity: 70.2%
   Condition: Sunny
   ```

## 10. **График учебных дисциплин**

   **Условие:**  
   Создайте структуру `Course`, которая будет хранить информацию о курсе: название (строка), количество кредитов (целое число), преподаватель (строка). Напишите программу, которая выводит список всех курсов и их преподавателей.

   **Ввод:**  

   ```bash
   2
   Mathematics 5 Dr.Smith
   Physics 4 Dr.Jones
   ```

   **Вывод:**  

   ```bash
   Course: Mathematics
   Credits: 5
   Professor: Dr.Smith

   Course: Physics
   Credits: 4
   Professor: Dr.Jones
   ```

---

## Решения

### 1. Учет студентов

```c
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", students[i].name, students[i].age, students[i].gpa);
    }

    return 0;
}
```

### 2. Инвентаризация товаров

```c
#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Item items[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", items[i].name, &items[i].quantity, &items[i].price);
    }

    for (int i = 0; i < n; i++) {
        printf("Item: %s\nQuantity: %d\nPrice: %.2f\n\n", items[i].name, items[i].quantity, items[i].price);
    }

    return 0;
}
```

### 3. Календарь событий

```c
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[50];
    struct Date date;
    char description[100];
};

int main() {
    int n;
    scanf("%d", &n);
    struct Event events[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d %s", events[i].name, &events[i].date.day, &events[i].date.month, &events[i].date.year, events[i].description);
    }

    for (int i = 0; i < n; i++) {
        printf("Event: %s\nDate: %d/%d/%d\nDescription: %s\n\n", events[i].name, events[i].date.day, events[i].date.month, events[i].date.year, events[i].description);
    }

    return 0;
}
```

### 4. Книга учета сотрудников

```c
#include <stdio.h>

struct Employee {
    char name[50];
    char position[50];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", employees[i].name, employees[i].position, &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("Name: %s\nPosition: %s\nSalary: %.2f\n\n", employees[i].name, employees[i].position, employees[i].salary);
    }

    return 0;
}
```

### 5. Работа с объединением

```c
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    int choice;
    scanf("%d", &choice);
    union Data data;

    if (choice == 1) {
        scanf("%d", &data.i);
        printf("Integer: %d\n", data.i);
    } else if (choice == 2) {
        scanf("%f", &data.f);
        printf("Float: %.2f\n", data.f);
    } else if (choice == 3) {
        scanf("%s", data.str);
        printf("String: %s\n", data.str);
    }

    return 0;
}
```

### 6. Журнал учета транспортных средств

```c
#include <stdio.h>

enum EngineType {Gasoline, Diesel, Electric};

struct Vehicle {
    char brand[50];
    char model[50];
    int year;
    enum EngineType engine;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Vehicle vehicles[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d", vehicles[i].brand, vehicles[i].model, &vehicles[i].year, &vehicles[i].engine);
    }

    for (int i = 0; i < n; i++) {
        printf("Vehicle: %s %s\nYear: %d\nEngine Type: %s\n\n", vehicles[i].brand, vehicles[i].model, vehicles[i].year, vehicles[i].engine == 0 ? "Gasoline" : vehicles[i].engine == 1 ? "Diesel" : "Electric");
    }

    return 0;
}
```

### 7. Работа с указателями на структуры

```c
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        struct Student* s = &students[i];
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", s->name, s->age, s->gpa);
    }

    return 0;
}
```

### 8. Журнал учета студентов с использованием объединений

```c
#include <stdio.h>

union Grade {
    int numeric;
    char letter;
};

int main() {
    int n;
    scanf("%d", &n);
    union Grade grades[n];

    for (int i = 0; i < n; i++) {
        int type;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &grades[i].numeric);
            printf("Grade: %d\n", grades[i].numeric);
        } else if (type == 2) {
            scanf(" %c", &grades[i].letter);
            printf("Grade: %c\n", grades[i].letter);
        }
    }

    return 0;
}
```

### 9. Метеорологическая станция

```c
#include <stdio.h>

enum Condition {Sunny, Cloudy, Rainy};

struct Weather {
    float temperature;
    float humidity;
    enum Condition condition;
};

int main() {
    struct Weather w;
    scanf("%f %f %d", &w.temperature, &w.humidity, &w.condition);
    
    printf("Temperature: %.1f°C\n", w.temperature);
    printf("Humidity: %.1f%%\n", w.humidity);
    printf("Condition: ");
    
    switch(w.condition) {
        case Sunny: printf("Sunny\n"); break;
        case Cloudy: printf("Cloudy\n"); break;
        case Rainy: printf("Rainy\n"); break;
    }

    return 0;
}
```

### 10. График учебных дисциплин

```c
#include <stdio.h>

struct Course {
    char name[50];
    int credits;
    char professor[50];
};

int main() {
    int n;
    scanf("%d", &n);
    struct Course courses[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].professor);
    }

    for (int i = 0; i < n; i++) {
        printf("Course: %s\nCredits: %d\nProfessor: %s\n\n", courses[i].name, courses[i].credits, courses[i].professor);
    }

    return 0;
}
