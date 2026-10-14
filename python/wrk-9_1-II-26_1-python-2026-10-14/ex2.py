# Блок ввода количества яблок # НАЧАЛО
is_input_valid = False

while not is_input_valid:
    raw_input = input("Вв кол-во яблок: ").strip()

    if raw_input.isdigit():
        is_input_valid = True

apple_count = int(raw_input)
# Блок ввода количества яблок # КОНЕЦ


# Блок ввода количества людей # НАЧАЛО
is_input_valid = False

while not is_input_valid:
    raw_input = input("Вв кол-во людей: ").strip()

    if raw_input.isdigit():
        is_input_valid = True

person_count = int(raw_input)
# Блок ввода количества людей # КОНЕЦ


apple_per_person = apple_count / person_count

print(f"""
На одного человека приходится яблок, шт.:
{apple_per_person}
""")
