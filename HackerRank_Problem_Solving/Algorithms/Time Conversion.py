
import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    med = s[-2:]
    if(med=="PM" and s[:2] !='12'):
        s=str(12+int(s[:2]))+s[2:]
    if(med=="AM" and s[:2]=='12'):
        s='00'+s[2:]
    return s[:-2]
    #
    # Write your code here.
    #

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()