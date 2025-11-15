// 函数: sub_4db0b0
// 地址: 0x4db0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg1
int32_t result = arg1
int32_t result_1 = result
int32_t* esi = *(result + 0x38)
int32_t edi = *(result + 0x3c)

if (esi != edi)
    do
        void* ebx_1 = *esi
        void* ecx = *(ebx_1 + 0xc)
        
        if (ecx != 0 && sub_4090e0(ecx + 0xc, arg2).b == 0)
            result.b = *(ebx_1 + 0x20)
            
            if (result.b != 0)
                goto label_4db168
        
        esi = &esi[1]
    while (esi != edi)
    
    result = result_1

void** esi_1 = *(result + 0x2c)
int32_t edi_1 = *(result + 0x30)

if (esi_1 != edi_1)
    do
        void* ebx_2 = *esi_1
        void* ecx_2 = *(ebx_2 + 0xc)
        
        if (ecx_2 != 0 && sub_4090e0(ecx_2 + 0xc, arg2).b == 0)
            result.b = *(ebx_2 + 0x14)
            
            if (result.b != 0)
                goto label_4db168
        
        esi_1 = &esi_1[1]
    while (esi_1 != edi_1)
    
    result = result_1

void** esi_2 = *(result + 0x20)
int32_t edi_2 = *(result + 0x24)

if (esi_2 == edi_2)
label_4db15e:
    result.b = 0
    return result

while (true)
    void* ebx_3 = *esi_2
    void* ecx_4 = *(ebx_3 + 0x10)
    
    if (ecx_4 != 0 && sub_4090e0(ecx_4 + 0xc, arg2).b == 0)
        result.b = *(ebx_3 + 0x30)
        
        if (result.b != 0)
            break
    
    esi_2 = &esi_2[1]
    
    if (esi_2 == edi_2)
        goto label_4db15e

label_4db168:
result.b = 1
return result
