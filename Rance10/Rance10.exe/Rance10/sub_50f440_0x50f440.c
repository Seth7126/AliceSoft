// 函数: sub_50f440
// 地址: 0x50f440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char result = (*(*arg1 + 0x18))()

if (result == 0)
    return result

void* esi = data_7fcb68
int32_t* ecx

if (*(esi + 4) != 0)
label_50f47b:
    
    if ((*(**(esi + 4) + 0x30))() != 0)
        return 1
    
    esi = data_7fcb68
    ecx = data_7fcb88
else
    ecx = data_7fcb88
    
    if (ecx != 0)
        int32_t eax_2 = (**ecx)(0x75ff30)
        *(esi + 4) = eax_2
        
        if (eax_2 != 0)
            goto label_50f47b
        
        esi = data_7fcb68
        ecx = data_7fcb88

if (*(esi + 4) != 0)
label_50f4af:
    
    if ((*(**(esi + 4) + 0x2c))() != 0)
        return 1
else if (ecx != 0)
    int32_t eax_7 = (**ecx)(0x75ff30)
    *(esi + 4) = eax_7
    
    if (eax_7 != 0)
        goto label_50f4af

return 0
