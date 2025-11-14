// 函数: sub_56a400
// 地址: 0x56a400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x5c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x5c) = 0

int32_t* ecx_1 = *(arg1 + 0x64)
*(arg1 + 0x60) = 0x7f7fffff

if (ecx_1 != 0)
    (*(*ecx_1 + 0x10))(1)
    *(arg1 + 0x64) = 0

bool cond:0 = *(arg1 + 0x28) u< 0x10
void* eax_3 = arg1 + 0x14
*(eax_3 + 0x10) = 0

if (not(cond:0))
    eax_3 = *eax_3

*eax_3 = 0

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    int32_t* ecx_2 = *i
    
    if (ecx_2 != 0)
        (**ecx_2)(1)

int32_t result = *(arg1 + 0x30)
*(arg1 + 0x34) = result
int32_t* ecx_3 = *(arg1 + 0x4c)

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    *(arg1 + 0x4c) = 0

*(arg1 + 0x10) = 0
return result
