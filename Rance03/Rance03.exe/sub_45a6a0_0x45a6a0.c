// 函数: sub_45a6a0
// 地址: 0x45a6a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* i = *arg1

if (i != arg1[1])
    int32_t ebx
    int32_t var_8_1 = ebx
    
    do
        ebx.b = *i
        uint32_t ecx_1 = zx.d(ebx.b)
        int32_t edx_4 = (ecx_1 s>> 1 & 0x55555555) + (ecx_1 & 0x55555555)
        int32_t ecx_6 = (edx_4 s>> 2 & 0x33333333) + (edx_4 & 0x33333333)
        int32_t edx_9 = (ecx_6 s>> 4 & 0xf0f0f0f) + (ecx_6 & 0xf0f0f0f)
        int32_t ecx_11 = (edx_9 s>> 8 & 0xff00ff) + (edx_9 & 0xff00ff)
        uint32_t esi_4 = zx.d((ecx_11 s>> 0x10).w) + zx.d(ecx_11.w)
        char ecx_13 = 8 - esi_4.b
        int32_t edx_12 = esi_4 & 0x80000001
        bool cond:0_1 = edx_12 == 0
        
        if (edx_12 s< 0)
            cond:0_1 = ((edx_12 - 1) | 0xfffffffe) == 0xffffffff
        
        if (cond:0_1)
            ecx_13 = esi_4.b
        
        ebx.b = ror.b(ebx.b, ecx_13)
        *i = ebx.b
        i = &i[1]
    while (i != arg1[1])

return i
