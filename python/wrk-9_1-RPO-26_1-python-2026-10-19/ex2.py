def start():
    print("Ура! Списки и кортежи")

    numbers = [1, 2, 3, 10, -2, 9.1, 3, 3, 99]
    print(f"{numbers = }")

    n = numbers[3]  # 10
    print(f"{n = }")

    n = numbers[0]  # 1
    print(f"{n = }")

    n = numbers[-1]  # 99, взятие с конца
    print(f"{n = }")

    n = numbers[-4]  # 9.1
    print(f"{n = }")
    


if __name__ == "__main__":
    start()
