// 函数: sub_518fe0
// 地址: 0x518fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*arg1 + 0x18))(arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12)
int32_t eax_1 = arg13

if (eax_1.b == 0)
    int32_t ecx = arg1[0x26]
    
    if (arg2 s>= ecx && arg2 s< arg1[0x28] + ecx)
        int32_t ecx_1 = arg1[0x27]
        
        if (arg3 s>= ecx_1)
            int32_t eax_4
            eax_4.b = arg3 s< arg1[0x29] + ecx_1
            return eax_4
    
    eax_1.b = 0
    return eax_1

for (int32_t* i = arg1[0x2a]; i != arg1[0x2b]; i = &i[1])
    if (sub_5177a0(*i, arg2, arg3, eax_1.b) != 0)
        return 1
    
    eax_1 = arg13

eax_1.b = 0
return eax_1
