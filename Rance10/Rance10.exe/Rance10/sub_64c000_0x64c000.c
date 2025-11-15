// 函数: sub_64c000
// 地址: 0x64c000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
void* var_4 = ecx
int32_t* esi = arg1
void* edi = esi[0x66]

if (arg2 != 0)
    *(*esi + 0x14) = 0x31
    (**esi)(esi)

if (esi[0x3f].b == 0)
    *(edi + 4) = sub_64bc10
else if (esi[0x59] != 0)
    int32_t (* eax_5)(int32_t* arg1, int32_t* arg2) = sub_64ba30
    
    if (esi[0x57] == 0)
        eax_5 = sub_64b9a0
    
    *(edi + 4) = eax_5
else
    int32_t (* eax_4)(int32_t arg1, int32_t* arg2) = sub_64b750
    
    if (esi[0x57] == 0)
        eax_4 = sub_64b550
    
    *(edi + 4) = eax_4

int32_t i = 0
arg2.d = 0

if (esi[0x45] s> 0)
    void* eax_6 = &esi[0x46]
    void* ebp_1 = edi + 0x34
    arg1 = eax_6
    
    do
        void* eax_7 = *eax_6
        
        if (esi[0x57] == 0 && esi[0x59] == 0)
            int32_t ebx_1 = *(eax_7 + 0x14)
            
            if (ebx_1 s< 0 || ebx_1 s>= 0x10)
                *(*esi + 0x14) = 0x32
                *(*esi + 0x18) = ebx_1
                (**esi)(esi)
            
            if (*(edi + (ebx_1 << 2) + 0x4c) == 0)
                *(edi + (ebx_1 << 2) + 0x4c) = (*esi[1])(esi, 1, 0x40)
            
            _memset(*(edi + (ebx_1 << 2) + 0x4c), 0, 0x40)
            i = arg2.d
            *(ebp_1 - 0x10) = 0
            *ebp_1 = 0
        
        if (esi[0x58] != 0)
            int32_t ebx_2 = *(eax_7 + 0x18)
            
            if (ebx_2 s< 0 || ebx_2 s>= 0x10)
                *(*esi + 0x14) = 0x32
                *(*esi + 0x18) = ebx_2
                (**esi)(esi)
            
            if (*(edi + (ebx_2 << 2) + 0x8c) == 0)
                *(edi + (ebx_2 << 2) + 0x8c) = (*esi[1])(esi, 1, 0x100)
            
            _memset(*(edi + (ebx_2 << 2) + 0x8c), 0, 0x100)
            i = arg2.d
        
        i += 1
        eax_6 = arg1 + 4
        arg2.d = i
        ebp_1 += 4
        arg1 = eax_6
    while (i s< esi[0x45])

*(edi + 0xc) = 0
*(edi + 0x10) = 0x10000
*(edi + 0x14) = 0
*(edi + 0x18) = 0
*(edi + 0x1c) = 0xb
*(edi + 0x20) = 0xffffffff
int32_t result = esi[0x38]
*(edi + 0x44) = result
*(edi + 0x48) = 0
return result
