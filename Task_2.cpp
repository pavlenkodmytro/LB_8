#include <iostream>     // Підключення бібліотеки для вводу/виводу
#include <algorithm>    // Підключення бібліотеки для алгоритмів (наприклад, max_element)

// Функція для заміни всіх негативних елементів масиву на нулі до першого максимального елемента
void replaceNegativesWithZeros(int arr[], int n) {
    // Знаходження першого максимального елемента в масиві
    int maxElement = *std::max_element(arr, arr + n); // Використання std::max_element для знаходження максимума
    int maxIndex = -1; // Ініціалізація індексу максимального елемента

    // Цикл для знаходження індексу першого максимального елемента
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxElement) { // Якщо знайдено максимальний елемент
            maxIndex = i; // Записати його індекс
            break; // Вийти з циклу, оскільки знайшли перший максимум
        }
    }

    // Заміна всіх негативних елементів перед першим максимальним елементом на нулі
    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) { // Якщо елемент негативний
            arr[i] = 0; // Замінити його на нуль
        }
    }
}

int main() {
    // Ініціалізація масиву
    int arr[] = {-3, -2, 1, 4, 5, -1, 6, 2, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); // Обчислення кількості елементів масиву

    // Виведення оригінального масиву
    std::cout << "Original array: "; 
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " "; // Виведення елементів масиву
    }
    std::cout << std::endl; // Перехід на новий рядок

    // Виклик функції для заміни негативних елементів на нулі
    replaceNegativesWithZeros(arr, n); 

    // Виведення модифікованого масиву
    std::cout << "Modified array: "; 
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " "; // Виведення елементів модифікованого масиву
    }
    std::cout << std::endl; // Перехід на новий рядок

    return 0; // Завершення програми
}
