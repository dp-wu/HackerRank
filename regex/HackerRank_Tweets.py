# https://www.hackerrank.com/challenges/hackerrank-tweets/problem?isFullScreen=true
import re


def main():
    pattern = r"(?i)hackerrank"
    counter = 0
    n = int(input())
    for i in range(n):
        s = input()
        result = re.findall(pattern, s)
        counter += len(result)
    print(counter)

main()
