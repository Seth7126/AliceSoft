// 函数: sub_46d780
// 地址: 0x46d780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
int32_t x = point.x
int32_t y = point.y
int32_t ebx

if (*(arg1 + 0x24) != x || *(arg1 + 0x28) != y)
    ebx.b = 1
else
    ebx.b = 0

*(arg1 + 0x24) = x
*(arg1 + 0x28) = y
BOOL eax_1

if (GetForegroundWindow() != arg2)
label_46d8e5:
    
    if (*(arg1 + 0x3b) == 0)
        ShowCursor(1)
        *(arg1 + 0x3b) = 1
    
    POINT point_1
    __builtin_memset(&point_1, 0, 8)
    GetCursorPos(&point_1)
    int32_t* ecx_10 = *(arg1 + 0x3c)
    *(arg1 + 0x24) = point_1.x
    *(arg1 + 0x28) = point_1.y
    *(arg1 + 0x21) = 0
    
    if (ecx_10 != 0)
        int32_t eax_11 = (**ecx_10)()
        *(arg1 + 0x2c) = eax_11
        return eax_11
    
    eax_1 = 0
    *(arg1 + 0x2c) = 0
else
    eax_1 = sub_46da10(arg2, point.x, point.y)
    
    if (eax_1.b == 0)
        goto label_46d8e5
    
    if (*(arg1 + 0x20) != 0)
        if (*(arg1 + 0x3b) == 0)
            ShowCursor(1)
            *(arg1 + 0x3b) = 1
        
        return sub_46daa0(arg1)
    
    if (*(arg1 + 0x3a) == 0)
        if (*(arg1 + 4) != 0)
            if (ebx.b != 0)
                if (*(arg1 + 0x21) != 0)
                    *(arg1 + 0x21) = 0
                    sub_46db00(arg1)
                
                int32_t* ecx_3 = *(arg1 + 0x3c)
                
                if (ecx_3 == 0)
                    eax_1 = 0
                    *(arg1 + 0x2c) = 0
                else
                    eax_1 = (**ecx_3)()
                    *(arg1 + 0x2c) = eax_1
            else if (*(arg1 + 0x21) == 0)
                int32_t* ecx_4 = *(arg1 + 0x3c)
                int32_t eax_6
                
                if (ecx_4 == 0)
                    eax_6 = 0
                else
                    eax_6 = (**ecx_4)()
                
                eax_1 = eax_6 - *(arg1 + 0x2c)
                
                if (eax_1 u>= *(arg1 + 0x30))
                    *(arg1 + 0x21) = 1
                    eax_1 = sub_46db20(arg1)
        
        if (*(arg1 + 5) != 0 && *(arg1 + 0x38) != 0 && ebx.b != 0)
            *(arg1 + 0x38) = 0
            sub_46db00(arg1)
            eax_1 = sub_46daa0(arg1)
        
        if (*(arg1 + 6) != 0 && *(arg1 + 0x39) != 0 && ebx.b != 0)
            *(arg1 + 0x38) = 0
            sub_46db00(arg1)
            return sub_46daa0(arg1)
    else if (*(arg1 + 0x3b) != 0)
        int32_t eax_3 = ShowCursor(0)
        *(arg1 + 0x3b) = 0
        return eax_3

return eax_1
