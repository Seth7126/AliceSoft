// 函数: sub_4e8dc0
// 地址: 0x4e8dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* ecx = &var_4
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x114) - *(arg1 + 0x110))
int32_t edx_3 = edx_2 s>> 2
void* eax_3 = (edx_3 u>> 0x1f) + edx_3 - 1
int32_t arg_4
bool cond:0 = eax_3 s>= arg_4
var_4 = eax_3

if (cond:0)
    ecx = &arg_4

int32_t result = *ecx
int32_t result_1 = 0xffffffff

if (result s> 0xffffffff)
    result_1 = result

if (*(arg1 + 0x11c) != result_1)
    *(arg1 + 0x11c) = result_1
    *(arg1 + 0x124) = 1

return result
