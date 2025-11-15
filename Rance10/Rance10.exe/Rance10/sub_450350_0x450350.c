// 函数: sub_450350
// 地址: 0x450350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x80)

if (ecx == 0 || *(arg1 + 4) == 0)
    int32_t eax
    eax.b = 1
    return eax

char eax_3
int32_t ecx_1
eax_3, ecx_1 = (*(*ecx + 0x28))()

if (eax_3 == 0)
    int32_t var_c_5 = ecx_1
    (*(*arg2 + 0x68))(0, 0x3f800000)
    
    if (sub_451e30(arg1 + 8, arg2) != 0)
        *(arg1 + 4) = 0
        return 1
else if ((*(**(arg1 + 0x80) + 0x1c))(arg2) != 0 && sub_451e30(arg1 + 0x44, arg2) != 0
        && (*(**(arg1 + 0x80) + 0x20))() != 0 && (*(**(arg1 + 0x80) + 0x14))(arg2) != 0
        && sub_451e30(arg1 + 8, arg2) != 0 && (*(**(arg1 + 0x80) + 0x18))() != 0)
    char eax_6 = (*(**(arg1 + 0x80) + 0x24))(arg2)
    
    if (eax_6 == 0)
        return eax_6
    
    *(arg1 + 4) = 0
    return 1

return 0
