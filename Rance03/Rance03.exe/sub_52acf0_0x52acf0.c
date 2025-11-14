// 函数: sub_52acf0
// 地址: 0x52acf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int64_t* edx = *(arg1 + 0x20)
*edx = *arg2
edx[1].d = arg2[1].d
void* edx_1 = *(arg1 + 0x20)
*(edx_1 + 0xc) = *arg3
*(edx_1 + 0x14) = arg3[1].d
void* ecx = *(arg1 + 0x20)
*(ecx + 0x18) = *arg4
*(ecx + 0x20) = arg4[1].d
void* ecx_1 = *(arg1 + 0x20)
*(ecx_1 + 0x24) = *arg5
int32_t result = arg5[1].d
*(ecx_1 + 0x2c) = result
return result
