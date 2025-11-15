// 函数: sub_6394e0
// 地址: 0x6394e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2

if (ebp == 0x3a)
    arg2 = 1
else if (ebp != 0x3d)
    int32_t ecx = 0xe
    
    if (ebp == 0x2e)
        ecx = 0
    
    arg2 = ecx
else
    arg2 = 0

int32_t i = arg1[0x13]
int32_t edx = 0
int16_t* esi = *arg1
int32_t var_4 = 0

if (i != 0x3a)
    while (i != 0x3d)
        if (i == 0x2e)
            break
        
        if (i == 0xffffffff)
            break
        
        int16_t* ebx_1 = *arg1
        
        if (ebx_1 != arg1[2])
            if (*ebx_1 == 0x5c && sub_636a80(arg1) != 0)
                *arg1 = &ebx_1[1]
            
            *arg1 += 2
        
        sub_635790(arg1)
        i = arg1[0x13]
        edx = var_4 + 1
        var_4 = edx
        
        if (i == 0x3a)
            break

if (arg1[0x13] != ebp)
    sub_6d0967(arg2)
    noreturn

if (ebp == 0x3a)
    uint32_t ebx_2 = zx.d(sub_639440(arg1[0xf], esi, *arg1, (arg1[0x10] u>> 8).b & 1))
    
    if (ebx_2.w == 0)
        sub_6d0967(1)
        noreturn
    
    void* esi_1 = arg1[0xa]
    sub_639820(&arg1[9], esi_1, ebx_2, 0)
    *(esi_1 + 0x24) |= ebx_2.w
else if (ebp == 0x3d)
    if (esi == *arg1)
        sub_6d0967(0)
        noreturn
    
    sub_6398c0(&arg1[9], esi, *arg1, edx)
else if (ebp == 0x2e)
    int32_t eax_6 = *arg1
    
    if (esi == eax_6)
        sub_6d0967(0)
        noreturn
    
    sub_639a00(esi, eax_6, edx, arg1[0xa] + 0x14)

int16_t* esi_2 = *arg1

if (esi_2 != arg1[2])
    if (*esi_2 == 0x5c && sub_636a80(arg1) != 0)
        *arg1 = &esi_2[1]
    
    *arg1 += 2

sub_635790(arg1)

if (arg1[0x13] != 0x5d)
    sub_6d0967(arg2)
    noreturn

int16_t* esi_3 = *arg1

if (esi_3 != arg1[2])
    if (*esi_3 == 0x5c && sub_636a80(arg1) != 0)
        *arg1 = &esi_3[1]
    
    *arg1 += 2

return sub_635790(arg1)
