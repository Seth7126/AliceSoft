// 函数: sub_594880
// 地址: 0x594880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* edi = arg1
int32_t i = (arg2 - edi) s/ 0x18

if (i s>= 2)
    int128_t* esi_2 = arg2 - 0x18
    
    do
        void* var_2c_1 = arg1
        int128_t var_18 = *esi_2
        int64_t var_8_1 = esi_2[1].q
        *esi_2 = *edi
        int32_t eax_6 = (esi_2 - edi) s/ 0x18
        esi_2[1].q = edi[1].q
        sub_594e30(eax_6, nullptr, edi, eax_6, &var_18)
        esi_2 -= 0x18
        arg1 = esi_2 - edi + 0x18
        i = arg1 s/ 0x18
    while (i s>= 2)

return i
