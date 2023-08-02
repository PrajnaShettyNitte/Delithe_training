import sys
def CamelCase(s):
    x = s.split(';')
    command = x[0] 
    txt_type = x[1]
    txt = x[2]
    
    if command == 'S':
        
        if txt_type == 'M':
            temp =txt.replace('()', '')
            txt = temp
              
        for i in txt[::-1]:
            
            if i.isupper():
                loc = txt.rfind(i)
                txt = txt[:loc] + ' ' + txt[loc:].lower()
                txt = txt.strip()
    
    if command == 'C':
        
        txt = txt.split()
        start = 1
        temp = txt[0]
        
        if txt_type == 'C':
            start = 0
            temp = ''
        
        for w in txt[start:]:
            t = w[0].upper()
            tt = t + w[1:]
            temp= temp + tt
         
        if txt_type == 'M':
            temp = temp + '()' 
              
        txt = temp
    return txt
    
inputData = [line.rstrip('\n\r') for line in sys.stdin.readlines()]
for i in inputData:
    print(CamelCase(i))
