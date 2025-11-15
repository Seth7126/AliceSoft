// 函数: sub_4a4690
// 地址: 0x4a4690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 4)

if (esi == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_5
int32_t ebx

if (arg2 == 0)
    ebx.b = arg3 != 0
    
    if (*(esi + 8) != ebx.b)
        if (arg3 != 0)
            sub_47e590(esi)
        else if (*(esi + 0x3e) == arg3.b)
            if (*(esi + 0x3f) == arg3.b)
                ShowCursor(1)
                *(esi + 0x3f) = 1
            
            sub_47e590(esi)
        
        *(esi + 8) = ebx.b
else if (arg2 == 1)
    ebx.b = arg3 != 0
    
    if (*(esi + 9) != ebx.b)
        if (arg3 == 0 && *(esi + 0x3c) != arg3.b)
            *(esi + 0x3c) = arg3.b
            
            if (*(esi + 0x3f) == arg3.b)
                ShowCursor(1)
                *(esi + 0x3f) = 1
        
        *(esi + 9) = ebx.b
        eax_5.b = 1
        return eax_5
else
    if (arg2 != 2)
        int32_t eax_4
        eax_4.b = 0
        return eax_4
    
    ebx.b = arg3 != 0
    
    if (*(esi + 0xa) != ebx.b)
        if (arg3 == 0 && *(esi + 0x3d) != arg3.b)
            *(esi + 0x3d) = arg3.b
            
            if (*(esi + 0x3f) == arg3.b)
                ShowCursor(1)
                *(esi + 0x3f) = 1
        
        *(esi + 0xa) = ebx.b
        eax_5.b = 1
        return eax_5
eax_5.b = 1
return eax_5
