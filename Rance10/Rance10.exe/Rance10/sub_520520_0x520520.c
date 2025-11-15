// 函数: sub_520520
// 地址: 0x520520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb68
*(arg1 + 0xb8) = 0
int32_t eax
int32_t* ecx

if (*(esi + 4) != 0)
label_520559:
    (*(**(esi + 4) + 0x10))()
    ecx = data_7fcb88
    esi = data_7fcb68
else
    ecx = data_7fcb88
    
    if (ecx != 0)
        eax = (**ecx)(0x75ff30)
        *(esi + 4) = eax
        
        if (eax != 0)
            goto label_520559
        
        ecx = data_7fcb88
        esi = data_7fcb68

if (*(arg1 + 0x1b8) == 0)
    if (*(esi + 4) != 0)
        jump(*(**(esi + 4) + 0x1c))
    
    if (ecx != 0)
        eax = (**ecx)(0x75ff30)
        *(esi + 4) = eax
        
        if (eax != 0)
            jump(*(**(esi + 4) + 0x1c))
else
    if (*(arg1 + 0x160) == 0)
        return sub_47f340() __tailcall
    
    if (*(esi + 4) != 0)
        jump(*(**(esi + 4) + 0x18))
    
    if (ecx != 0)
        eax = (**ecx)(0x75ff30)
        *(esi + 4) = eax
        
        if (eax != 0)
            jump(*(**(esi + 4) + 0x18))
