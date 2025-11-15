// 函数: sub_47ee40
// 地址: 0x47ee40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb64
char eax = sub_47d5a0(esi)

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
