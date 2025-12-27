computer_no = 5
secret_no = int(input("Sno: "))

def main():
    compare(secret_no, computer_no)


#recursion is not optimal in python
#use loop alternative 
def compare(secret_no, computer_no):
    if secret_no == computer_no:
        print("Equal")
    elif secret_no < computer_no:
        print("Number too small: ")
        compare(int(input("Bigger Sno: ")), computer_no)
    elif secret_no > computer_no:
        print("Number too big")
        compare(int(input("Smaller Sno: ")), computer_no)


main()

"""
computer_no = 5

while True:
    secret_no = int(input("Sno: "))
    if secret_no == computer_no:
        print("Equal")
        break
    elif secret_no < computer_no:
        print("Number too small")
    else:
        print("Number too big")
"""