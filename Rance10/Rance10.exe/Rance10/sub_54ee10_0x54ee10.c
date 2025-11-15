// 函数: sub_54ee10
// 地址: 0x54ee10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = *arg1

if (ebx == 0)
    return 

int32_t eax_3 = *arg4 + *arg2
bool cond:0_1 = eax_3 s>= *arg2
int32_t var_1c = eax_3
int32_t* var_10_1
int32_t* var_c_1

if (cond:0_1)
    var_10_1 = arg2
    var_c_1 = &var_1c
else
    var_10_1 = &var_1c
    var_c_1 = arg2

int32_t ecx_1 = *var_10_1
int32_t eax_5 = *var_c_1
int32_t eax_8 = *arg5 + *arg3
bool cond:1_1 = eax_8 s>= *arg3
var_1c = eax_8
int32_t* var_18_1
int32_t* var_14_1

if (cond:1_1)
    var_18_1 = arg3
    var_14_1 = &var_1c
else
    var_18_1 = &var_1c
    var_14_1 = arg3

bool cond:2_1 = *(arg1 + 0x16) == 0
int32_t ecx_3 = *var_18_1
var_1c = *var_14_1
int32_t ebx_1

if (cond:2_1)
    int32_t* ecx_4 = *(ebx + 0x118)
    
    if (ecx_4 != 0)
        ebx_1 = (*(*ecx_4 + 0x10))()
    else
        ebx_1 = 0
else
    ebx_1 = arg1[0xb]

void* ecx_5 = *arg1
int32_t eax_13

if (ecx_5 == 0)
    eax_13 = 0
else if (*(arg1 + 0x16) == 0)
    int32_t* ecx_6 = *(ecx_5 + 0x118)
    
    if (ecx_6 == 0)
        eax_13 = 0
    else
        eax_13 = (*(*ecx_6 + 0x14))()
else
    eax_13 = arg1[0xc]

int32_t ecx_7 = ecx_1
int32_t esi_1 = ecx_3

if (ecx_7 s< 0)
    ecx_7 = 0

int32_t edx_2 = eax_5

if (ebx_1 s< ecx_7)
    ecx_7 = ebx_1

if (esi_1 s< 0)
    esi_1 = 0

if (eax_13 s< esi_1)
    esi_1 = eax_13

if (edx_2 s< 0)
    edx_2 = 0

int32_t ecx_8 = var_1c

if (ebx_1 s< edx_2)
    edx_2 = ebx_1

if (ecx_8 s< 0)
    ecx_8 = 0

*arg2 = ecx_7

if (eax_13 s< ecx_8)
    ecx_8 = eax_13

*arg3 = esi_1
*arg4 = edx_2 - ecx_7
*arg5 = ecx_8 - esi_1
