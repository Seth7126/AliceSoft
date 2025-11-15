// 函数: ??$parse_command_line@D@@YAXPADPAPAD0PAI2@Z
// 地址: 0x71096c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = arg1
int32_t edi
int32_t var_14 = edi
*arg5 = 0
char* edi_1 = arg3
*arg4 = 1

if (arg2 != 0)
    *arg2 = edi_1
    arg2 = &arg2[1]

ecx.b = 0
var_8:3.b = 0
int32_t* i

while (true)
    if (*esi != 0x22)
        *arg5 += 1
        
        if (edi_1 != 0)
            i.b = *esi
            *edi_1 = i.b
            edi_1 = &edi_1[1]
        
        i.b = *esi
        esi += 1
        var_8:2.b = i.b
        
        if (__ismbblead(i.b) != 0)
            *arg5 += 1
            
            if (edi_1 != 0)
                i.b = *esi
                *edi_1 = i.b
                edi_1 = &edi_1[1]
            
            esi += 1
        
        i.b = var_8:2.b
        
        if (i.b == 0)
            esi -= 1
            break
        
        ecx.b = var_8:3.b
    else
        i.b = 0x22
        ecx.b = ecx.b == 0
        esi += 1
        var_8:3.b = ecx.b
    
    if (ecx.b == 0)
        if (i.b != 0x20 && i.b != 9)
            continue
        
        if (edi_1 == 0)
            break
        
        edi_1[0xffffffff] = 0
        break

var_8:3.b = 0

while (*esi != 0)
    while (true)
        i.b = *esi
        
        if (i.b != 0x20 && i.b != 9)
            break
        
        esi += 1
    
    if (*esi == 0)
        break
    
    if (arg2 != 0)
        *arg2 = edi_1
        arg2 = &arg2[1]
    
    *arg4 += 1
    
    while (true)
        int32_t edx_1 = 1
        i = nullptr
        
        while (*esi == 0x5c)
            esi += 1
            i += 1
        
        if (*esi == 0x22)
            if ((i.b & 1) == 0)
                int32_t* ecx_1
                ecx_1.b = var_8:3.b
                
                if (ecx_1.b == 0)
                    edx_1 = 0
                    var_8:3.b = ecx_1.b == 0
                else if (*(esi + 1) != 0x22)
                    ecx_1.b = var_8:3.b
                    edx_1 = 0
                    var_8:3.b = ecx_1.b == 0
                else
                    esi += 1
            
            i u>>= 1
        
        while (i != 0)
            i -= 1
            
            if (edi_1 != 0)
                *edi_1 = 0x5c
                edi_1 = &edi_1[1]
            
            *arg5 += 1
        
        i.b = *esi
        
        if (i.b == 0)
            break
        
        if (var_8:3.b == 0)
            if (i.b == 0x20)
                break
            
            if (i.b == 9)
                break
        
        if (edx_1 != 0)
            if (edi_1 != 0)
                *edi_1 = i.b
                edi_1 = &edi_1[1]
            
            if (__ismbblead(*esi) != 0)
                esi += 1
                *arg5 += 1
                
                if (edi_1 != 0)
                    int32_t eax_4
                    eax_4.b = *esi
                    *edi_1 = eax_4.b
                    edi_1 = &edi_1[1]
            
            *arg5 += 1
        
        esi += 1
    
    if (edi_1 != 0)
        *edi_1 = 0
        edi_1 = &edi_1[1]
    
    *arg5 += 1

if (arg2 != 0)
    *arg2 = 0

*arg4 += 1
return arg4
