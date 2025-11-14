// 函数: sub_4b6560
// 地址: 0x4b6560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char* edi = *(arg2 + 4)
void* result

if (&edi[4] u<= *(arg2 + 8))
    int32_t edx_7 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *(arg2 + 4) = &edi[4]
    *(arg1 + 4) = edx_7
    
    if (edx_7 - 1 u> 3)
        result.b = 1
        return result
    
    switch (edx_7)
        case 1
            result = sub_468b20(arg2, arg1 + 8)
        label_4b65af:
            
            if (result.b != 0)
                result.b = 1
                return result
        case 2
            result = sub_468bc0(arg2, arg1 + 0xc)
            goto label_4b65af
        case 3
            result = sub_468ab0(arg2, arg1 + 0x10)
            goto label_4b65af
        case 4
            if (sub_468d00(arg2, arg1 + 0x14).b != 0)
                result.b = 1
                return result

result.b = 0
return result
