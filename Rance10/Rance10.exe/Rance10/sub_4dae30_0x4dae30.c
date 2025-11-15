// 函数: sub_4dae30
// 地址: 0x4dae30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x4c) != 0)
    return 

int32_t* esi_1 = *(arg1 + 0x2c)
uint32_t ebp_4 = (*(arg1 + 0x30) - esi_1 + 3) u>> 2
int32_t edi_1 = 0

if (esi_1 u> *(arg1 + 0x30))
    ebp_4 = 0

if (ebp_4 == 0)
    return 

do
    void* ecx = *esi_1
    char* var_4 = arg2
    char var_6 = 0
    char var_5 = 0
    sub_4dcb80(ecx, &var_4, &var_6, &var_5)
    
    if (var_6 != 0)
        *(arg1 + 0x50) = var_4
    else if (var_5 != 0)
        *(arg1 + 0x4c) = 1
    
    edi_1 += 1
    esi_1 = &esi_1[1]
while (edi_1 != ebp_4)
