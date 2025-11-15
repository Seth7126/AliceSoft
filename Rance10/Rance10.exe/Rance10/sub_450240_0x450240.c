// 函数: sub_450240
// 地址: 0x450240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1 + 8
int32_t* esi = *(ecx + 4)
uint32_t ebx_3 = (*(arg1 + 0x10) - esi + 3) u>> 2
int32_t edi = 0

if (esi u> *(ecx + 8))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        (*(**esi + 4))()
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)
    
    ecx = arg1 + 8

*(ecx + 8) = *(ecx + 4)
int32_t edi_1 = 0
int32_t* esi_1 = *(arg1 + 0x48)
void* ecx_2 = arg1 + 0x44
uint32_t ebx_7 = (*(ecx_2 + 8) - esi_1 + 3) u>> 2

if (esi_1 u> *(ecx_2 + 8))
    ebx_7 = 0

if (ebx_7 != 0)
    do
        (*(**esi_1 + 4))()
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebx_7)
    
    ecx_2 = arg1 + 0x44

*(ecx_2 + 8) = *(ecx_2 + 4)
int32_t* ecx_4 = *(arg1 + 0x80)

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    *(arg1 + 0x80) = 0

*(arg1 + 4) = 0
sub_452290(arg1 + 0x44)
return sub_452290(arg1 + 8) __tailcall
