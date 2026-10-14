# Пример функции, возвращающей значение


# Строчка кода ниже вызовет ошибку, если
# её раскомментировать
# print(get_five)  # На этом шаге get_five неизвестно что


def get_five():

    return 5


print(get_five)  # А вот здесь уже можно
print(get_five())


x = get_five()
y = get_five()
z = 3 * get_five() - 1

print(f"{x = }")
print(f"{y = }")
print(f"{z = }")
