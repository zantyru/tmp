def start():

    texts = [
        "Жора",
        "листопад",
        "афера",
        "потолок",
        "кот",
        "як",
        "кислый",
        "программист",
    ]

    # В этом варианте решения строится новый
    # список, а оригинальный остаётся как был
    new_texts = [
        "***" if len(word) > 6 else word
        for word in texts
    ]
    # Приём "Списковое включение" (list comprehension)
    
    print(texts)
    print(new_texts)


if __name__ == "__main__":
    start()
