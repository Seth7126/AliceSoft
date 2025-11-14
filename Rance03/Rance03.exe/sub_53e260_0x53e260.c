// 函数: sub_53e260
// 地址: 0x53e260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x1dc) != 0)
    sub_5f4ad0(*(arg1 + 0x1fc))
    *(arg1 + 0x1dc) = 0

int32_t* ecx_1 = *(arg1 + 0x1d8)

if (ecx_1 != 0)
    sub_53a360(ecx_1)
    *(arg1 + 0x1d8) = 0

if (*(arg1 + 0x1d4) != 0)
    sub_5f4ad0(*(arg1 + 0x1fc))
    *(arg1 + 0x1d4) = 0

int32_t* ecx_3 = *(arg1 + 0x1d0)

if (ecx_3 != 0)
    sub_53a360(ecx_3)
    *(arg1 + 0x1d0) = 0

*(arg1 + 0x1cc) = 0
sub_53e450(arg1)
sub_53e4b0(arg1)
__builtin_memset(arg1 + 0x128, 0, 0x18)
__builtin_memset(arg1 + 0x144, 0, 0x18)
sub_53e3a0(arg1)
int32_t eax = *(arg1 + 0x1a4)
*(arg1 + 0x1a8) = eax
bool cond:0 = *(arg1 + 0x28) u< 0x10
*(arg1 + 0x24) = 0

if (cond:0)
    *(arg1 + 0x14) = 0
    *(arg1 + 0xbc) = 1
    return eax

char* eax_1 = *(arg1 + 0x14)
*eax_1 = 0
*(arg1 + 0xbc) = 1
return eax_1
