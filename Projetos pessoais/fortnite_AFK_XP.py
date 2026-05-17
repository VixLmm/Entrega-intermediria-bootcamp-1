import pyautogui
import time
time.sleep(1.5)
try:
    while True:
       pyautogui.click(button='left')
       time.sleep(0.5)
         # Clica na posição atual do cursor
except KeyboardInterrupt:
    print("\nAutoclicker encerrado.")
pyautogui.FAILSAFE
