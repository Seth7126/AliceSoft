// 函数: sub_5e8b90
// 地址: 0x5e8b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 4)

if (esi == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_2
int32_t ebx

if (arg2 == 0)
    ebx.b = arg3 != 0
    
    if (*(esi + 4) != ebx.b)
        if (ebx.b != 0)
            sub_46daa0(esi)
        else if (*(esi + 0x3a) == ebx.b)
            if (*(esi + 0x3b) == ebx.b)
                ShowCursor(1)
                *(esi + 0x3b) = 1
            
            sub_46daa0(esi)
        
        *(esi + 4) = ebx.b
else if (arg2 == 1)
    ebx.b = arg3 != 0
    
    if (*(esi + 5) != ebx.b)
        if (ebx.b == 0 && *(esi + 0x38) != ebx.b)
            *(esi + 0x38) = ebx.b
            
            if (*(esi + 0x3b) == ebx.b)
                ShowCursor(1)
                *(esi + 0x3b) = 1
        
        *(esi + 5) = ebx.b
        eax_2.b = 1
        return eax_2
else
    if (arg2 != 2)
        eax_2.b = 0
        return eax_2
    
    ebx.b = arg3 != 0
    
    if (*(esi + 6) != ebx.b)
        if (ebx.b == 0 && *(esi + 0x39) != ebx.b)
            *(esi + 0x39) = ebx.b
            
            if (*(esi + 0x3b) == ebx.b)
                ShowCursor(1)
                *(esi + 0x3b) = 1
        
        *(esi + 6) = ebx.b
        eax_2.b = 1
        return eax_2
eax_2.b = 1
return eax_2
