// 函数: sub_689cb0
// 地址: 0x689cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if (*(arg1 + 0x48) != 0 || *(arg1 + 0x34) == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* ecx_1 = *(*(arg1 + 8) + 0x38)
(*(*ecx_1 + 0x164))(ecx_1, 1, arg1 + 0x4c, arg1 + 0x50)
void* edi = *(arg1 + 8)
int32_t ebx = *(arg1 + 0x3c)
var_4 = *(arg1 + 0x34)
int32_t* ecx_2 = *(edi + 0x38)
void* eax_4

if (ecx_2 != 0)
    (*(*ecx_2 + 0x84))(ecx_2, 1, &var_4, ebx)
    *(edi + 0x48) = var_4
    *(edi + 0x4c) = ebx
    
    if ((*(**(arg1 + 0x54) + 8))().b != 0)
        *(arg1 + 0x48) = 1
        eax_4.b = 1
        return eax_4

eax_4.b = 0
return eax_4
