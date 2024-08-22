import csv
filename = "C:\Users\PC602\Downloads\Lab2\Cau1\Cau1.csv"

with open(filename, mpde = 'r') as filename:
    csv_reader  = csv.DictReader(filename)

    data  = [row for row in csv_reader]
    for row in data:
        print(row)
