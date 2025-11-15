// 函数: sub_473970
// 地址: 0x473970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_3 = arg4
int32_t* edi = arg3
int32_t* edx = *arg1

if (edi == *edx && eax_3 == edx)
    sub_473920(arg1)
    *arg2 = *arg1
    return arg2

if (edi != eax_3)
    int32_t* esi_1
    
    do
        esi_1 = *edi
        *edi[1] = esi_1
        *(*edi + 4) = edi[1]
        arg1[1] -= 1
        sub_408940(&edi[2])
        sub_403160(edi, 1, 0x40)
        eax_3 = arg4
        edi = esi_1
        arg3 = edi
    while (esi_1 != eax_3)

*arg2 = eax_3
return arg2
