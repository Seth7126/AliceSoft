// 函数: sub_58a690
// 地址: 0x58a690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_59c810(arg1 + 0x518)
*(arg1 + 0x50d) = 0
int32_t* ecx_1 = *(arg1 + 0x4fc)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x4fc) = 0

*(arg1 + 0x500) = 0
sub_528630(arg1 + 0x498)
sub_59bf90(arg1 + 0x3d4)
*(arg1 + 0x3d0) = 0
int32_t* ecx_4 = *(arg1 + 0x3b8)

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    *(arg1 + 0x3b8) = 0

*(arg1 + 0x3bc) = 0
*(arg1 + 0x3c0) = 0
*(arg1 + 0x3c4) = 0
*(arg1 + 0x3c8) = 0
*(arg1 + 0x3cc) = 0
*(arg1 + 0x3b0) = 0
int32_t* ecx_5 = *(arg1 + 0x388)

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    *(arg1 + 0x388) = 0

*(arg1 + 0x3ac) = 0
sub_52b110(arg1 + 0x314)
*(arg1 + 0x30c) = 0
*(arg1 + 0x310) = 0
int32_t* ecx_7 = *(arg1 + 0x2f0)

if (ecx_7 != 0)
    (*(*ecx_7 + 4))()
    *(arg1 + 0x2f0) = 0

*(arg1 + 0x2f4) = 0
*(arg1 + 0x2f8) = 0
*(arg1 + 0x2fc) = 0
*(arg1 + 0x300) = 0
*(arg1 + 0x304) = 0
int32_t* ecx_8 = *(arg1 + 0x2e8)

if (ecx_8 != 0)
    (*(*ecx_8 + 4))()
    *(arg1 + 0x2e8) = 0

for (int32_t* i = *(arg1 + 0x15c); i != *(arg1 + 0x160); i = &i[1])
    int32_t* ecx_10 = *i
    
    if (ecx_10 != 0)
        (**ecx_10)(1)

*(arg1 + 0x160) = *(arg1 + 0x15c)
*(arg1 + 0x154) = 0xffffffff
*(arg1 + 0x150) = 0

for (int32_t* i_1 = *(arg1 + 0x134); i_1 != *(arg1 + 0x138); i_1 = &i_1[1])
    int32_t* ecx_11 = *i_1
    
    if (ecx_11 != 0)
        (**ecx_11)(1)

int32_t result = *(arg1 + 0x134)
*(arg1 + 0x138) = result
int32_t* ecx_12 = *(arg1 + 0x120)

if (ecx_12 != 0)
    result = (**ecx_12)(1)
    *(arg1 + 0x120) = 0

int32_t* ecx_13 = *(arg1 + 8)
*(arg1 + 0x124) = 1
*(arg1 + 0x128) = 0
*(arg1 + 0x12c) = 0

if (ecx_13 != 0)
    result = (*(*ecx_13 + 4))()
    *(arg1 + 8) = 0

return result
