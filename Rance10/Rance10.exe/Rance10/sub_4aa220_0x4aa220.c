// 函数: sub_4aa220
// 地址: 0x4aa220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
var_4:3.b = 0
int32_t* edi = sub_4c5b80(*(arg1 + 8), arg1 + 0xc, &var_4:3)
int32_t* result

if (edi == 0)
    result.b = 0
    return result

int32_t* ecx_2 = *(arg1 + 0x1c)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()

*(arg1 + 0x1c) = edi
result.b = 1
return result
