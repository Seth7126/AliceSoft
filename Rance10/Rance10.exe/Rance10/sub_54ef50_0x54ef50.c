// 函数: sub_54ef50
// 地址: 0x54ef50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *arg1

if (ecx == 0)
    return 

int32_t edi_1

if (*(arg1 + 0x16) == 0)
    int32_t* ecx_1 = *(ecx + 0x118)
    
    if (ecx_1 != 0)
        edi_1 = (*(*ecx_1 + 0x10))()
    else
        edi_1 = 0
else
    edi_1 = arg1[0xb]

void* ecx_2 = *arg1
int32_t var_8 = edi_1
int32_t esi_1

if (ecx_2 == 0)
    esi_1 = 0
else if (*(arg1 + 0x16) == 0)
    int32_t* ecx_3 = *(ecx_2 + 0x118)
    
    if (ecx_3 != 0)
        esi_1 = (*(*ecx_3 + 0x14))()
    else
        esi_1 = 0
else
    esi_1 = arg1[0xc]

int32_t* ecx_4 = &var_8
int32_t var_4 = esi_1

if (edi_1 s>= *arg2)
    ecx_4 = arg2

int32_t eax_5 = 0
int32_t ecx_5 = *ecx_4

if (ecx_5 s> 0)
    eax_5 = ecx_5

int32_t* ecx_6 = &var_4
*arg2 = eax_5

if (esi_1 s>= *arg3)
    ecx_6 = arg3

int32_t eax = 0
int32_t ecx_7 = *ecx_6

if (ecx_7 s> 0)
    eax = ecx_7

*arg3 = eax
