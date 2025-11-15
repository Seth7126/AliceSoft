// 函数: sub_686380
// 地址: 0x686380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_692530(arg1 + 0x1ec)
sub_692530(arg1 + 0x174)
int32_t* ecx_2 = *(arg1 + 0x144)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x144) = 0

int32_t* ecx_3 = *(arg1 + 0x140)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x140) = 0

sub_6839b0(arg1 + 0x124)
sub_6881c0(arg1 + 0x10c)
sub_6881c0(arg1 + 0xf4)
sub_6881c0(arg1 + 0xdc)
sub_6881c0(arg1 + 0xc4)
sub_6881c0(arg1 + 0xac)
sub_6881c0(arg1 + 0x94)
sub_6881c0(arg1 + 0x7c)
int32_t* ecx_12 = *(arg1 + 0x264)

if (ecx_12 != 0)
    (**ecx_12)(1)
    *(arg1 + 0x264) = 0

__builtin_memset(arg1 + 0x14c, 0, 0x28)
int32_t edx = 0
*(arg1 + 0x284) = 0
int32_t result = *(arg1 + 0x2a8)
int32_t* ecx_13 = *(arg1 + 0x2a4)
uint32_t esi_4 = (result - ecx_13 + 3) u>> 2

if (ecx_13 u> result)
    esi_4 = 0

if (esi_4 != 0)
    do
        edx += 1
        *ecx_13 = 0
        ecx_13 = &ecx_13[1]
    while (edx != esi_4)

return result
