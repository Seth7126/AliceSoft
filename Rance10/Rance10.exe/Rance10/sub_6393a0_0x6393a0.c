// 函数: sub_6393a0
// 地址: 0x6393a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t edi

if ((*(arg1 + 8) & 0x100) == 0)
    edi = arg2.w
else
    edi = (*(**(*(arg1 + 0xc) + 4) + 0x20))(arg2)

void* esi_1 = *(arg1 + 4)

if (*(esi_1 + 0x1c) == 0)
    int32_t* eax_4 = sub_6e810c(0xc)
    arg2 = eax_4
    *eax_4 = 0
    eax_4[1] = 0
    eax_4[2] = 0
    *(esi_1 + 0x1c) = eax_4

int32_t* esi_2 = *(esi_1 + 0x1c)
int32_t eax_5 = esi_2[1]

if (*esi_2 u<= eax_5)
    int32_t var_10_2 = (eax_5 + 0x10) * 2
    int32_t var_14_1 = esi_2[2]
    int32_t eax_7 = _realloc()
    
    if (eax_7 == 0)
        sub_6d08ed()
        noreturn
    
    esi_2[2] = eax_7
    *esi_2 = eax_5 + 0x10

int32_t result = esi_2[2]
*(result + (esi_2[1] << 1)) = edi
esi_2[1] += 1
return result
