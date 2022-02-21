import os
directory = 'tests'
NUMBER_OF_LINES=2
N_MIN=1
N_MAX=100000
B_MIN=1
B_MAX=1000

def strip_string(s):
    while s.endswith('\n') or s.endswith(' '):
        s=s[:-1]
    return s




 
for filename in os.listdir(directory):
    f = os.path.join(directory, filename)
    # checking if it is a file
    if os.path.isfile(f) and f.endswith('.in'):
        print('opening file '+filename)
        with open(f) as f:
            lines = f.readlines()

            if(len(lines) != NUMBER_OF_LINES):
                print('ERROR: number of lines')
                exit()

            n=strip_string(lines[0])
            if not n.isdigit():
                print('ERROR: n not int')
                exit()
            n=int(n)
            if n<N_MIN or n > N_MAX:
                print('ERROR: n invalid')
                exit()


            arr=strip_string(lines[1])
            arr=arr.split(' ')
            if all(not tmp.isdigit() for tmp in arr):
                print('ERROR: arr not integers')
                exit()
            arr=list(map(lambda x: int(x),arr))

            if len(arr)!= n:
                print('ERROR: length of arr invalid')
                exit()

            if any( tmp> B_MAX or tmp <B_MIN for tmp in arr ):
                print('ERROR: arr values invalid')
                exit()

            
print('check complete all is good')
print('input files are in the correct form')
            








