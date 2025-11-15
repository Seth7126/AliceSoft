// 函数: sub_45d420
// 地址: 0x45d420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x10)
int32_t ecx_1

if (eax == 0x20)
    ecx_1 = (*(*arg3 + 8))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
    
    if (ecx_1 != 0)
    label_45d466:
        *(arg2 + 8) = ecx_1
        void* eax_3
        eax_3.b = 1
        return eax_3
else if (eax == 0x18)
    ecx_1 = (*(*arg3 + 0xc))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
    
    if (ecx_1 != 0)
        goto label_45d466
eax.b = 0
return eax
