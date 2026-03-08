def romans(n):
    values = [
        (1000,"M"), (900,"CM"), (500,"D"), (400,"CD"),
        (100,"C"), (90,"XC"), (50,"L"), (40,"XL"),
        (10,"X"), (9,"IX"), (5,"V"), (4,"IV"), (1,"I")
    ]
    result= ""
    for worth, symbol in values:
        while n >= worth:
            result += symbol
            n -= worth
    return result
number = int(input("Enter a number: "))
print("Result: ", romans(number))