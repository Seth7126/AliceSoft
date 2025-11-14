// 函数: sub_640670
// 地址: 0x640670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg3 + 8)
int32_t ebx_1 = *(arg3 + 4) - 6
int32_t* ebp = arg2
int32_t* var_4 = ebp
int32_t esi = arg4

if (ebx_1 s> 0)
    sub_6402e0(eax, arg2, eax, esi)

int32_t i = ebx_1 - 1
int32_t ecx_1 = 1
int32_t var_1c = 1
int32_t i_2 = i

if (i s> 0)
    int32_t j_2 = 2
    int32_t j_3 = 2
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t* esi_1 = ebp
            int32_t eax_3 = esi s>> ecx_1.b
            int32_t var_10_1 = eax_3
            int32_t ebp_1 = eax_3
            int32_t j
            
            do
                sub_6404a0(eax_3, esi_1, eax, ebp_1, 4 << ecx_1.b)
                eax_3 = ebp_1 << 2
                esi_1 += eax_3
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_2 = j_3
            ebp = var_4
            i = i_2
            ecx_1 = var_1c
        
        esi = arg4
        i -= 1
        ecx_1 += 1
        j_2 = rol.d(j_2, 1)
        var_1c = ecx_1
        j_3 = j_2
        i_2 = i
    while (i s> 0)

int32_t result = arg4

if (result s> 0)
    result = ((result - 1) u>> 5) + 1
    int32_t i_1
    
    do
        sub_63fb80(ebp)
        ebp -= 0xffffff80
        i_1 = result
        result -= 1
    while (i_1 != 1)

return result
