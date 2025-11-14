// 函数: sub_687a70
// 地址: 0x687a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 u> 0xf)
    if (arg3 == 0x111)
        uint32_t var_8_3 = arg3
        sub_687dd0(arg1, arg2, arg4.w)
        return 0
    
    if (arg3 != 0x113)
        if (arg3 != 0x20a)
            return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
        
        LPARAM var_8_2 = arg5
        sub_687d80(arg1, arg3, arg4)
        return 0
else
    if (arg3 == 0xf)
        sub_687d10(arg2)
        return 0
    
    if (arg3 == 1)
        sub_687b30(arg1, arg2)
        return 0
    
    if (arg3 == 2)
        sub_687be0(arg1)
        return 0
    
    if (arg3 != 5)
        return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
    
    void* ecx_1 = *(arg1 + 0xd0)
    
    if (ecx_1 != 0)
        sub_694630(ecx_1, zx.d(arg5.w), arg5 u>> 0x10)

sub_688780(arg1)
return 0
