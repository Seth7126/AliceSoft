// 函数: sub_65e9e0
// 地址: 0x65e9e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *arg1
int32_t ecx = *(edx + 0x14)
char* esi

if (ecx s<= 0 || ecx s> *(edx + 0x74))
    int32_t esi_1 = *(edx + 0x78)
    
    if (esi_1 != 0 && ecx s>= *(edx + 0x7c) && ecx s<= *(edx + 0x80))
        esi = *(esi_1 + ((ecx - *(edx + 0x7c)) << 2))
        goto label_65ea17
    
    *(edx + 0x18) = ecx
    esi = **(edx + 0x70)
else
    esi = *(*(edx + 0x70) + (ecx << 2))
label_65ea17:
    
    if (esi == 0)
        *(edx + 0x18) = ecx
        esi = **(edx + 0x70)

ecx.b = *esi
char* eax_4 = esi

while (ecx.b != 0)
    eax_4 = &eax_4[1]
    
    if (ecx.b == 0x25)
        if (*eax_4 != 0x73)
            break
        
        void* var_8_1 = edx + 0x18
        return sub_65e8d0(arg2, esi)
    
    ecx.b = *eax_4

int32_t var_8 = *(edx + 0x34)
int32_t var_c = *(edx + 0x30)
int32_t var_10 = *(edx + 0x2c)
int32_t var_14 = *(edx + 0x28)
int32_t var_18 = *(edx + 0x24)
int32_t var_1c = *(edx + 0x20)
int32_t var_20 = *(edx + 0x1c)
int32_t var_24 = *(edx + 0x18)
return sub_65e8d0(arg2, esi)
