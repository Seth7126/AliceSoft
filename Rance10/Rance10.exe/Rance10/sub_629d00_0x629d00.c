// 函数: sub_629d00
// 地址: 0x629d00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void** edx = *(arg1 + 0x38)

if (edx != 0)
    void* esi_1 = **(arg1 + 0x24)
    sub_60c2a0(esi_1 + 0x118, &var_4, edx)
    void* eax_3 = var_4
    
    if (eax_3 != *(esi_1 + 0x11c))
        return *(eax_3 + 0x20)

return 0xffffffff
