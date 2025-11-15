// 函数: sub_57bb80
// 地址: 0x57bb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* esi = *arg1
uint32_t ebx_3 = (arg1[1] - esi + 3) u>> 2
int32_t edi = 0

if (esi u> arg1[1])
    ebx_3 = 0

if (ebx_3 != 0)
    do
        sub_5ae6c0(*esi, arg2)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t result = arg1[8]
int32_t edi_1 = 0
int32_t* esi_1 = arg1[7]
uint32_t ebx_7 = (result - esi_1 + 3) u>> 2

if (esi_1 u> result)
    ebx_7 = 0

if (ebx_7 != 0)
    do
        *esi_1
        result = sub_57bb80(arg2)
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebx_7)

return result
