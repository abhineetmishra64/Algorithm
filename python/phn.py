import sys
import re

pat = "^(\+91( |-))?[6-9][0-9]{9}$"
while 1:
    line = input('Enter a line ("q" to quit)')
    if line == 'q':
        break
    if re.match(pat, line):
        print('Valid Phone number:', line)
    else:
        print('Invalid phone number:', line)
