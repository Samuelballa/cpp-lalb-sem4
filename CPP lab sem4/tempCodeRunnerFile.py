import random 
import pyautogui as pg
import time
list =(" maa "," bujji "," kannalu"," kanna amma ","thalli","chitti amma","mummy")
time.sleep(8)
for i in range(500):
    a=random.choice(list)
    pg.write("i love you  "+a)
    pg.press("enter")