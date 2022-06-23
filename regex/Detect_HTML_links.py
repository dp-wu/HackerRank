# https://www.hackerrank.com/challenges/detect-html-links/problem?isFullScreen=false
# test case 5 needed a lot of effort. :/
import re


def main():
    pattern = r'<a href="(.*?)".*?>[\s]?([\w\.,/ ]+)?[\s]?</'
    n = int(input())

    for i in range(n):
        s = input()
        result = re.findall(pattern, s)
        if result is not None:
            # print(result)
            for j in result:
                print("{},{}".format(j[0], j[1]))


main()
