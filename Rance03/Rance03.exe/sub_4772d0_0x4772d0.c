// 函数: sub_4772d0
// 地址: 0x4772d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char eax_2 = (*(**(arg1 + 4) + 8))(arg2, arg3)

if (eax_2 == 0)
    return eax_2

int32_t* ecx_1 = *(arg1 + 4)
int32_t ebx
ebx.b = *(arg1 + 8)
int32_t eax_3
eax_3.b = ebx.b == 0
*(arg1 + 0xc) = eax_3 + 1
int32_t eax_5
eax_5.b = ebx.b == 0
(*(*ecx_1 + 0x28))(eax_5)
bool cond:0 = *(arg1 + 0x28) u< 0x10
void* eax_6 = arg1 + 0x14
*(eax_6 + 0x10) = 0

if (not(cond:0))
    eax_6 = *eax_6

*eax_6 = 0
eax_6.b = 1
return eax_6
