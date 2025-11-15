// 函数: ?find_end_of_double_null_terminated_sequence@@YAPB_WQB_W@Z
// 地址: 0x71b868
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* edx = arg1
int32_t edi
int32_t var_8 = edi

while (*edx != 0)
    int16_t* ecx_1 = edx
    int16_t i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    edx = &edx[((ecx_1 - &ecx_1[1]) s>> 1) + 1]

return &edx[1]
