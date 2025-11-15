// 函数: sub_67a600
// 地址: 0x67a600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x70]
arg1[0x1d] = *(edi + 0x10)
arg1[0x1c] = *(edi + 0x14)
int32_t eax_2 = arg1[0x13]

if (eax_2 == 0)
    void** (* eax_12)(void* arg1, int32_t* arg2, void** arg3, int32_t arg4) = sub_67a030
    
    if (arg1[0x19] == 3)
        eax_12 = sub_67a0e0
    
    *(edi + 4) = eax_12
    return eax_12

int32_t eax_10

if (eax_2 == 1)
    bool cond:1_1 = arg1[0x19] == 3
    eax_10 = sub_67a1a0
    *(edi + 0x30) = 0
    
    if (cond:1_1)
        eax_10 = sub_67a2b0
    
    bool cond:2_1 = *(edi + 0x1c) != 0
    *(edi + 4) = eax_10
    
    if (not(cond:2_1))
        eax_10 = sub_679e20(arg1)
    
    if (*(edi + 0x34) == 0)
        return sub_679fe0(arg1) __tailcall
else
    if (eax_2 != 2)
        *(*arg1 + 0x14) = 0x31
        return (**arg1)(arg1)
    
    *(edi + 4) = sub_67a3e0
    *(edi + 0x54) = 0
    void* edi_1 = edi + 0x44
    
    if (*edi_1 == 0)
        sub_67a5c0(arg1)
    
    eax_10 = arg1[0x17]
    int32_t i = 0
    void* ebp_1 = (eax_10 << 1) + 4
    
    if (arg1[0x19] s> 0)
        do
            eax_10 = _memset(*edi_1, 0, ebp_1)
            i += 1
            edi_1 += 4
        while (i s< arg1[0x19])

return eax_10
