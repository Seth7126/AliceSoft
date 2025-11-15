// 函数: sub_50fea0
// 地址: 0x50fea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb68
*(arg1 + 0xbc) = 0xffffffff
*(arg1 + 0xc0) = 0xffffffff
*(arg1 + 0xb8) = 0
int32_t eax

if (*(esi + 4) != 0)
    (*(**(esi + 4) + 0x1c))()
else
    int32_t* ecx = data_7fcb88
    
    if (ecx != 0)
        eax = (**ecx)(0x75ff30)
        *(esi + 4) = eax
        
        if (eax != 0)
            (*(**(esi + 4) + 0x1c))()

void* esi_1 = data_7fcb68

if (*(esi_1 + 4) != 0)
    (*(**(esi_1 + 4) + 0x14))()
else
    int32_t* ecx_2 = data_7fcb88
    
    if (ecx_2 != 0)
        eax = (**ecx_2)(0x75ff30)
        *(esi_1 + 4) = eax
        
        if (eax != 0)
            (*(**(esi_1 + 4) + 0x14))()

void* esi_2 = data_7fcb68

if (*(esi_2 + 4) == 0)
    int32_t* ecx_4 = data_7fcb88
    
    if (ecx_4 != 0)
        eax = (**ecx_4)(0x75ff30)
        *(esi_2 + 4) = eax
    
    if (ecx_4 == 0 || eax == 0)
        return 

jump(*(**(esi_2 + 4) + 0x28))
