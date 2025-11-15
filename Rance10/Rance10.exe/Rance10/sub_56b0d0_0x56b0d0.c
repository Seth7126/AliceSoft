// 函数: sub_56b0d0
// 地址: 0x56b0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* edi = arg1

if (edi == arg2)
    return 

void* ecx = &edi[1]

if (ecx == arg2)
    return 

void* eax = ecx - 4

do
    int32_t esi_1 = *(eax + 4)
    void* ebx_1 = eax + 4
    void* edx_1 = ebx_1
    
    if (esi_1 s>= *edi)
        int32_t ecx_1 = *eax
        
        while (esi_1 s< ecx_1)
            *edx_1 = ecx_1
            edx_1 = eax
            ecx_1 = *(eax - 4)
            eax -= 4
        
        *edx_1 = esi_1
    else
        sub_6feca0(ecx, edi, eax + 4 - edi)
        *edi = esi_1
    
    eax = ebx_1
    ecx = &edi[1]
while (eax + 4 != arg2)
