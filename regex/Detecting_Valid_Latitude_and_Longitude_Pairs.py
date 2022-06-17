# https://www.hackerrank.com/challenges/detecting-valid-latitude-and-longitude/problem?isFullScreen=true
import re


def main():
    lat = r"(?<=\()([+-]?)((90([\.][0]+)?)|((([1-8][\d])|([\d]))([\.][\d]+)?)),"
    lon = r"(?<=,)([\s]*?[+-]?)((180([\.][0]+)?)|((1[0-7][\d])|([\d][\d])|[\d])([\.][\d]+)?)\)"

    n = int(input())
    for i in range(n):
        s = input()
        if re.search(lat, s) is None or re.search(lon, s) is None:
            print("Invalid")
        else:
            print("Valid")


main()
