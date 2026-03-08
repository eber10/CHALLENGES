word = input("Enter a word or phrase: ")
letter = input("Enter a letter: ")
verify = False
for c in word:
    if c.lower() == letter.lower():
        verify = True
if verify:
    print(letter, " Yes, it is")
else:
    print(letter, "No, it isn't")
    