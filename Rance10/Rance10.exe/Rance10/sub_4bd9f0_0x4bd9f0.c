// 函数: sub_4bd9f0
// 地址: 0x4bd9f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* ecx = *(arg1 + 0x1c)

if (ecx != 0)
    int32_t eax_2 = (*(*ecx + 0x10))()
    int32_t eax_3 = (*(**(arg1 + 0x1c) + 0x14))()
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8) + 1, *(arg1 + 0xc) + 1, *(arg1 + 0x1c), 0, 0, eax_2, eax_3)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8) + 1, *(arg1 + 0xc), *(arg1 + 0x1c), 0, 0, eax_2, 1)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8) + 1, *(arg1 + 0xc) + *(arg1 + 0x18) - 1, *(arg1 + 0x1c), 0, 
        eax_3 - 1, eax_2, 1)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8), *(arg1 + 0xc) + 1, *(arg1 + 0x1c), 0, 0, 1, eax_3)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8) + *(arg1 + 0x14) - 1, *(arg1 + 0xc) + 1, *(arg1 + 0x1c), 
        eax_2 - 1, 0, 1, eax_3)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8), *(arg1 + 0xc), *(arg1 + 0x1c), 0, 0, 1, 1)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8) + *(arg1 + 0x14) - 1, *(arg1 + 0xc), *(arg1 + 0x1c), 
        eax_2 - 1, 0, 1, 1)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8), *(arg1 + 0xc) + *(arg1 + 0x18) - 1, *(arg1 + 0x1c), 0, 
        eax_3 - 1, 1, 1)
    (*(*arg3 + 0x5c))(arg2, *(arg1 + 8) + *(arg1 + 0x14) - 1, *(arg1 + 0xc) + *(arg1 + 0x18) - 1, 
        *(arg1 + 0x1c), eax_2 - 1, eax_3 - 1, 1, 1)
    return 

void* i = arg1 + 0x20

for (void* edi_2 = i + 8; i != edi_2; i += 4)
    if (*i != 0)
        sub_4bd9f0(arg2, arg3)
