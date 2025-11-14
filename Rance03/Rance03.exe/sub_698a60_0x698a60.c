// 函数: sub_698a60
// 地址: 0x698a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
HWND hWnd = *arg1

if (hWnd != 0 && DestroyWindow(hWnd) != 0)
    *arg1 = 0

if (arg1[0xb].b != 0 && UnregisterClassA(arg1[0xa], arg1[0x18]) != 0)
    arg1[0xb].b = 0

void* lpClassName = &arg1[0xc]
arg1[5] = arg1[0x18]
void* lpClassName_1

if (*(lpClassName + 0x14) u< 0x10)
    lpClassName_1 = lpClassName
else
    lpClassName_1 = *lpClassName

arg1[0xa] = lpClassName_1
HWND result

if (sub_698860(arg1).b != 0)
    void* lpWindowName = &arg1[0x12]
    
    if (arg1[0x17] u>= 0x10)
        lpWindowName = *lpWindowName
    
    if (*(lpClassName + 0x14) u>= 0x10)
        lpClassName = *lpClassName
    
    result = CreateWindowExA(arg1[0x19], lpClassName, lpWindowName, arg1[0x1a], arg1[0x1b], 
        arg1[0x1c], arg1[0x1d], arg1[0x1e], arg1[0x1f], arg1[0x20], arg1[0x18], arg1)
    
    if (result != 0)
        *arg1 = result
        result.b = 1
        return result
    
    if (arg1[0xb].b != result.b && UnregisterClassA(arg1[0xa], arg1[0x18]) != 0)
        arg1[0xb].b = 0

result.b = 0
return result
