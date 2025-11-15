// 函数: sub_5159a0
// 地址: 0x5159a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

void** eax_1 = sub_432330(arg2, &data_7fd16c)
void** edi_2 = *arg2
void** esi_1 = eax_1
char eax_3

if (esi_1 != edi_2)
    eax_3 = sub_412ca0(&data_7fd16c, &esi_1[4])

if (esi_1 == edi_2 || eax_3 != 0)
    esi_1 = edi_2

int32_t esi_2

if (esi_1 != edi_2)
    esi_2 = esi_1[0xa]
else
    esi_2 = 0

int32_t var_10_2 = esi_2
void** eax = sub_4f15e0(&arg1[0xd])

if (eax == 0)
    return 

int32_t edx_1 = eax[2]
void* const ecx_5

if (esi_2 s< edx_1 || eax[1] + edx_1 s<= esi_2)
    ecx_5 = nullptr
else
    ecx_5 = eax[3][esi_2 - edx_1]

if (ecx_5 == 0)
    return 

if (*(data_7fcba4 + 0x1f4) == 0)
    sub_403490(ecx_5 + 0x224, 0x75d236, nullptr)
else if (ecx_5 + 0x224 != arg3)
    return sub_403590(ecx_5 + 0x224, arg3, 0, 0xffffffff) __tailcall
