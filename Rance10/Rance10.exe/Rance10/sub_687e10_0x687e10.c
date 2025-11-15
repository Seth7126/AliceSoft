// 函数: sub_687e10
// 地址: 0x687e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_68aa40(arg1 + 0x288)
sub_6845d0(arg1 + 0x268)
sub_692530(arg1 + 0x1ec)
sub_692530(arg1 + 0x174)
int32_t* ecx_4 = *(arg1 + 0x264)

if (ecx_4 != 0)
    (**ecx_4)(1)
    *(arg1 + 0x264) = 0

__builtin_memset(arg1 + 0x14c, 0, 0x28)
int32_t edx = 0
*(arg1 + 0x284) = 0
int32_t eax_2 = *(arg1 + 0x2a8)
int32_t* ecx_5 = *(arg1 + 0x2a4)
uint32_t edi_3 = (eax_2 - ecx_5 + 3) u>> 2

if (ecx_5 u> eax_2)
    edi_3 = 0

if (edi_3 != 0)
    do
        edx += 1
        *ecx_5 = 0
        ecx_5 = &ecx_5[1]
    while (edx != edi_3)

void* result = sub_6850e0(arg1 + 0x2c)
*(arg1 + 0x2b0) = 0
*(arg1 + 0x2b2) = 1
*(arg1 + 0x2b4) = 0
*(arg1 + 0x2b8) = 0
*(arg1 + 0x2bc) = 0
return result
