// 函数: sub_5e70f0
// 地址: 0x5e70f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_28
int32_t eax_1 = __security_cookie ^ &var_28

if (arg3 != 1 && arg3 != 2 && arg3 != 4)
    POINT point
    __builtin_memset(&point, 0, 8)
    RECT var_1c
    
    if (GetCursorPos(&point) != 0 && ScreenToClient(arg2, &point) != 0
            && GetClientRect(arg2, &var_1c) != 0)
        int32_t y = point.y
        
        if (PtInRect(&var_1c, point.x) != 0)
            void* ecx = *(arg1 + 0x114)
            
            if (ecx != 0)
                sub_46d950(ecx)

sub_69a5bc(eax_1 ^ &var_28)
return 0
