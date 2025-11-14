// 函数: sub_54c430
// 地址: 0x54c430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_54e520(*(*(arg1 + 0x78) + 4))
void* eax_1 = *(arg1 + 0x78)
*(eax_1 + 4) = eax_1
int32_t* eax_2 = *(arg1 + 0x78)
*eax_2 = eax_2
void* eax_3 = *(arg1 + 0x78)
*(eax_3 + 8) = eax_3
*(arg1 + 0x7c) = 0
sub_54e4e0(*(*(arg1 + 0x70) + 4))
void* eax_5 = *(arg1 + 0x70)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x70)
*eax_6 = eax_6
void* eax_7 = *(arg1 + 0x70)
*(eax_7 + 8) = eax_7
*(arg1 + 0x74) = 0
sub_54e4a0(*(*(arg1 + 0x68) + 4))
void* eax_9 = *(arg1 + 0x68)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x68)
*eax_10 = eax_10
void* eax_11 = *(arg1 + 0x68)
*(eax_11 + 8) = eax_11
*(arg1 + 0x6c) = 0
sub_54e460(*(*(arg1 + 0x60) + 4))
void* eax_13 = *(arg1 + 0x60)
*(eax_13 + 4) = eax_13
int32_t* eax_14 = *(arg1 + 0x60)
*eax_14 = eax_14
void* eax_15 = *(arg1 + 0x60)
*(eax_15 + 8) = eax_15
*(arg1 + 0x64) = 0
int32_t ecx_4 = *(arg1 + 0x58)

for (void* i = *(arg1 + 0x54); i != ecx_4; i += 0x14)
    *(i + 8) = &sealengine::CFrameMulAlpha::`vftable'

*(arg1 + 0x58) = *(arg1 + 0x54)
int32_t ecx_5 = *(arg1 + 0x4c)

for (void* i_1 = *(arg1 + 0x48); i_1 != ecx_5; i_1 += 0x20)
    *(i_1 + 8) = &sealengine::CFrameAddColor::`vftable'

*(arg1 + 0x4c) = *(arg1 + 0x48)
int32_t ecx_6 = *(arg1 + 0x40)

for (void* i_2 = *(arg1 + 0x3c); i_2 != ecx_6; i_2 += 0x20)
    *(i_2 + 8) = &sealengine::CFrameMulColor::`vftable'

void* var_10_4 = arg1
*(arg1 + 0x40) = *(arg1 + 0x3c)
int32_t var_14 = ecx_6
sub_550060(*(arg1 + 0x30), *(arg1 + 0x34))
int32_t result = *(arg1 + 0x30)
*(arg1 + 0x34) = result
*(arg1 + 0x2c) = 0
return result
