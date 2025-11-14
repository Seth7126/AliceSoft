// 函数: sub_46e500
// 地址: 0x46e500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4e0
char eax = sub_46cb80(esi)

if (eax != 0)
    int32_t* ecx_1 = *(esi + 0x10)
    
    if (ecx_1 != 0)
        *arg1 = (*(*ecx_1 + 4))()
        int32_t eax_4 = (*(**(esi + 0x10) + 8))()
        *arg2 = eax_4
        return eax_4

*arg1 = 0
*arg2 = 0
return eax
