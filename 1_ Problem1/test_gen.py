from random import randint,randrange
for filename in range(1,70):
    with open('test'+str(filename)+'.in', "w") as file:

        tests=randint(1,100)
        print(tests,file=file)
        for __ in range(tests):
            n,m=randint(1,100),randint(1,100)
            output=[['.'for __ in range(m)] for __ in range(n) ]

            if(randint(0,1)) and min(n,m) >2:
                sign_size=randrange(1,min(n,m),2)
                mid=sign_size//2
                center_h=randint(mid,m-mid-1)
                center_v=randint(mid,n-mid-1)
                for i in range(center_v-mid,center_v+mid+1):
                    output[i][center_h]='#'
                for i in range(center_h-mid,center_h+mid+1):
                    output[center_v][i]='#'
            else:
                sign_size=randint(1,m)
                start_hpos=randint(0,m-sign_size)
                vpos=randint(0,n-1)
                for i in range(0,sign_size):
                    output[vpos][i]='#'



            print(n,m,file=file)
            for i in output:
                for j in i:
                    print(j,end='',file=file)
                print(file=file)













