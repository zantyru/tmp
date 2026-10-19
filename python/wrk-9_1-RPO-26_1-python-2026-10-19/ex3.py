def start():
    print("Ура! Списки и кортежи")

    numbers = [1, 2, 3, 10, -2, 9.1, 3, 3, 99]
    print(f"{numbers = }")

    print(f"{numbers[-4] = }")  # 9.1

    # Количество элементов
    element_count = len(numbers)
    print(f"{element_count = }")

    # Вот во что на самом деле превращается
    # запись numbers[-4]
    print(f"{numbers[len(numbers) - 4] = }")  # 9.1
    


if __name__ == "__main__":
    start()
