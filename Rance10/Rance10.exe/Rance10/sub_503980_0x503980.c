// 函数: sub_503980
// 地址: 0x503980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
char* edi = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edi[4] u<= *(arg2 + 8))
    int32_t edx_7 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *(arg2 + 4) = &edi[4]
    *(arg1 + 4) = edx_7
    
    if (edx_7 - 1 u> 3)
        result.b = 1
        return result
    
    switch (edx_7)
        case 1
            result = sub_61ec90(arg2, arg1 + 8)
        label_5039cf:
            
            if (result.b != 0)
                result.b = 1
                return result
        case 2
            result = sub_6c9300(arg2, arg1 + 0xc)
            goto label_5039cf
        case 3
            result = sub_6c9280(arg2, arg1 + 0x10)
            goto label_5039cf
        case 4
            if (sub_61ed80(arg2, arg1 + 0x14).b != 0)
                result.b = 1
                return result

result.b = 0
return result
