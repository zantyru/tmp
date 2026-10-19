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

    for index in range(len(texts)):
        word = texts[index]
        if len(word) > 6:
            texts[index] = "***"
    
    print(texts)



if __name__ == "__main__":
    start()
