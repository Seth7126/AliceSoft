// 函数: sub_47e960
// 地址: 0x47e960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return 

void* i

i = arg2 == 0xfffffff8 ? nullptr : arg2

int32_t ecx = *(arg1 + 0x2c)
int32_t* esi_1 = *(arg1 + 0x28)
int32_t* eax = esi_1

if (eax == ecx)
    return 

while (*eax != i)
    eax = &eax[1]
    
    if (eax == ecx)
        break

if (eax == ecx)
    return 

eax = (eax - esi_1) s>> 2

if (eax == 0xffffffff)
    return 

int32_t esi_2 = eax << 2
int32_t* eax_3 = *(arg1 + 0x38) + esi_2
_memcpy(eax_3, &eax_3[1], (*(arg1 + 0x3c) - &eax_3[1]) & 0xfffffffc)
*(arg1 + 0x3c) -= 4
int32_t* eax_5 = *(arg1 + 0x28) + esi_2
_memcpy(eax_5, &eax_5[1], (*(arg1 + 0x2c) - &eax_5[1]) & 0xfffffffc)
*(arg1 + 0x2c) -= 4
(*(arg2[1] + 0x6c))(arg1)
(*(*arg2 + 4))()
