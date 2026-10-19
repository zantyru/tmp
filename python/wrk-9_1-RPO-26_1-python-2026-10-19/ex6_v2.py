def start():
    print("Ура! Списки и кортежи")

    numbers = [1, 2, 3, 10, -2, 9.1, 3, 3, 99]
    
    for index, n in enumerate(numbers):
        print(f"{index}: {n = }")


if __name__ == "__main__":
    start()
