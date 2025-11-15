// 函数: sub_5c3840
// 地址: 0x5c3840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2
void* ebp = arg1
arg2.b = 0
void* var_1c = arg2
void* var_4 = ebp
sub_5be670(ebp + 0x24, *(ebp + 0x28), *(esi + 0x24), *(esi + 0x28))
int32_t edi = *(esi + 0x34)
int32_t* esi_1 = *(esi + 0x30)
void* eax

if (esi_1 != edi)
    void* ebx_1 = ebp + 0x30
    
    do
        eax = *(ebp + 0x34)
        int32_t* ecx_1 = *ebx_1
        
        if (ecx_1 == eax)
        label_5c3892:
            eax = *(ebx_1 + 4)
            int32_t ecx_2
            
            if (esi_1 u< eax)
                ecx_2 = *ebx_1
            
            if (esi_1 u>= eax || ecx_2 u> esi_1)
                if (eax == *(ebx_1 + 8))
                    sub_404610(ebx_1, 1)
                
                void** ecx_6 = *(ebx_1 + 4)
                
                if (ecx_6 != 0)
                    *ecx_6 = *esi_1
            else
                if (eax == *(ebx_1 + 8))
                    sub_404610(ebx_1, 1)
                
                void** ecx_4 = *(ebx_1 + 4)
                
                if (ecx_4 != 0)
                    *ecx_4 = *(*ebx_1 + ((esi_1 - ecx_2) s>> 2 << 2))
                
                ebp = var_4
            
            *(ebx_1 + 4) += 4
        else
            while (*ecx_1 != *esi_1)
                ecx_1 = &ecx_1[1]
                
                if (ecx_1 == eax)
                    break
            
            if (ecx_1 == eax)
                goto label_5c3892
        
        esi_1 = &esi_1[1]
    while (esi_1 != edi)

eax.b = arg2.b
int32_t* edx_2 = *(ebp + 0x34)
void* ecx_7 = *(ebp + 0x30)
arg2.b = eax.b
int32_t eax_4 = (edx_2 - ecx_7) s>> 2
void* result = sub_56adc0(eax_4, edx_2, ecx_7, eax_4, &arg2)
*(ebp + 0x7c) += 1
return result
