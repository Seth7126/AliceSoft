// 函数: sub_503370
// 地址: 0x503370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t* esi = *arg1
uint32_t ebx_3 = (arg1[1] - esi + 3) u>> 2

if (esi u> arg1[1])
    ebx_3 = 0

if (ebx_3 == 0)
    arg1[1] = esi
    return esi

do
    int32_t* ecx_1 = *esi
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    edi += 1
    esi = &esi[1]
while (edi != ebx_3)

int32_t eax_2 = *arg1
arg1[1] = eax_2
return eax_2
