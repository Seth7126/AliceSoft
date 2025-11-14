// 函数: sub_619a50
// 地址: 0x619a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg1
int32_t result = 1

if (esi s> 1)
    while (arg2 s> 1)
        int32_t eax_2 = esi & 0x80000001
        bool cond:0_1 = eax_2 != 0
        
        if (eax_2 s< 0)
            cond:0_1 = ((eax_2 - 1) | 0xfffffffe) != 0xffffffff
        
        if (cond:0_1)
            break
        
        int32_t ecx_2 = arg2 & 0x80000001
        bool cond:1_1 = ecx_2 != 0
        
        if (ecx_2 s< 0)
            cond:1_1 = ((ecx_2 - 1) | 0xfffffffe) != 0xffffffff
        
        if (cond:1_1)
            break
        
        esi s>>= 1
        result += 1
        arg2 s>>= 1
        
        if (esi s<= 1)
            break

return result
