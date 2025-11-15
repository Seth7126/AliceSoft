// 函数: sub_4b00d0
// 地址: 0x4b00d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1
int32_t edx = arg1[1]

if (esi == edx)
    return 

int32_t eax_1
int32_t* ecx

while (true)
    eax_1 = esi[1]
    ecx = *esi
    
    if (eax_1 != ecx)
        while (*ecx != arg2)
            ecx = &ecx[1]
            
            if (ecx == eax_1)
                break
        
        if (eax_1 != ecx)
            break
    
    esi = &esi[3]
    
    if (esi == edx)
        return 

int32_t* edx_1 = *esi

if (edx_1 != eax_1)
    while (*edx_1 != arg2)
        edx_1 = &edx_1[1]
        
        if (edx_1 == eax_1)
            break
    
    if (edx_1 != eax_1)
        ecx = sub_6feca0(edx_1, &edx_1[1], eax_1 - &edx_1[1])
        esi[1] -= 4

if (*esi != esi[1])
    return 

int32_t ebx_1 = arg1[1]
void* edi_2 = &esi[3]

if (edi_2 != ebx_1)
    void* esi_1 = esi - edi_2
    
    do
        ecx = sub_4274a0(edi_2 + esi_1, edi_2)
        edi_2 += 0xc
    while (edi_2 != ebx_1)

void* edx_2 = arg1[1]
int32_t var_14_3 = arg2
int32_t* var_18_2 = ecx
sub_4ac600(edx_2 - 0xc, edx_2)
arg1[1] -= 0xc
