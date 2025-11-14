// 函数: sub_506d00
// 地址: 0x506d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 4)

if (esi == 0)
    return 

int32_t* edx_1 = arg2
int32_t var_c
int32_t* ecx = &var_c
int32_t eax_1 = *(esi + 0x18)
int32_t esi_1 = *(esi + 0x1c)
var_c = eax_1
bool cond:0_1 = eax_1 s>= *edx_1
int32_t var_8
int32_t* eax_2 = &var_8
var_8 = 0

if (cond:0_1)
    ecx = edx_1

int32_t var_4 = esi_1
arg2 = nullptr

if (*ecx s> 0)
    eax_2 = ecx

int32_t* ecx_1 = &var_4
*edx_1 = *eax_2
int32_t* eax_4 = &arg2

if (esi_1 s>= *arg3)
    ecx_1 = arg3

if (*ecx_1 s> 0)
    eax_4 = ecx_1

*arg3 = *eax_4
