# https://www.hackerrank.com/challenges/stack-exchange-scraper/problem?isFullScreen=true
# this question took (waste?) me a while to figure out how to load the test data properly :/
# also, apparently using re.DOTALL flag is necessary otherwise i get no stdout for some strange reason

import re
import sys


s = sys.stdin.read()

identifier = r'id="question-summary-([\d]+)".*?class="question-hyperlink">(.+?)</a>.*?class="relativetime">(.+?)</span>'
ids = re.findall(identifier, s, re.DOTALL)

for i in ids:
   print(*i, sep=';')
