// 函数: sub_65cb50
// 地址: 0x65cb50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
void** ebp = arg1
int32_t* edi = ebp[6]
char* ebx = *edi
int32_t esi = edi[1]
void* result
uint32_t i_1

while (true)
    if (esi == 0)
        if (edi[3](ebp) == 0)
            return 0
        
        ebx = *edi
        esi = edi[1]
    
    uint32_t eax_3 = zx.d(*ebx)
    esi -= 1
    ebx = &ebx[1]
    
    if (eax_3 != 0xff)
        uint32_t i
        
        do
            void* eax_4 = ebp[0x6b]
            *(eax_4 + 0x14) += 1
            *edi = ebx
            edi[1] = esi
            
            if (esi == 0)
                if (edi[3](ebp) == 0)
                    return 0
                
                ebx = *edi
                esi = edi[1]
            
            i = zx.d(*ebx)
            esi -= 1
            ebx = &ebx[1]
        while (i != 0xff)
    
    do
        if (esi == 0)
            if (edi[3](ebp) == 0)
                return 0
            
            ebx = *edi
            esi = edi[1]
        
        i_1 = zx.d(*ebx)
        esi -= 1
        ebx = &ebx[1]
    while (i_1 == 0xff)
    
    result = ebp[0x6b]
    
    if (i_1 != 0)
        break
    
    *(result + 0x14) += 2
    *edi = ebx
    edi[1] = esi

if (*(result + 0x14) != 0)
    *(*ebp + 0x14) = 0x77
    *(*ebp + 0x18) = *(ebp[0x6b] + 0x14)
    *(*ebp + 0x1c) = i_1
    (*(*ebp + 4))(ebp, 0xffffffff)
    *(ebp[0x6b] + 0x14) = 0

ebp[0x65] = i_1
result.b = 1
*edi = ebx
edi[1] = esi
return result
