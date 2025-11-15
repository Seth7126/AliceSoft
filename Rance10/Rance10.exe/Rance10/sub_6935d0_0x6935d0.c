// 函数: sub_6935d0
// 地址: 0x6935d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* __saved_edi = arg3
char ecx = arg5.b

if (sub_692f00(arg3, arg2 s>> ecx, arg4 s>> ecx) != 0)
    if (arg6 != 0)
        int32_t eax_2
        int32_t ecx_2
        int32_t edx_1
        
        if (arg5 == 0)
            eax_2 = 0xff
            ecx_2 = 0
            edx_1 = 0
        else if (arg5 == 1)
            eax_2 = 0
            ecx_2 = 0xff
            edx_1 = 0
        else if (arg5 == 2)
            eax_2 = 0
            edx_1 = 0xff
            ecx_2 = 0
        else
            eax_2 = 0xff
            ecx_2 = 0xff
            edx_1 = 0
        
        (*(*arg8 + 0x2c))(arg3, 0, 0, (*(*arg3 + 0x10))((*(*arg3 + 0x14))(edx_1, ecx_2, eax_2)))
        int32_t result
        result.b = 1
        return result
    
    if (sub_693670(arg3, arg7) != 0)
        return 1

return 0
