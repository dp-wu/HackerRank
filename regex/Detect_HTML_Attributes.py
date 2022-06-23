# https://www.hackerrank.com/challenges/html-attributes/problem?isFullScreen=false
# this was a little hard... I was scratching my head a little bit
import re
import collections


def main():
    tagp = r'<\w+.*?>'
    attp = r' ([\w\d]+)='
    result = dict()

    # populate dictionary
    n = int(input())
    for i in range(n):
        s = input()
        tags = re.findall(tagp, s) # find all the <> tags
        for j in tags:
            tag = re.findall(r'<(\w+).*?>', j) # extract current tag name
            atts = set(re.findall(attp, j)) # extract attribute names in current tag, eliminate duplicates using set()
            if tag[0] in result.keys():
                result[tag[0]].update(atts)
            else:
                result[tag[0]] = atts

    # sort dictionary by tag names
    result = collections.OrderedDict(sorted(result.items()))
    for k, v in result.items():
        # sort attributes
        v = sorted(v)
        print("{}:".format(k), end="")
        print(*v, sep=",")


main()
