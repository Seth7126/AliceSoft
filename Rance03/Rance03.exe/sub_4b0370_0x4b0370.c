// 函数: sub_4b0370
// 地址: 0x4b0370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0xffffffff
int32_t var_8
int32_t* ecx = &var_8
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb8) - *(arg1 + 0xb4))
int32_t edx_3 = edx_2 s>> 2
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3 - 1
int32_t arg_4
bool cond:0 = eax_3 s>= arg_4
var_8 = eax_3
int32_t* eax_4 = &var_4

if (cond:0)
    ecx = &arg_4

if (*ecx s> 0xffffffff)
    eax_4 = ecx

int32_t result = *eax_4

if (*(arg1 + 0xc0) != result)
    int32_t* ecx_1 = *(arg1 + 0xc8)
    *(arg1 + 0xc0) = result
    
    if (ecx_1 != 0)
        return (**ecx_1)()

return result
