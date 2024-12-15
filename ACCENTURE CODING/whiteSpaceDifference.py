def whiteSpaceDifference(input1, input2):
    count1 = input1.count(' ')
    count2 = input2.count(' ')
    res = abs(count1 - count2)

    if res % 2 == 0:
        return 'Even' + str(res)
    else:
        return 'Odd' + str(res)
    
input1 = "Hello World"
input2 = "Hi there"
print(whiteSpaceDifference(input1, input2))
