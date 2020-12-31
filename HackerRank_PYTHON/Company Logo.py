
import math
import os
import random
import re
import sys
from collections import Counter



if __name__ == '__main__':
    s = sorted(input())
    z=Counter(s)
    z=z.most_common(3)
    for x in z:
        print(*x)
