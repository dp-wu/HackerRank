# https://www.hackerrank.com/challenges/find-substring/problem?isFullScreen=true
import re


def match_count(j, s):
    pattern = rf"\B{j}\B"
    result = re.findall(pattern, s)
    return len(result)

def main():
    # read in sentences
    n = int(input())
    s = ""
    for i in range(n):
        s += input() + ' '
    # read in queries
    q = int(input())
    for i in range(q):
        j = input()
        m = match_count(j, s)
        print(m)

main()
