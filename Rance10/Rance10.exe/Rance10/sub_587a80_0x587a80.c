// 函数: sub_587a80
// 地址: 0x587a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_4 = arg1
void* eax
eax.b = *(*arg2 + 0x10c)
arg1[8] = eax.b
int32_t ebx = **arg2

if (*(arg1 + 4) != ebx)
    sub_587830(arg1)

int32_t* result

switch (ebx)
    case 0, 4, 9
    label_587b0a:
        *(arg1 + 4) = ebx
        result.b = 1
        return result
    case 1, 0xa
        result = sub_587e30(arg1, arg2, arg4)
    label_587ac2:
        
        if (result.b != 0)
            goto label_587b0a
    case 2, 0xb
        int32_t* eax_1
        eax_1.b = *arg3 != 0
        result = sub_5882c0(arg1, arg2, eax_1.b, arg4)
        goto label_587ac2
    case 3
        result = sub_588af0(arg1, arg2, arg4)
        goto label_587ac2
    case 8
        if (sub_589150(arg1, arg2, arg4).b != 0)
            goto label_587b0a

result.b = 0
return result
