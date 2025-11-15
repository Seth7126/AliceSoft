// 函数: sub_649720
// 地址: 0x649720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
bool cond:0 = *(arg1 + 0x45) != 0
*(arg1 + 0xc) = arg3
*(arg1 + 0x10) = arg4
int32_t eax_1 = 0xc

if (cond:0)
    eax_1 = 6

char result
int32_t ecx_1
result, ecx_1 = sub_649ee0(arg1 + 0x14, arg2, eax_1)

if (result == 0)
    return result

int32_t var_8_1 = ecx_1
return sub_649ee0(arg1 + 0x2c, arg2, 4) != 0
