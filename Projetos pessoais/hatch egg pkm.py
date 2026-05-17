import vgamepad as vg
import time
def loop_dpad():
    gamepad = vg.VX360Gamepad()
    time.sleep(2)
    try:
        while True:
            gamepad.press_button(button=vg.XUSB_BUTTON.XUSB_GAMEPAD_DPAD_LEFT)
            gamepad.update()
            time.sleep(1.2) # Segura por 1 segundo
            gamepad.release_button(button=vg.XUSB_BUTTON.XUSB_GAMEPAD_DPAD_LEFT)
            gamepad.press_button(button=vg.XUSB_BUTTON.XUSB_GAMEPAD_DPAD_RIGHT)
            gamepad.update()
            time.sleep(1.2) # Segura por 1 segundo
            gamepad.release_button(button=vg.XUSB_BUTTON.XUSB_GAMEPAD_DPAD_RIGHT)
            
    except KeyboardInterrupt:
        print("\nParando a automação...")
        gamepad.reset()
        gamepad.update()
        print("Controle virtual zerado e script encerrado com sucesso.")
if __name__ == "__main__":
    loop_dpad()