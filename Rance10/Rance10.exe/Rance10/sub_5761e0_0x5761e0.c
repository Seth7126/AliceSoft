// 函数: sub_5761e0
// 地址: 0x5761e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg2
int32_t* result = arg1
int32_t* esi = result[6]
int32_t edi = result[7]
int32_t* result_1 = result

if (esi != edi)
    do
        result = sub_58d9c0(result, edx, esi, arg3, arg4)
        
        if (result.b == 0)
            goto label_576259
        
        edx = arg2
        esi = &esi[3]
    while (esi != edi)
    
    result = result_1

int32_t* esi_1 = *result
int32_t edi_1 = result[1]

if (esi_1 == edi_1)
label_57624a:
    result.b = 1
    return result

while ((***esi_1)(edx, arg3, arg4).b != 0)
    edx = arg2
    esi_1 = &esi_1[1]
    
    if (esi_1 == edi_1)
        goto label_57624a

label_576259:
result.b = 0
return result
