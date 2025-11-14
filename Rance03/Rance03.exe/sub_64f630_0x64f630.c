// 函数: sub_64f630
// 地址: 0x64f630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

switch (arg3)
    case 1
        return sub_64f750(arg1, arg2)
    case 2
        uint32_t uIDEvent = *(arg1 + 0x120)
        
        if (uIDEvent != 0)
            KillTimer(*(arg1 + 0x124), uIDEvent)
            *(arg1 + 0x120) = 0
        
        return 0
    case 5
        uint32_t ecx_1 = zx.d(arg5.w)
        
        if (ecx_1 s<= 0)
            return 0
        
        sub_64f8e0(arg1, arg5, ecx_1)
        return 0
    case 0xf
        sub_64f7f0(arg1, arg2)
        return 0
    case 0x113
        sub_64f970(arg1, arg2)
        return 0
    case 0x200
        LPARAM var_14_6 = arg5
        int32_t var_1c
        sub_64fa10(arg1, var_1c)
        return 0
    case 0x202
        BOOL eax_16 = sub_64fa70(arg1, sx.d(arg5.w), sx.d((arg5 u>> 0x10).w))
        
        if (eax_16 != 0xffffffff)
            sub_6503f0(arg1, eax_16)
        
        return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
