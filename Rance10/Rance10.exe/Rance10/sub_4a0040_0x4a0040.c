// 函数: sub_4a0040
// 地址: 0x4a0040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_20
int32_t eax_1 = __security_cookie ^ &var_20

if (arg3 != 1 && arg3 != 2 && arg3 != 4)
    POINT point
    __builtin_memset(&point, 0, 8)
    RECT var_14
    
    if (GetCursorPos(&point) != 0 && ScreenToClient(arg2, &point) != 0
            && GetClientRect(arg2, &var_14) != 0)
        int32_t y = point.y
        
        if (PtInRect(&var_14, point.x) != 0)
            void* ecx = *(arg1 + 0x148)
            
            if (ecx != 0)
                sub_47e450(ecx)

@__security_check_cookie@4(eax_1 ^ &var_20)
return 0
