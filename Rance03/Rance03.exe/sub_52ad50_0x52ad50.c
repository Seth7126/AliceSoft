// 函数: sub_52ad50
// 地址: 0x52ad50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *(arg1 + 0x2c)
*esi = *arg2
esi[1] = arg2[1]
void* edx = *(arg1 + 0x2c)
*(edx + 8) = *arg3
*(edx + 0xc) = arg3[1]
void* edx_1 = *(arg1 + 0x2c)
*(edx_1 + 0x10) = *arg4
*(edx_1 + 0x14) = arg4[1]
void* edx_2 = *(arg1 + 0x2c)
*(edx_2 + 0x18) = *arg5
int32_t result = arg5[1]
*(edx_2 + 0x1c) = result
return result
