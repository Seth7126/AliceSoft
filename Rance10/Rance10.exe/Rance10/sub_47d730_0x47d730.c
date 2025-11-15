// 函数: sub_47d730
// 地址: 0x47d730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb64
char eax = sub_47d5a0(esi)

if (eax != 0)
    int32_t* ecx_1 = *(esi + 8)
    
    if (ecx_1 != 0)
        if (*(esi + 0x24) != 0)
            goto label_47d777
        
        eax = (*(*ecx_1 + 8))()
        
        if (eax != 0)
            *(esi + 0x24) = 1
        label_47d777:
            int32_t eax_5 = (*(**(esi + 8) + 0x14))(arg2, arg3)
            arg3 = fconvert.s(arg1)
            return eax_5

return eax
