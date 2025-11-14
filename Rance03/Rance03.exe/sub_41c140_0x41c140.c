// 函数: sub_41c140
// 地址: 0x41c140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t ecx
eax, ecx = GetWindowLongA(arg1, 0xffffffeb)

if (eax == 0)
    return DefWindowProcA(arg1, arg2, arg3, arg4)

char eax_13

if (arg2 u> 0x101)
    if (arg2 == 0x111)
        if (arg3 u>> 0x10 != 0)
            return 0
        
        int32_t* ecx_4 = *(eax + 8)
        
        if (ecx_4 == 0)
            return 0
        
        if ((**ecx_4)(arg1, arg3, arg4) == 0)
            return 0
    else if (arg2 == 0x203)
        LPARAM var_14_6 = arg4
        
        if (sub_41c080(arg1, ecx) != 0)
            int32_t* ecx_3 = *(eax + 8)
            
            if (ecx_3 != 0)
                eax_13 = (*(*ecx_3 + 4))(arg1, arg3, arg4)
                goto label_41c22d
else if (arg2 == 0x101)
    eax_13 = sub_41c030(eax, arg1, arg3, arg4)
label_41c22d:
    
    if (eax_13 != 0)
        return 0
else if (arg2 == 2)
    int32_t* ecx_1 = *(eax + 8)
    
    if (ecx_1 != 0 && (*(*ecx_1 + 8))(arg1, arg3, arg4) == 0)
        return 0
else
    if (arg2 == 7)
        int16_t eax_7 = GetAsyncKeyState(0xd) u>> 0xf
        WNDPROC lpPrevWndFunc = *(eax + 0x10)
        eax_7.b &= 1
        *(eax + 0xc) = 0
        *(eax + 0xd) = eax_7.b
        return CallWindowProcA(lpPrevWndFunc, arg1, arg2, arg3, arg4)
    
    if (arg2 == 0x100 && arg3 == 0xd && *(eax + 0xd) == (arg2 - 7).b + 7)
        *(eax + 0xc) = 1
return CallWindowProcA(*(eax + 0x10), arg1, arg2, arg3, arg4)
