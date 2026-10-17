# Домашнее задание к работе 5 (Вариант 2) #
## Условие задачи ##

<img width="381" height="72" alt="image" src="https://github.com/user-attachments/assets/6b773b2a-f4ca-4c98-a579-b54377e4135a" />

Создать программу вычисления указанной величины. Результат проверить при заданных исходных значениях.

## 1. Алгоритм и блок-схема ##

### Алгоритм ###
Алгоритм программы заключается в последовательном вычислении частей формулы:
1. **Начало**
2. Включим директиву в начале кода:
    `#include <math.h>` - позволяет использовать математические операции(sin, cos, tan, exp, log и др.)
3. Задать исходные значения:
    * `double x` = -4.5
    * `double y` = 0.75e-4
    * `double z` = 0.845e2
4. Вычисляем числитель дроби:
    * `double numerator = cbrt(8.0 + pow(fabs(x - y), 2) + 1.0);` - cbrt() — кубический корень, fabs() — модуль, pow() — возведение в степень.
5. Вычисляем знаменатель дроби:
    * `double denominator = (x * x) + (y * y) + 2.0;`
6. Вычисляем отношение числителя к знаменателю:
    * `double part1 = numerator / denominator;`
7. Вычисляем вторую часть выражения:
    * `double tan_z = tan(z);` - с помощью математической операции приводим слагаемое в тригонометрическую функцию tg(z).
    * `double part2_stap = pow(tan_z, 2) + 1.0;` - вычисляем значение в скобках.
    * `double part2 = exp(fabs(x - y)) * pow(part2_stap, x);` - находим произведение двух множителей второй части выражения.
8. Находим итоговое значение выражения:
    * `double u = part2 - part1;`
9. Выводим результат вычисления на экран(округлив число до 4-х знаков после запятой):
    * `printf("Результат вычисления u = %.4f\n", u);`
10. **Конец**

### Блок-схема ###

<img width="783" height="1022" alt="Блок-схема программы выражения drawio" src="https://github.com/user-attachments/assets/d7d78121-c995-4da6-9d47-7bc96f9f791c" />

