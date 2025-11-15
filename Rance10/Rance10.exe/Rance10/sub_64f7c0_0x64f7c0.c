// 函数: sub_64f7c0
// 地址: 0x64f7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (* eax)(int32_t* arg1) = sub_64f170

if (arg2 != 0)
    eax = sub_64f690

int32_t* esi = arg1
void* edi = esi[0x66]
*(edi + 8) = eax

if (esi[0x3f].b == 0)
    int32_t (* eax_7)(void* arg1, int32_t arg2) = sub_64f010
    
    if (arg2 != 0)
        eax_7 = sub_64f390
    
    *(edi + 4) = eax_7
else
    *(edi + 0x78) = esi
    *(edi + 0x6c) = arg2
    
    if (esi[0x59] == 0)
        int32_t (* eax_1)(int32_t* arg1, int32_t* arg2) = sub_64e8a0
        
        if (esi[0x57] == 0)
            eax_1 = sub_64e740
        
        *(edi + 4) = eax_1
    else if (esi[0x57] != 0)
        bool cond:3_1 = *(edi + 0x88) != 0
        *(edi + 4) = sub_64eb50
        
        if (not(cond:3_1))
            *(edi + 0x88) = (*esi[1])(esi, 1, 0x3e8)
    else
        *(edi + 4) = sub_64eaa0
    
    *(edi + 0x7c) = *(esi[0x46] + 0x18)
    *(edi + 0x80) = 0
    *(edi + 0x84) = 0

int32_t* i = nullptr
arg1 = nullptr

if (esi[0x45] s> 0)
    void* ecx_1 = edi + 0x14
    void* edx_1 = &esi[0x46]
    void* var_4_1 = ecx_1
    void* var_8_1 = edx_1
    
    do
        void* ebp_1 = *edx_1
        
        if (esi[0x57] == 0 && esi[0x59] == 0)
            int32_t ebx_1 = *(ebp_1 + 0x14)
            
            if (arg2 == 0)
                edx_1.b = 1
                int32_t* eax_16 = edi + 0x2c + (ebx_1 << 2)
                sub_64e040(eax_16, edx_1.b, esi, ebx_1, eax_16)
            else
                if (ebx_1 s< 0 || ebx_1 s>= 4)
                    *(*esi + 0x14) = 0x34
                    *(*esi + 0x18) = ebx_1
                    (**esi)(esi)
                
                if (*(edi + (ebx_1 << 2) + 0x4c) == 0)
                    *(edi + (ebx_1 << 2) + 0x4c) = (*esi[1])(esi, 1, 0x404)
                
                _memset(*(edi + (ebx_1 << 2) + 0x4c), 0, 0x404)
            
            ecx_1 = var_4_1
            i = arg1
            edx_1 = var_8_1
            *ecx_1 = 0
        
        if (esi[0x58] != 0)
            int32_t ebx_2 = *(ebp_1 + 0x18)
            
            if (arg2 == 0)
                edx_1.b = 0
                int32_t* eax_25 = edi + 0x3c + (ebx_2 << 2)
                sub_64e040(eax_25, edx_1.b, esi, ebx_2, eax_25)
            else
                if (ebx_2 s< 0 || ebx_2 s>= 4)
                    *(*esi + 0x14) = 0x34
                    *(*esi + 0x18) = ebx_2
                    (**esi)(esi)
                
                if (*(edi + (ebx_2 << 2) + 0x5c) == 0)
                    *(edi + (ebx_2 << 2) + 0x5c) = (*esi[1])(esi, 1, 0x404)
                
                _memset(*(edi + (ebx_2 << 2) + 0x5c), 0, 0x404)
            
            edx_1 = var_8_1
            ecx_1 = var_4_1
            i = arg1
        
        i += 1
        edx_1 += 4
        ecx_1 += 4
        arg1 = i
        var_8_1 = edx_1
        var_4_1 = ecx_1
    while (i s< esi[0x45])

*(edi + 0xc) = 0
*(edi + 0x10) = 0
int32_t result = esi[0x38]
*(edi + 0x24) = result
*(edi + 0x28) = 0
return result
