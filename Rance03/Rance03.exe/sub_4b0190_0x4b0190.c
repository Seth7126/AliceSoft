// 函数: sub_4b0190
// 地址: 0x4b0190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t var_10 = arg2
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0xb8) - *(arg1 + 0xb4))
int32_t* eax_1 = &var_4
int32_t edx_3 = edx_2 s>> 2
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3
int32_t arg_4
bool cond:0 = ecx_2 s>= arg_4
var_4 = ecx_2
int32_t* ecx_3 = &var_4

if (cond:0)
    eax_1 = &arg_4

int32_t eax_2 = *eax_1
arg_4 = eax_2

if (eax_2 s>= 0)
    ecx_3 = &arg_4

var_4 = 0
int32_t* result = sub_4b1fd0(arg1 + 0xb4, &arg_4, *(arg1 + 0xb4) + *ecx_3 * 0x18, ecx_3)
int32_t* ecx_5 = *(arg1 + 0xc8)

if (ecx_5 == 0)
    return result

return (**ecx_5)()
