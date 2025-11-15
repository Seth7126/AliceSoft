// 函数: sub_6c9c50
// 地址: 0x6c9c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = arg3 - 1

if (eax u<= 7)
    if (arg3 == 8)
        return sub_6c9d00(arg1, (arg2.d).b)
    
    int32_t ebx
    ebx.b = arg2
    ebx.b <<= 8 - arg3.b
    bool cond:0_1 = *(arg1 + 0x10) != 0
    arg2 = ebx.b
    
    if (not(cond:0_1))
        void* eax_2 = sub_4263a0(arg1 + 4, &arg2)
        *(arg1 + 0x10) = arg3
        return eax_2
    
    eax.b = ebx.b
    char* edx_2 = *(arg1 + 4) + *(arg1 + 8) - *(arg1 + 4) - 1
    int32_t ecx_4
    ecx_4.b = *(arg1 + 0x10)
    eax.b u>>= ecx_4.b
    *edx_2 |= eax.b
    void* ecx_5 = *(arg1 + 0x10)
    eax = ecx_5 + arg3
    *(arg1 + 0x10) = eax
    
    if (eax s>= 8)
        eax &= 0x80000007
        bool cond:1_1 = eax == 0
        
        if (eax s< 0)
            void* eax_4 = (eax - 1) | 0xfffffff8
            eax = eax_4 + 1
            cond:1_1 = eax_4 == 0xffffffff
        
        *(arg1 + 0x10) = eax
        
        if (not(cond:1_1))
            ebx.b <<= 8 - ecx_5.b
            arg2 = ebx.b
            return sub_4263a0(arg1 + 4, &arg2)

return eax
