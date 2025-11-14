// 函数: sub_57b010
// 地址: 0x57b010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_53c070(arg1 + 0x9c)
void* var_10 = arg1
*(arg1 + 0x94) = *(arg1 + 0x90)
void* var_14 = arg1 + 0x9c
int32_t* ecx_2 = sub_57ff80(*(arg1 + 0x40), *(arg1 + 0x44))
*(arg1 + 0x44) = *(arg1 + 0x40)

for (int32_t* i = *(arg1 + 0x4c); i != *(arg1 + 0x50); i = &i[1])
    ecx_2 = *i
    
    if (ecx_2 != 0)
        ecx_2 = (**ecx_2)(1)

void* var_10_1 = arg1
*(arg1 + 0x50) = *(arg1 + 0x4c)
int32_t* var_14_1 = ecx_2
sub_57ffd0(*(arg1 + 0x58), *(arg1 + 0x5c))
*(arg1 + 0x5c) = *(arg1 + 0x58)
*(arg1 + 0x68) = *(arg1 + 0x64)
void* eax_6 = sub_51faa0(arg1 + 0x30)
bool cond:0 = *(arg1 + 0x84) u< 0x10
*(arg1 + 0x80) = 0

if (cond:0)
    *(arg1 + 0x70) = 0
    return eax_6

char* eax_7 = *(arg1 + 0x70)
*eax_7 = 0
return eax_7
