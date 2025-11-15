// 函数: sub_5a9340
// 地址: 0x5a9340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1

if (arg2 == 2)
    return 1

int32_t* edx = arg3
char result

if (arg2 == 4)
    result = sub_598a00(arg1 + 0x34, edx, arg4)
    
    if (result == 0)
        return result
    
    edx = arg3

int32_t* i = *(arg1 + 0x48)

for (int32_t edi_1 = *(arg1 + 0x4c); i != edi_1; i = &i[1])
    result = (***i)(arg2, edx, arg4)
    
    if (result == 0)
        return 0
    
    edx = arg3

int32_t* ecx_4 = *(arg1 + 0x74)

if (ecx_4 != 0)
    result = (**ecx_4)(arg2, arg3, arg4)

if (ecx_4 == 0 || result != 0)
    return 1

return 0