[Блок-схема алгоритма программы, созданной в draw.io](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%20%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D1%8B%20%D0%B2%D1%8B%D1%80%D0%B0%D0%B6%D0%B5%D0%BD%D0%B8%D1%8F.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%228tDlfM2Z6f6K84fuUAC9%22%3E7Vxbc5s4FP41zDidiQfE%2FTF2mvalM93pTrt9yhAj20ww8mJc2%2Fn1KwmJi8DGEMBk7TwQcZCELH3nO9I5QpI6Xe2%2FhM56%2BQ250JeA7O4l9VECQNENFf8jkgOTyFyyCD2XyVLBD%2B8N8oxMuvVcuMlljBDyI2%2BdF85QEMBZlJM5YYh2%2BWxz5OffunYWsCD4MXP8ovSX50bLWGoBM5V%2Fhd5iyd%2BsGHb85MWZvS5CtA3Y%2B3yS6d51wteRBNQn%2BieBaZK%2Bi4utHP4O1gGbpeOiXUakfpbUaYhQFKdW%2Byn0Safz7ozLPR15mvyeEAbROQXWX%2BWfX9Gvt%2FDns%2FvX3791O0Jv9yW1MNEmOvCu20Qhek16DTd8soxWPk4qOIl%2F1prkW%2B0XBDnjuY92s6UTRuNNhK%2FPJM9u6UXwx9qZkYw7nA3L5p7vT5GPQiyq7lL8HtqI8hIy%2FYtLxGlSYo6CqG5%2BhlvFwPdxP%2Fxx%2FC3rB%2BlRluxHepXJ9cFM0%2FaEXj%2BzQjCM4D7Tn2xIvkC0glF4wFmWGbBZDCK7FJhAZjJWi8phdODPmWowtVgkNacQwAmGghqIAHG90C2oUxEiaBvOYDW6MlCCgftAlBnfzXxns%2FFmeTRRPYOkfTK%2Bg3sv%2Boekxzq7%2B83ykfTjPpPt8ZC5%2BQ5DD%2FcGDJmsPnaKY185iDobkRD6TuT9yfdeZmT1EyPH3vAdebir07G382OvmkIV8UCwUlkKECrSBBApmlAR1tgFjAoVUSAlP7s5ttSz2IYRCs7l%2BD70EeaVlcA5BUJaZ0Y8VzADhVIaSgFHKnbCGWcAUusmTstjoPbCWL7zAv0JCl0Y8mIunDtbP2pAZwUI72kOPPb031sjpjKKTKUYAlNpFSBrjaq0GlRVSkEBCuBJ%2FglwM2MCUiyLC37HAlPhgpSI6B1novrjT8uL5MXmSlQzq3VrIJSlKAIIdKxERkPWEgCliravY9bSe4SZbOp5mBmGeYPZccsoCzCzGlpGXTCxQDSxHWPMOgdSeVtVZs0yEHNeNsjfRvAhNWl5A6eVGtJhT8tB%2BdTMoAZyHcJcfxn%2FbhE3nPdzZ%2BX5eIQeJMIehrMi3cUyTJ3NzHE9Bz%2F6hgIkPqbv5JXh1IL9T6zy8bfGEwjyTmu9L63HRdsXn7Q72K5g6ES4W3ADaUW0%2FpeQ55y9hNHIGsv0B0wIWNBuNMfDPMKGXb4n2L2LTTu4K5aOiyhjNjWIH2Ooxu3P%2FyYspn3Jpe2saMR5AhBXNJ3NE7gtumnXSe2yBqdcg9ZoRa5SaRcGaOUFp5Sa6u4nohR3iV6PDkx2SGVgLNfX2z61We1NmZUa07EqB4X6nmlbg4kX82dwD0Y8xTO5c6PcoTGoCZfe2oRLXCWKFXU84VLO8kVcvU2wr8smyALHG1g519HJ9mzWTlDaoOOGIeHluCyvDy%2B%2Bguc3binI3ehNmK31R%2B9ant41szd%2Br%2BPVGSi%2Fy2Pb0HIcr%2BinSb7Maz0o4jeKXr3GDh1TrEtsTtfcb9y4%2FwzuN6%2Bb%2B%2FUxqOL%2BXttjVbenRVuEdSMCz5sIA%2F3I0oW4H5jF4k4HOfEy1DZbnRozPW%2FMDKM3Y2bWMGZNo6QNHcCZwGribpZOu5ql83zE3N8yENNVEotoZrcU0WOl9Gy3rGtEkzUoMLUWcQDCJKiwo6NrMNnXCCZlWPGrSi9IU3dK4o%2FrCU0cvAND06AGu3LZ03T9BFR7rGn9jvdtCfVBA5bDjqkoVTEVsi5Rji1JcjFUDPl8CGZY8RPuUDsyt9TEuWV7GzzNm%2BreVHcYLxV9HHbPDo5jRAL3a3FrBXFvfCr3gmR9JcQVsq%2Fvte%2BUaiw9RzW63hvV1FmwVm4mly%2B5GFFMI7scuZfHctX%2BzzQaYNbYvv6OvXl8UjaQ%2Ba4ixIxU0c12tt9FqEiThYq6nuzWWSpXwdi6JIotoIgoBmejGFwlikU%2FjWo0RLFYkdazw4d7BNoh45OR1c7JWDdFGNfAsWll998ouKxdH8zHA7bVADcHBXDdEgDe1C0hVlSYV3QN8DZ3hvEY8YV4WtZFgCvnTzeAoQsAN68Z4Ib4%2BVxTBhcr6p3BQYsABycB3uXeGM0EGXjKY9uu%2F0XnoACmCgFG3Wy%2BNwYI8SW9532RqtomxsyLYcwyBQr84BjTBf%2Bg8Y4P6sS9XL1jrPMPNz94pKiSBM4dadW48Eh3%2Fu3kBx9pzWpppC%2Bu08Z7R%2Fr%2FHwCu1Mamam30fY7DMLe1DWqwW9NssaLeB%2Fv2bfItXjiQl14wXriVju2DZoHEe4nvThhU8E%2FYZ6DyKdkxNmkt%2BKe2GTVRLxA2aXD41LAskOCWMMU9gU2PjbJ6jr9xiN4s0O1bzYEZoBMfiK5DrA7zUQNTlJGQUwbp%2BYITnV5NCQPVUml6QtNTeqVnE05klgZxEUBv42z0qMKJRdMKL55U%2B5h5%2BlQ0cYntw32mj7W5pE%2BDXLPLbSbZC7Md2F6YCnNYoLb2DitrMzrFGfFmDpubQ1sc6qbm0BbjSV2bQ3COObwd2sogR45lfWCHs6YHuFLee%2BBbTTo%2FrrWAkTN4Bd%2BmpwPH4EnPZlY%2F%2Fwc%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Реализация программы ##

## 3. Результаты работы программы ##
<img width="408" height="177" alt="image" src="https://github.com/user-attachments/assets/ee4413fa-cbef-4fec-ae68-d2447ee809e6" />

## 4. Информация о разработчике ##
**Четверня Данил, БТИИ-262**
