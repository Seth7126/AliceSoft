// 函数: sub_4a7790
// 地址: 0x4a7790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg2
int32_t eax = 0
int32_t i_2 = 0x11
arg1[0x20a] = edx
void* edi = &arg1[1]
int32_t i

do
    int32_t j_1 = 0x20
    int32_t j
    
    do
        edx = edx * 0x5d588b65 + 1
        eax = eax u>> 1 | (edx & 0x80000000)
        j = j_1
        j_1 -= 1
    while (j != 1)
    *edi = eax
    edi += 4
    i = i_2
    i_2 -= 1
while (i != 1)
void* edx_2 = &arg1[2]
int32_t i_3 = 0x1f8
arg1[0x11] = arg1[0x11] << 0x17 ^ arg1[1] u>> 9 ^ arg1[0x10]
int32_t i_1

do
    int32_t ecx_6 = *(edx_2 - 4)
    edx_2 += 4
    *(edx_2 + 0x3c) = ecx_6 << 0x17 ^ *(edx_2 - 4) u>> 9 ^ *(edx_2 + 0x38)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
sub_4a7690(arg1)
sub_4a7690(arg1)
sub_4a7690(arg1)
void* result = sub_4a7690(arg1)
arg1[0x20b] = i_3
*arg1 = 0xffffffff
return result
