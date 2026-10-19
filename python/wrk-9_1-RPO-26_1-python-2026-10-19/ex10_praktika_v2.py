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

    for index, word in enumerate(texts):
        if len(word) > 6:
            texts[index] = "***"
    
    print(texts)



if __name__ == "__main__":
    start()
