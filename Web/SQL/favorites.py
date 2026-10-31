import csv


with open("favorites.csv", 'r') as file:
    reader = csv.DictReader(file)

    she, he = 0,0
    