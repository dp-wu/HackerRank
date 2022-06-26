# This is by no means a good regex answer, not even close.
# Apart from the terrible regex pattern, i've encountered an interesting problem:
# while using stdin.read() on my local ide, (python 3.10), read() doen't stop reading at EOF.
# But apparently it works fine with HackerRank's Python interpreter.
# It might be a bug????? Maybe?????
# https://www.hackerrank.com/challenges/programming-language-detection/problem?isFullScreen=true

import re
import sys


def main():
    s = sys.stdin.read()

    c = r'\s*(#include<.*?>)|(int main(.*?).*?{.*?;})\s*'
    j = r'\s*(import .*?;)|(\/\/.*?)|(public class.*?{.*?})\s*'
    p = r'\s*(import .*?[^;])|(#.*?)\s*'


    if re.search(c, s) is not None:
        print("C")
    elif re.search(j, s) is not None:
        print("Java")
    elif re.search(p, s) is not None:
        print("Python")
    else:
        print("Don't know.")


main()
