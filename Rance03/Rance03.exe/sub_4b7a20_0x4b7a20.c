// 函数: sub_4b7a20
// 地址: 0x4b7a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = arg2 s>= 0xff
int32_t* edx = &arg2
int32_t var_8 = 0xff

if (cond:0)
    edx = &var_8

int32_t var_4 = 0
int32_t* eax = &var_4
int32_t arg_8
int32_t* ecx = &arg_8

if (*edx s> 0)
    eax = edx

int32_t edi = *eax

if (arg_8 s>= 0xff)
    ecx = &arg2

arg2 = 0xff
int32_t* eax_1 = &var_4
var_4 = 0

if (*ecx s> 0)
    eax_1 = ecx

int32_t arg_c
int32_t* ecx_1 = &arg_c
int32_t edx_1 = *eax_1

if (arg_c s>= 0xff)
    ecx_1 = &arg2

arg2 = 0xff
int32_t* eax_2 = &arg_8
arg_8 = 0

if (*ecx_1 s> 0)
    eax_2 = ecx_1

int32_t result = *eax_2

if (*(arg1 + 0x38) != edi || *(arg1 + 0x3c) != edx_1 || *(arg1 + 0x40) != result)
    *(arg1 + 0x38) = edi
    *(arg1 + 0x3c) = edx_1
    *(arg1 + 0x40) = result
    *(arg1 + 4) = 1

return result
