// 函数: sub_50fe40
// 地址: 0x50fe40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *arg1
int32_t esi = *arg2
int32_t edi = arg1[1]

if ((((arg2[1] - esi) ^ (edi - result)) & 0xfffffffc) != 0)
label_50fe76:
    result.b = 0
    return result

if (result != edi)
    int32_t* esi_1 = esi - result
    
    do
        if (*result != *(esi_1 + result))
            goto label_50fe76
        
        result = &result[1]
    while (result != edi)

result.b = 1
return result
