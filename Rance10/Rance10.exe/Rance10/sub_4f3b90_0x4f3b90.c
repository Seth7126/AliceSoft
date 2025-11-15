// 函数: sub_4f3b90
// 地址: 0x4f3b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* edi = arg1
void* esi_1 = arg2 - edi
int32_t i

for (i = esi_1 s>> 2; i s>= 2; i = esi_1 s>> 2)
    var_4 = *(edi + esi_1 - 4)
    *(edi + esi_1 - 4) = *edi
    int32_t* var_10_1 = arg1
    int32_t eax_4 = (esi_1 - 4) s>> 2
    arg1 = sub_4f3d50(eax_4, 0, edi, eax_4, &var_4)
    esi_1 -= 4

return i
