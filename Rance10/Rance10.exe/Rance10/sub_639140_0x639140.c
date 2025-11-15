// 函数: sub_639140
// 地址: 0x639140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = zx.d(arg2)
uint32_t i = zx.d(arg3)

if ((*(arg1 + 8) & 0x100) != 0)
    esi = zx.d((*(**(*(arg1 + 0xc) + 4) + 0x20))(esi))
    i = zx.d((*(**(*(arg1 + 0xc) + 4) + 0x20))(i).w)

void* ebx = *(arg1 + 4)

if (esi u> i)
    return 

while (i u< *(arg1 + 0x10))
    if (*(ebx + 0x18) == 0)
        int32_t eax_6 = sub_6e810c(0x20)
        arg2.d = eax_6
        __builtin_memset(eax_6, 0, 0x20)
        *(ebx + 0x18) = eax_6
    
    uint32_t eax = esi & 7
    char* edx_3 = (esi u>> 3) + *(ebx + 0x18)
    esi += 1
    *edx_3 |= (1 << (eax u% 0x20)).b
    
    if (esi u> i)
        return 

if (i u< esi)
    return 

if (i - esi u>= *(arg1 + 0x14))
    if (*(ebx + 0x20) == 0)
        int32_t* eax_10 = sub_6e810c(0xc)
        arg2.d = eax_10
        *eax_10 = 0
        eax_10[1] = 0
        eax_10[2] = 0
        *(ebx + 0x20) = eax_10
    
    int32_t* ebp_1 = *(ebx + 0x20)
    int32_t eax_11 = ebp_1[1]
    
    if (*ebp_1 u<= eax_11)
        arg2.d = eax_11 + 0x10
        int32_t var_14_4 = (eax_11 + 0x10) * 2
        int32_t var_18_1 = ebp_1[2]
        int32_t eax_14 = _realloc()
        
        if (eax_14 == 0)
            sub_6d08ed()
            noreturn
        
        ebp_1[2] = eax_14
        *ebp_1 = arg2.d
    
    *(ebp_1[2] + (ebp_1[1] << 1)) = esi.w
    ebp_1[1] += 1
    int32_t* esi_1 = *(ebx + 0x20)
    int32_t ebx_1 = esi_1[1]
    
    if (*esi_1 u<= ebx_1)
        int32_t var_14_5 = (ebx_1 + 0x10) * 2
        int32_t var_18_2 = esi_1[2]
        int32_t eax_18 = _realloc()
        
        if (eax_18 == 0)
            sub_6d08ed()
            noreturn
        
        esi_1[2] = eax_18
        *esi_1 = ebx_1 + 0x10
    
    *(esi_1[2] + (esi_1[1] << 1)) = i.w
    esi_1[1] += 1
else if (esi u<= i)
    do
        sub_6393a0(arg1, esi)
        esi += 1
    while (esi u<= i)
