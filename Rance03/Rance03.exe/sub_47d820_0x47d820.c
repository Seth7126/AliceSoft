// 函数: sub_47d820
// 地址: 0x47d820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = data_75d4f8

if (*(ecx + 4) == 0 || *(ecx + 0x24) == *(ecx + 0x28) || arg1 s< 0 || arg1 s>= *(ecx + 0x20))
    return 

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(arg1)
char* edx_5 = (((edx_1 & 7) + eax_2) s>> 3) + *(ecx + 0x24)
int32_t esi_1 = arg1 & 0x80000007

if (esi_1 s< 0)
    esi_1 = ((esi_1 - 1) | 0xfffffff8) + 1

*edx_5 |= (0x80 s>> esi_1.b).b
