// 函数: sub_57b130
// 地址: 0x57b130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
int32_t* result = arg1
int32_t* esi = *result
int32_t edi = result[1]

if (esi != edi)
    do
        if (sub_5aca10(*esi, arg2).b == 0)
            goto label_57b191
        
        esi = &esi[1]
    while (esi != edi)
    
    result = result

int32_t* esi_1 = result[7]
int32_t edi_1 = result[8]

if (esi_1 == edi_1)
label_57b184:
    result.b = 1
    return result

while (true)
    *esi_1
    
    if (sub_57b130(arg2).b == 0)
        break
    
    esi_1 = &esi_1[1]
    
    if (esi_1 == edi_1)
        goto label_57b184

label_57b191:
result.b = 0
return result
