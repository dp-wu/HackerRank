# https://www.hackerrank.com/challenges/alien-username/problem?isFullScreen=true
import re


def main():
    pattern = r"^[._][\d]+[A-Za-z]*[_]?$"
    prog = re.compile(pattern)
    n = int(input())
    for i in range(n):
        name = input()
        result = prog.match(name)
        if result is None:
            print("INVALID")
        else:
            print("VALID")

main()
