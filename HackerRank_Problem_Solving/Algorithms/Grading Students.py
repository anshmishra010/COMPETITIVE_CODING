#!/bin/python3

import math
import os
import random
import re
import sys


def gradingStudents(grades):
    res = []
    # for grade in grades:
    #     if(grade>=38):
    #         mod5=grade%5
    #         # print(mod5)
    #         if(mod5>=3):
    #             grade+=(5-mod5)
    #     res.append(grade)
    # return res

    for grade in grades:
        if (grade >= 38):
            if (grade < round(grade / 5) * 5):
                if (grade - round(grade / 5) * 5) < 3:
                    grade = round(grade / 5) * 5
        res.append(grade)
    return res


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()