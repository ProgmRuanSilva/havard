#dictionaries is like hashtables key: value words
pizzas = {
        "cheese": 9,
        "peperoni": 10,
        "vegetable": 11,
        "buffalo chicken": 12,
        }

for pie, price in pizzas.items():
    print(price)

for pie, price in pizzas.items():
    print("A whole {} pizzas costs ${}".format(pie, price))
