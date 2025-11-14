// 函数: sub_5fdeb0
// 地址: 0x5fdeb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_8 = arg1
bool cond:0 = *(arg1 + 0x45) != 0
*(arg1 + 0x3c) = arg3
*(arg1 + 0x40) = arg4
int32_t eax_1 = 0xc

if (cond:0)
    eax_1 = 6

int32_t var_c = eax_1
char result
int32_t ecx_1
result, ecx_1 = sub_5fe8e0(arg1 + 4, arg2)

if (result == 0)
    return result

int32_t var_8_1 = ecx_1
int32_t var_c_1 = 4
return sub_5fe8e0(arg1 + 0x1c, arg2) != 0
