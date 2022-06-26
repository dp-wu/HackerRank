# https://www.hackerrank.com/challenges/detect-the-domain-name/problem?isFullScreen=true

import re


def main():
    n = int(input())
    link = r'http[s]?:\/\/(www.|ww2.)?([\w\d\-]+\.[\w\d\-\.]+)[\/\)\?\"]' # took me several tries to find all the necesarry symbols :/
    result = set()

    for i in range(n):
        s = input()
        find = re.findall(link, s)
        for j in find:
            result.add(j[1])

    print(*(sorted(result)), sep=";")


main()
