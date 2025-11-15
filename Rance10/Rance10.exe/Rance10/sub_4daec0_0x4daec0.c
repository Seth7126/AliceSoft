// 函数: sub_4daec0
// 地址: 0x4daec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x4c) != 0)
    return 

int32_t eax = *(arg1 + 0x3c)
int32_t* esi_1 = *(arg1 + 0x38)
uint32_t ebx_4 = (eax - esi_1 + 3) u>> 2
int32_t edi_1 = 0

if (esi_1 u> eax)
    ebx_4 = 0

if (ebx_4 == 0)
    return 

do
    sub_4da4a0(*esi_1, arg2, arg3)
    edi_1 += 1
    esi_1 = &esi_1[1]
while (edi_1 != ebx_4)
