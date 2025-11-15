// 函数: sub_4855e0
// 地址: 0x4855e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* edx = arg2
int32_t arg_4
int32_t ebp = arg_4
var_4 = edx

if (ebp u<= 0x3f)
    arg_4 = 0x64
    int32_t* eax_1 = &var_4
    
    if (edx s>= 0x64)
        eax_1 = &arg_4
    
    int32_t ecx = 0
    int32_t eax_2 = *eax_1
    
    if (eax_2 s> 0)
        ecx = eax_2
    
    *(arg1 + ebp * 0x24 + 4) = ecx

int32_t result = *(arg1 + 0x90c)
int32_t* esi = *(arg1 + 0x908)
int32_t edi_1 = 0
uint32_t ebx_3 = (result - esi + 3) u>> 2

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = (***esi)(ebp, edx)
        edx = arg2
        esi = &esi[1]
        edi_1 += 1
    while (edi_1 != ebx_3)

return result
