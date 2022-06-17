# https://www.hackerrank.com/challenges/ip-address-validation/problem?h_r=next-challenge&h_v=zen&isFullScreen=false
import re


def main():
    # define patterns
    pattern4 = r"^(([\d]{1,2}|[1][\d][\d]|[2][0-5][0-5])[\.]?){4}$"
    pattern6 = r"^(([a-f\d]?){3}[a-f\d][:]){7}([a-f\d]?){4}$"

    # read input then process them
    n = int(input())
    for i in range(n):
        s = input()
        IPv4 = re.compile(pattern4)
        if IPv4.match(s) is not None:
            print("IPv4")
            continue
        IPv6 = re.compile(pattern6)
        if IPv6.match(s) is not None:
            print("IPv6")
            continue
        print("Neither")

main()
