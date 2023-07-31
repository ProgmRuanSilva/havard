words = set()


def check(word):
    if word.lower() in words:
        returns True
    else:
        return False

def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        word = line.rstrip() #rstrip removes the spaces of words
        words.add(line)
    close(file)
    return True

def size():
    return len(words)

def unload():
    return True


