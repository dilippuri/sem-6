    def no():
        for _ in xrange(input()):
            N, K = map(int, raw_input().split())
            a = map(str, raw_input().split())
            b = []
            for i in range(K):
                b.append(raw_input())
            
            for i in a:
                flag = 0
                for j in b:
                    if i in j:
                        flag = 1
                        break
                
                if flag == 1:
                    print 'YES',
                else:
                    print 'NO',
            
            print
                    
    if __name__ == "__main__":
        no() 
