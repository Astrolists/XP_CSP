# XP 7TH TIME NOTES

import time
import datetime

epoch = time.time()
readable_time = time.ctime(epoch)

print(f"The time since Jan 1, 1970: {epoch}")

print(f"The time is: {readable_time}")

now = datetime.datetime.now()

print(f"the time is: {now}")

hour = now.hour
print(f"the hour is: {hour}")
