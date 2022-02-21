import os
directory = 'tests'
NUMBER_OF_LINES=1
N_MIN=1
N_MAX=1000

def strip_string(s):
    while s.endswith('\n') or s.endswith(' '):
        s=s[:-1]
    return s




 
for filename in os.listdir(directory):
    f = os.path.join(directory, filename)
    # checking if it is a file
    if os.path.isfile(f) and f.endswith('.out'):
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



            
print('check complete all is good')
print('output files are in the correct form')
            









