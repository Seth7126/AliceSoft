// 函数: sub_47f300
// 地址: 0x47f300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb68

if (*(esi + 4) == 0)
    int32_t* ecx_1 = data_7fcb88
    int32_t eax
    
    if (ecx_1 != 0)
        eax = (**ecx_1)(0x75ff30)
        *(esi + 4) = eax
    
    if (ecx_1 == 0 || eax == 0)
        return 

jump(*(**(esi + 4) + 0x14))
