

def whileLoop():
    while where == "right":
        where = input("Go right or left? ")
        count = count + 1

        if(where == "right" and count > 2):
            print(f"stuck {count} times :( ")

    print("You got out!")
    print(f"{count} attempts taken to escape")


def forLoop():
    for n in range(5):
        where = input("Go right or left? ")
        if(where == "left"):
            print(f"{n+1} attempts taken")
            break
        else:
            print("Unable to escape")

def main():
    forLoop()

main()