// 函数: sub_4a9480
// 地址: 0x4a9480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = data_7fcb98

if (*(ecx + 8) == 0 || *(ecx + 0x10) == *(ecx + 0x14) || arg1 s< 0 || arg1 s>= *(ecx + 0xc))
    return 

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(arg1)
char* edx_5 = (((edx_1 & 7) + eax_2) s>> 3) + *(ecx + 0x10)
int32_t esi_1 = arg1 & 0x80000007

if (esi_1 s< 0)
    esi_1 = ((esi_1 - 1) | 0xfffffff8) + 1

*edx_5 |= (0x80 s>> esi_1.b).b
