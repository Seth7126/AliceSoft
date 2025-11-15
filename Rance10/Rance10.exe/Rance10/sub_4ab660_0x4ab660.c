// 函数: sub_4ab660
// 地址: 0x4ab660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
int32_t* i = arg1[1]

while (i != arg1[2])
    sub_4b0180(i, ebx, arg3)
    int32_t eax_1 = *i
    
    if (eax_1 != i[1])
        i = &i[4]
    else
        arg2.b = 0
        int32_t* var_14_2 = arg2
        int32_t ecx_2 = sub_4ac500(eax_1, arg1[2], &i[4], i)
        void* edx_2 = arg1[2]
        int32_t* var_14_3 = arg2
        int32_t var_18_3 = ecx_2
        sub_4ac590(edx_2 - 0x10, edx_2)
        arg1[2] -= 0x10

int32_t result = ebx[1]
int32_t* esi = *ebx
arg2 = arg1
int32_t edi_1 = 0
uint32_t ebx_4 = (result - esi + 3) u>> 2

if (esi u> result)
    ebx_4 = 0

if (ebx_4 != 0)
    do
        result = sub_4ab700(&arg2, *esi)
        edi_1 += 1
        esi = &esi[1]
    while (edi_1 != ebx_4)

return result
