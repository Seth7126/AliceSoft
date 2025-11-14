// 函数: sub_4e4b30
// 地址: 0x4e4b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x44)

if (ecx != 0)
    (**ecx)(1)

int32_t* ecx_1 = *(arg1 + 8)
*(arg1 + 0x44) = 0

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 8) = 0

int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0xc) = 0

bool cond:0 = *(arg1 + 0x40) u< 0x10
void* eax_4 = arg1 + 0x2c
*(eax_4 + 0x10) = 0

if (not(cond:0))
    eax_4 = *eax_4

*eax_4 = 0
sub_505830(arg1 + 0x10)
__builtin_memset(arg1 + 0x48, 0, 0x14)
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
return result
