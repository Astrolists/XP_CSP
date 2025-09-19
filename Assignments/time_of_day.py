#XP 7TH CSP TIME OF DAY

import time
import datetime

epoch = time.time()
military_time = time.ctime(epoch)



now = datetime.datetime.now()



hour = now.hour
print(f"the hour, converted to military time, is: {hour}")

if hour < 11:
    print ("It is morning!")
elif hour == 12:
    print ("its currently noon!")
elif hour >= 13 and hour <= 20:
    print("It is the afternoon!")
elif hour >= 20:
    print("It is nighttime!")
elif hour == 0:
    print("it is midnight!")

