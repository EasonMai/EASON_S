import random

X = 10000
print("Welcome using the computer.\n")
print("computer(c)   game(Guess a number)(g)\n  ")
enter = str(input("Please choose a function:"))
if enter == "C" or enter == "c":
    for i in range(X):
        for j in range(X):
            k = j * i
        print('进度',
              f'|{"！" * ((i + 1) * 50 // X):50}|'
              f"{(i + 1) * 100 // X}%",
              end='\r')
    print('\n加载完成！')
    print("You can using this computer\n")
    print("-------------computer---------------\n")
    print("a 计算机\n")
    print("we  have 字母代入。Want a try?")
    t = str(input("yes or no"))
    if t == "yes":
        while True:

            a = str(input("字母："))
            b = float(input("数值："))
            text = str(input("是字母请按1"))
            if text == "1":
                num01 = b
            else:
                num01 = float(input("num01:"))
            text = str(input("是字母请按1"))
            if text == "1":
                num02 = b
            else:
                num02 = float(input("num02:"))

            mode = str(input("mode(+-*/):"))
            if mode == "+":
                total = num01 + num02

                print("{0}+{1}={2}".format(num01, num02, total))
            if mode == "-":
                total = num01 - num02
                print("{0}-{1}={2}".format(num01, num02, total))
            if mode == "*":
                total = num01 * num02
                print("{0}*{1}={2}".format(num01, num02, total))
            if mode == "/":
                total = num01 / num02
                print("{0}/{1}={2}".format(num01, num02, total))
            print("Do you want to play a game?Or go out\n")
            want = str(input("yes or no or out\n"))
            if want == "yes":
                break

    while True:
        num01 = float(input("num01:"))
        num02 = float(input("num02:"))
        mode = str(input("mode(+-*/):"))
        if mode == "+":
            total = num01 + num02

            print("{0}+{1}={2}".format(num01, num02, total))
        if mode == "-":
            total = num01 - num02
            print("{0}-{1}={2}".format(num01, num02, total))
        if mode == "*":
            total = num01 * num02
            print("{0}*{1}={2}".format(num01, num02, total))
        if mode == "/":
            total = num01 / num02
            print("{0}/{1}={2}".format(num01, num02, total))
        print("Do you want to play a game\n")
        want = str(input("yes or no\n"))
        if want == "yes":
            break



elif enter == "g":
    for i in range(X):
        for j in range(X):
            k = j * i
        print('进度',
              f'|{"！" * ((i + 1) * 50 // X):50}|'
              f"{(i + 1) * 100 // X}%",
              end='\r')
    print('\n加载完成！')
    print("you are playing the game now!\n")
    print("-------------game--------------\n")
    numa = random.randint(1, 50)
    while True:

        numt = 5
        numt -= 1
        if numt == 0:
            print("your opportunity no more.you are useless.")
            ag = str(input("want again?:(yes or no)"))
            if ag == "yes":
                continue
            if ag == "no":
                break
        numg = int(input("guess a number:"))

        if numg == numa:
            print("What the f***!you RIGHT!!!\n")

            ag = str(input("want again?:(yes or no)"))
            if ag == "yes":
                continue
            if ag == "no":
                break
        elif numg < numa:
            print("too small......you only have {0} opportunities/opportunity".format(numt))
        elif numg > numa:
            print("too big......you only have {0} opportunities/opportunity".format(numt))
print("you are playing the game now!\n")
print("-------------game--------------\n")
numa = random.randint(1, 50)
while True:

    numg = int(input("num:(1-50)\n"))
    numt = 5
    if numt == 0:
        print("your opportunity no more.you are useless.")
        ag = str(input("want again?:(yes or no)"))
        if ag == "yes":
            continue
        if ag == "no":
            break
    numt = numt - 1
    if numg == numa:
        print("What the f***!you RIGHT!!!\nwant again?:(yes or no)")
        ag = str(input("want again?:(yes or no)"))
        if ag == "yes":
            continue
        if ag == "no":
            break
    elif numg < numa:
        print("too small......you only have {0} opportunities/opportunity".format(numt))
    elif numg > numa:
        print("too big......you only have {0} opportunities/opportunity".format(numt))
