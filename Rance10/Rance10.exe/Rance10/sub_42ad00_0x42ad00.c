// 函数: sub_42ad00
// 地址: 0x42ad00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    int32_t eax_2
    eax_2.b = (*(*ecx + 8))() == 1
    
    if (eax_2.b != 0)
        sub_426bb0(*(arg1 + 4), arg2, arg3)
        return arg2

char* esi_1 = arg2
*(esi_1 + 0x14) = 0xf
*(esi_1 + 0x10) = 0
*esi_1 = 0
sub_403590(esi_1, &data_7fcc28, 0, 0xffffffff)
return esi_1
