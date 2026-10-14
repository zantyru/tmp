def get_user_integer(prompt: str) -> int: 

    is_input_valid = False

    while not is_input_valid:
        raw_input = input(prompt).strip()

        if raw_input.isdigit():
            is_input_valid = True

    return int(raw_input)


# Блок ввода количества яблок # НАЧАЛО
apple_count = get_user_integer("Вв кол-во яблок: ")
# Блок ввода количества яблок # КОНЕЦ


# Блок ввода количества людей # НАЧАЛО
person_count = get_user_integer("Вв кол-во людей: ")
# Блок ввода количества людей # КОНЕЦ


apple_per_person = apple_count / person_count

print(f"""
На одного человека приходится яблок, шт.:
{apple_per_person}
""")
