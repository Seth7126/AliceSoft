// 函数: sub_64f450
// 地址: 0x64f450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* var_834
int32_t eax_1 = __security_cookie ^ &var_834
var_834 = arg2
char var_8 = 0
int128_t var_28
__builtin_memset(&var_28, 0, 0x11)
uint32_t var_830[0x40][0x4]
_memset(&var_830, 0, 0x404)
*(arg4 + 0x400) = 1
int32_t var_42c[0x100]
__builtin_memset(&var_42c, 0xffffffff, 0x404)
int32_t i_1

while (true)
    int32_t i_5 = 0xffffffff
    int32_t esi_1 = 0x3b9aca00
    
    for (int32_t i = 0; i s<= 0x100; i += 1)
        int32_t ecx = *(arg4 + (i << 2))
        
        if (ecx != 0 && ecx s<= esi_1)
            esi_1 = ecx
            i_5 = i
    
    int32_t i_6 = 0xffffffff
    int32_t esi_2 = 0x3b9aca00
    
    for (i_1 = 0; i_1 s<= 0x100; i_1 += 1)
        int32_t ecx_1 = *(arg4 + (i_1 << 2))
        
        if (ecx_1 != 0 && ecx_1 s<= esi_2 && i_1 != i_5)
            esi_2 = ecx_1
            i_6 = i_1
    
    if (i_6 s< 0)
        break
    
    *(arg4 + (i_5 << 2)) += *(arg4 + (i_6 << 2))
    var_830[0][i_5] += 1
    void* eax_3 = &var_42c[i_5]
    bool cond:0_1 = *eax_3 s< 0
    *(arg4 + (i_6 << 2)) = 0
    
    if (not(cond:0_1))
        do
            i_5 = *eax_3
            eax_3 = &var_42c[i_5]
            var_830[0][i_5] += 1
        while (*eax_3 s>= 0)
    
    var_830[0][i_6] += 1
    void* eax_4 = &var_42c[i_6]
    var_42c[i_5] = i_6
    
    if (*eax_4 s>= 0)
        do
            int32_t eax_5 = *eax_4
            var_830[0][eax_5] += 1
            int32_t __saved_esi
            eax_4 = &(&__saved_esi)[eax_5 + 0x106]
        while (*eax_4 s>= 0)

for (int32_t i_2 = 0; i_2 s<= 0x100; i_2 += 1)
    int32_t edi_1 = var_830[0][i_2]
    
    if (edi_1 != 0)
        if (edi_1 s> 0x20)
            *(*arg3 + 0x14) = 0x28
            (**arg3)(arg3)
        
        *(&var_28 + edi_1) += 1

int32_t i_3

for (i_3 = 0x20; i_3 s> 0x10; i_3 -= 1)
    while (*(&var_28 + i_3) u> 0)
        i_1 = i_3 - 2
        void var_2a
        
        if (*(&var_2a + i_3) == 0)
            do
                i_1 -= 1
            while (*(&var_28 + i_1) == 0)
        
        *(&var_28 + i_3) -= 2
        void var_29
        *(&var_29 + i_3) += 1
        *(&var_28:1 + i_1) += 2
        *(&var_28 + i_1) -= 1

while (*(&var_28 + i_3) == 0)
    i_3 -= 1

*(&var_28 + i_3) -= 1
int32_t i_4 = 1
int128_t* ebx_1 = var_834
int32_t ecx_2 = 0
char var_18
i_1.b = var_18
*ebx_1 = var_28
ebx_1[1].b = i_1.b
int32_t j

do
    for (j = 0; j s<= 0xff; j += 1)
        if (var_830[0][j] == i_4)
            *(ebx_1 + ecx_2 + 0x11) = j.b
            ecx_2 += 1
    
    i_4 += 1
while (i_4 s<= 0x20)

*(ebx_1 + 0x111) = 0
@__security_check_cookie@4(eax_1 ^ &var_834)
return j
