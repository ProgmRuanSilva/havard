books = []

# Add three books ot your shelf
for i in range(3):
    book = dict()
    book["title"] = input("Title: ").strip().capitalize()
    book["author"] = input("Author: ")

    books.append(book)

for book in books:
    print(book["title"])
print(books)
