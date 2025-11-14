// 函数: sub_4a64b0
// 地址: 0x4a64b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
void* esi = *(arg1 + 4)

if (*(esi + 0x4a0) != 0)
    return 

void* __saved_ebx_2 = *(*(esi + 0x58) + 0x90)

if (__saved_ebx_2 s<= 0)
    return 

void* __saved_ebx_1 = __saved_ebx_2
void* ebp_1 = sub_4a56f0(*(arg1 + 8))

if (ebp_1 == 0)
    return 

void* ebx_1 = sub_4a2d30(esi)

if (ebx_1 == 0)
    return 

sub_4b7b70(ebp_1 + 0x6c, *(esi + 0x2c))
int32_t eax_1 = *(*(arg1 + 4) + 0x2c)
var_4 = eax_1
sub_4b7b70(ebx_1 + 0x6c, eax_1)
sub_4158d0(ebx_1 + 0x100, &var_4)
*(ebx_1 + 0x70) = 1
__saved_ebx_2 = *(arg1 + 0xc)
int32_t ecx_6 = *(ebx_1 + 0x2c)

if (*(__saved_ebx_2 + 0x90) != ecx_6)
    *(__saved_ebx_2 + 0x90) = ecx_6
    *(__saved_ebx_2 + 4) = 1
