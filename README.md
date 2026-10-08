# ArrayLib

Лабораторная работа №2.

Кроссплатформенная динамическая библиотека
для обработки массивов целых чисел.

## Функции

- arr_sum
- arr_max
- arr_min
- arr_average
- arr_count_positive
- arr_count_negative
- arr_count_zero
- arr_product
- arr_median

## Вариант 22

Амплитуда аудиосигнала.

Программа вычисляет:
- сумму амплитуд;
- максимальное значение;
- минимальное значение;
- среднее значение;
- количество значений выше 60.

## Сборка

cmake -S . -B build

cmake --build build

## Тестирование

ctest --test-dir build --output-on-failure

## Запуск

./build/variant_22