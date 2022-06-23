# https://www.hackerrank.com/challenges/uk-and-us/problem?isFullScreen=true
import re


def main():
    n = int(input())
    s = ""
    for i in range(n):
        s = s + input()
        if i != n-1:
            s += " "
    
    t = int(input())
    for j in range(t):
        us = input()
        uk = us[:-2]+"se"
        usuk = rf'\b{uk}|{us}\b'
        result = len(re.findall(usuk, s))
        print(result)

main()
