// 函数: sub_6ec53c
// 地址: 0x6ec53c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1
void* result_1 = result
void* ebx = *(result + 0x64)
void* const i

if (ebx == 0)
    i = nullptr
else
    i = *(ebx + 0x18)

while (i != 0)
    int32_t eax = *(i + 0x78)
    int32_t* edi_1 = *(i + 8)
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t var_8 = eax
    void* esi_1 = *edi_1
    *(esi_1 + 4)
    j_sub_4033e0()
    (*(esi_1 + 4))(&var_10, &var_c, &var_8)
    *(i + 0x78) = var_8
    result = result_1
    
    if (i == *(result + 0x64))
        i = nullptr
    else
        i = *(i + 0x18)

return result
