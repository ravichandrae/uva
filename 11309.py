def is_palidrome(time):
    ntime = int(time[0:2]+time[3:])
    sntime = str(ntime)
    return sntime == sntime[::-1]

def increment_time(time):
    hours = int(time[0:2])
    minutes = int(time[3:])
    if minutes < 59:
        minutes += 1
    else:
        minutes = 0
        if hours < 23:
            hours += 1
        else:
            hours = 0
    h = str(hours)
    if hours < 10:
        h = "0"+h;
    m = str(minutes)
    if minutes < 10:
        m = "0"+m
    return h+":"+m

def next_palindrom(time):
    time = increment_time(time)
    while not is_palidrome(time):
        time = increment_time(time)
    return time
        
t = int(input())
for i in range(t):
    time = input()
    print (next_palindrom(time))
