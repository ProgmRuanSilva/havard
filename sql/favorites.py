import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file) # DictReader be all more simplisly
    counts = {}
    for row in reader:
        favorite = row["problem"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

# use labda function for this
def get_value(language):
    return counts[language]

# for favorite in sorted(counts, key=lambda language: counts[language], reverse=True):
#     print(f"{favorite}: {counts[favorite]}")

favorite = input("Favorite: ")
if favorite in counts:
    print(f"{favorite}: {counts[favorite]}")
