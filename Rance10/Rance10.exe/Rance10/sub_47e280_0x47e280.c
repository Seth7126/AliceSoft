// 函数: sub_47e280
// 地址: 0x47e280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
int32_t x = point.x
int32_t y = point.y
int32_t ebx

if (*(arg1 + 0x28) != x || *(arg1 + 0x2c) != y)
    ebx.b = 1
else
    ebx.b = 0

*(arg1 + 0x28) = x
*(arg1 + 0x2c) = y
HWND eax = GetForegroundWindow()
BOOL eax_1

if (eax != arg2)
label_47e3e7:
    
    if (*(arg1 + 0x3f) == 0)
        ShowCursor(1)
        *(arg1 + 0x3f) = 1
    
    POINT point_1
    __builtin_memset(&point_1, 0, 8)
    GetCursorPos(&point_1)
    int32_t* ecx_10 = *(arg1 + 0x40)
    *(arg1 + 0x28) = point_1.x
    *(arg1 + 0x2c) = point_1.y
    *(arg1 + 0x25) = 0
    
    if (ecx_10 != 0)
        int32_t eax_11 = (**ecx_10)()
        *(arg1 + 0x30) = eax_11
        return eax_11
    
    eax_1 = 0
    *(arg1 + 0x30) = 0
else
    eax_1 = sub_47e510(eax, point.x, arg2, point.y)
    
    if (eax_1.b == 0)
        goto label_47e3e7
    
    if (*(arg1 + 0x24) != 0)
        if (*(arg1 + 0x3f) == 0)
            ShowCursor(1)
            *(arg1 + 0x3f) = 1
        
        return sub_47e590(arg1)
    
    if (*(arg1 + 0x3e) == 0)
        if (*(arg1 + 8) != 0)
            if (ebx.b != 0)
                if (*(arg1 + 0x25) != 0)
                    *(arg1 + 0x25) = 0
                    sub_47e5f0(arg1)
                
                int32_t* ecx_3 = *(arg1 + 0x40)
                
                if (ecx_3 == 0)
                    eax_1 = 0
                    *(arg1 + 0x30) = 0
                else
                    eax_1 = (**ecx_3)()
                    *(arg1 + 0x30) = eax_1
            else if (*(arg1 + 0x25) == 0)
                int32_t* ecx_4 = *(arg1 + 0x40)
                int32_t eax_6
                
                if (ecx_4 == 0)
                    eax_6 = 0
                else
                    eax_6 = (**ecx_4)()
                
                eax_1 = eax_6 - *(arg1 + 0x30)
                
                if (eax_1 u>= *(arg1 + 0x34))
                    *(arg1 + 0x25) = 1
                    eax_1 = sub_47e610(arg1)
        
        if (*(arg1 + 9) != 0 && *(arg1 + 0x3c) != 0 && ebx.b != 0)
            *(arg1 + 0x3c) = 0
            sub_47e5f0(arg1)
            eax_1 = sub_47e590(arg1)
        
        if (*(arg1 + 0xa) != 0 && *(arg1 + 0x3d) != 0 && ebx.b != 0)
            *(arg1 + 0x3c) = 0
            sub_47e5f0(arg1)
            return sub_47e590(arg1)
    else if (*(arg1 + 0x3f) != 0)
        int32_t eax_3 = ShowCursor(0)
        *(arg1 + 0x3f) = 0
        return eax_3

return eax_1
