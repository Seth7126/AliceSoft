// 函数: sub_50fe20
// 地址: 0x50fe20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb68
*(arg1 + 0xc4) = 0
int32_t eax

if (*(esi + 4) != 0)
    (*(**(esi + 4) + 0x10))()
else
    int32_t* ecx = data_7fcb88
    
    if (ecx != 0)
        eax = (**ecx)(0x75ff30)
        *(esi + 4) = eax
        
        if (eax != 0)
            (*(**(esi + 4) + 0x10))()

if (*(arg1 + 0x168) == 0)
    return sub_47f340() __tailcall

void* esi_1 = data_7fcb68

if (*(esi_1 + 4) == 0)
    int32_t* ecx_3 = data_7fcb88
    
    if (ecx_3 != 0)
        eax = (**ecx_3)(0x75ff30)
        *(esi_1 + 4) = eax
    
    if (ecx_3 == 0 || eax == 0)
        return 

jump(*(**(esi_1 + 4) + 0x18))
