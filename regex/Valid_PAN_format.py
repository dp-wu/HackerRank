# https://www.hackerrank.com/challenges/valid-pan-format/problem?isFullScreen=true
import re


def main():
    pan = r'[A-Z]{5}[\d]{4}[A-Z]{1}'
    
    n = int(input())
    for i in range(n):
        s = input()
        if re.match(pan, s) is not None:
            print("YES")
        else:
            print("NO")

main()
