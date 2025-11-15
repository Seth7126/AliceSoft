// 函数: sub_4f0240
// 地址: 0x4f0240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(**(arg1 + 0x74) + 0x18))() != 0)
    return arg1

int32_t* ecx_2 = *(arg1 + 0x70) + 0xc0
int32_t* var_18 = ecx_2
int32_t var_1c = *(arg1 + 0x6c)
int32_t i_1 = 0
int32_t edi_2 = (ecx_2[1] - *ecx_2) s>> 2
int32_t var_14 = edi_2
int32_t var_c = 0
sub_4a9fd0(&var_1c)

for (int32_t i = i_1; i != edi_2; i += 1)
    int32_t eax_5 = sub_4f0240()
    
    if (eax_5 != 0)
        return eax_5
    
    sub_4a9fd0(&var_1c)

return 0
