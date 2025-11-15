// 函数: sub_4edf40
// 地址: 0x4edf40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = 0
int32_t var_c = 0
int32_t* edx_1 = *(arg1 + 0x70) + 0xc0
int32_t var_1c = *(arg1 + 0x6c)
int32_t* var_18 = edx_1
int32_t edi_2 = (edx_1[1] - *edx_1) s>> 2
int32_t var_14 = edi_2
sub_4a9fd0(&var_1c)

for (int32_t i = i_1; i != edi_2; i += 1)
    if (sub_4edf40() != 0)
        return 1
    
    sub_4a9fd0(&var_1c)

int32_t eax_2 = *(arg1 + 0x40)
void* ecx_3 = *(arg1 + 0x78)
int32_t var_24 = eax_2

if (eax_2 s> 0)
    void** var_20
    void** eax_3
    eax_3.b = *sub_42eb70(ecx_3 + 0x14, &var_20, &var_24) != *(ecx_3 + 0x14)
    return eax_3

eax_2.b = 0
return eax_2
