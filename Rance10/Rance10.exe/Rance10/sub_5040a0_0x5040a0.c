// 函数: sub_5040a0
// 地址: 0x5040a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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

bool cond:1 = arg_8 s>= 0xff
*(arg1 + 0x34) = *eax

if (cond:1)
    ecx = &arg2

arg2 = 0xff
int32_t* eax_2 = &var_4
var_4 = 0

if (*ecx s> 0)
    eax_2 = ecx

int32_t arg_c
bool cond:2 = arg_c s>= 0xff
int32_t* ecx_1 = &arg_c
*(arg1 + 0x38) = *eax_2

if (cond:2)
    ecx_1 = &arg2

arg2 = 0xff
int32_t* eax_4 = &arg_8
arg_8 = 0

if (*ecx_1 s> 0)
    eax_4 = ecx_1

int32_t result = *eax_4
*(arg1 + 0x3c) = result
return result
