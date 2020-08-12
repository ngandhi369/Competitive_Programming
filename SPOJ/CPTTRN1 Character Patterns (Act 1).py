def fun():

    n = int(input())

    for i in range(n):
        x, y = input().split()
        for j in range(int(x)):
            if j % 2 == 0:
                c = '*'
                d = '.'
            else:
                c = '.'
                d = '*'

            e = ""
            for _ in range(int(y)):
                e += c
                c, d = d, c
            print(e)
        print('')

def main():
    fun()

if __name__ == '__main__':
    main()