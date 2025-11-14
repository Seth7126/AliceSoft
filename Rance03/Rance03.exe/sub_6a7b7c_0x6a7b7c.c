// 函数: sub_6a7b7c
// 地址: 0x6a7b7c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg5
char* esi = arg1
*ebx = 0
char* edi = arg3
*arg4 = 1

if (arg2 != 0)
    *arg2 = edi
    arg2 = &arg2[1]

int32_t* ecx = nullptr
arg1 = nullptr
int32_t* eax_1

while (true)
    if (*esi != 0x22)
        *ebx += 1
        
        if (edi != 0)
            eax_1.b = *esi
            *edi = eax_1.b
            edi = &edi[1]
        
        eax_1.b = *esi
        esi = &esi[1]
        arg5:3.b = eax_1.b
        
        if (__ismbblead(eax_1.b) != 0)
            *ebx += 1
            
            if (edi != 0)
                eax_1.b = *esi
                *edi = eax_1.b
                edi = &edi[1]
            
            esi = &esi[1]
        
        eax_1.b = arg5:3.b
        
        if (eax_1.b == 0)
            esi -= 1
            break
        
        ecx = arg1
    else
        eax_1.b = ecx == 0
        esi = &esi[1]
        ecx = eax_1
        eax_1.b = 0x22
        arg1 = ecx
    
    if (ecx == 0)
        if (eax_1.b != 0x20 && eax_1.b != 9)
            continue
        
        if (edi == 0)
            break
        
        edi[0xffffffff] = 0
        break

arg5 = nullptr

while (*esi != 0)
    while (true)
        eax_1.b = *esi
        
        if (eax_1.b != 0x20 && eax_1.b != 9)
            break
        
        esi = &esi[1]
    
    if (*esi == 0)
        break
    
    if (arg2 != 0)
        *arg2 = edi
        arg2 = &arg2[1]
    
    *arg4 += 1
    
    while (true)
        int32_t edx_3 = 1
        uint32_t i = 0
        
        while (*esi == 0x5c)
            esi = &esi[1]
            i += 1
        
        if (*esi == 0x22)
            if ((i.b & 1) == 0)
                if (arg5 == 0 || esi[1] != 0x22)
                    edx_3 = 0
                    eax_1.b = arg5 == 0
                    arg5 = eax_1
                else
                    esi = &esi[1]
            
            i u>>= 1
        
        while (i != 0)
            i -= 1
            
            if (edi != 0)
                *edi = 0x5c
                edi = &edi[1]
            
            *ebx += 1
        
        eax_1.b = *esi
        
        if (eax_1.b == 0)
            break
        
        if (arg5 == i)
            if (eax_1.b == 0x20)
                break
            
            if (eax_1.b == 9)
                break
        
        if (edx_3 != 0)
            eax_1 = __ismbblead(eax_1.b)
            
            if (edi != 0)
                if (eax_1 != 0)
                    eax_1.b = *esi
                    *edi = eax_1.b
                    edi = &edi[1]
                    esi = &esi[1]
                    *ebx += 1
                
                eax_1.b = *esi
                *edi = eax_1.b
                edi = &edi[1]
            else if (eax_1 != 0)
                esi = &esi[1]
                *ebx += 1
            
            *ebx += 1
        
        esi = &esi[1]
    
    if (edi != 0)
        *edi = 0
        edi = &edi[1]
    
    *ebx += 1

if (arg2 != 0)
    *arg2 = 0

*arg4 += 1
return arg4
