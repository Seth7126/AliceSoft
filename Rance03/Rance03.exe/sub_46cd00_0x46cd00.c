// 函数: sub_46cd00
// 地址: 0x46cd00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4e0
char eax = sub_46cb80(esi)

if (eax != 0)
    int32_t* ecx_1 = *(esi + 8)
    
    if (ecx_1 != 0)
        if (*(esi + 0x24) != 0)
            goto label_46cd47
        
        eax = (*(*ecx_1 + 8))()
        
        if (eax != 0)
            *(esi + 0x24) = 1
        label_46cd47:
            int32_t eax_5 = (*(**(esi + 8) + 0x14))(arg2, arg3)
            arg3 = fconvert.s(arg1)
            return eax_5

return eax
