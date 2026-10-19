def start():
    print("Ура! Списки и кортежи")

    things = [4, None, "fff", print, True, ...]
    print(f"{things = }")

    # Удаление концевого элемента (изъятие)
    e = things.pop()
    print(e)

    e = things.pop()
    print(e)

    # Список изменился
    print(f"{things = }")


if __name__ == "__main__":
    start()
