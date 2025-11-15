// 函数: sub_693050
// 地址: 0x693050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (*(*arg2 + 0x10))()
int32_t* eax_2 = (*(*arg2 + 0x14))()
int32_t ebx
ebx.b = (*(*arg2 + 0x24))()
char eax_4
int32_t ecx_4
eax_4, ecx_4 = (*(*arg2 + 0x28))()

if (ebx.b != 0)
    int32_t var_14_1 = ecx_4
    
    if (eax_4 == 0)
        eax_4 = sub_692f70(arg1, eax_1, eax_2)
    else
        eax_4 = sub_692f00(arg1, eax_1, eax_2)
    
    if (eax_4 != 0)
        return 1
else if (eax_4 != 0 && sub_692fe0(arg1, eax_1, eax_2) != 0)
    return 1

return 0
