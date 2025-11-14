// 函数: sub_6075f0
// 地址: 0x6075f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_2 = arg3
int32_t ecx = arg3[4]
int32_t* edx

if (arg3[5] u< 0x10)
    edx = arg3
else
    edx = *arg3

int32_t ebp = arg2[4]
int32_t* var_4

if (arg2[5] u< 0x10)
    var_4 = arg2
else
    var_4 = *arg2

int32_t eax_1 = ecx

if (ebp u< ecx)
    eax_1 = ebp

int32_t eax_2 = sub_405190(eax_1, edx, var_4, eax_1)
bool cond:2 = eax_2 s< 0

if (eax_2 == 0)
    int32_t ecx_2 = arg3[4]
    
    if (ebp u>= ecx_2)
        eax_2.b = ebp != ecx_2
    else
        eax_2 = 0xffffffff
    
    cond:2 = eax_2 s< 0

eax_2.b = cond:2

if (eax_2.b != 0 && arg2 != arg3)
    sub_607920(arg2, arg3)
    int32_t ecx_4 = arg2[4]
    arg2[4] = arg3[4]
    arg3[4] = ecx_4
    int32_t ecx_5 = arg2[5]
    arg2[5] = arg3[5]
    arg3[5] = ecx_5

int32_t ebp_1 = arg2[4]
int32_t* edx_1

if (arg2[5] u< 0x10)
    edx_1 = arg2
else
    edx_1 = *arg2

int32_t ecx_6 = *(arg4 + 0x10)
void* var_4_1

if (*(arg4 + 0x14) u< 0x10)
    var_4_1 = arg4
else
    var_4_1 = *arg4

int32_t eax_6 = ebp_1

if (ecx_6 u< ebp_1)
    eax_6 = ecx_6

int32_t result = sub_405190(eax_6, edx_1, var_4_1, eax_6)
bool cond:6 = result s< 0

if (result == 0)
    int32_t ecx_8 = *(arg4 + 0x10)
    
    if (ecx_8 u>= ebp_1)
        result.b = ecx_8 != ebp_1
    else
        result = 0xffffffff
    
    cond:6 = result s< 0

result.b = cond:6

if (result.b != 0)
    if (arg4 != arg2)
        sub_607920(arg4, arg2)
        int32_t ecx_10 = *(arg4 + 0x10)
        *(arg4 + 0x10) = arg2[4]
        arg2[4] = ecx_10
        int32_t ecx_11 = *(arg4 + 0x14)
        *(arg4 + 0x14) = arg2[5]
        arg2[5] = ecx_11
    
    result = sub_40c3a0(arg2, arg3)
    
    if (result.b != 0 && arg2 != arg3)
        sub_607920(arg2, arg3)
        int32_t ecx_13 = arg2[4]
        arg2[4] = arg3[4]
        arg3[4] = ecx_13
        int32_t ecx_14 = arg2[5]
        result = arg3[5]
        arg2[5] = result
        arg3[5] = ecx_14

return result
