// 函数: sub_5f12b0
// 地址: 0x5f12b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* edi = arg1
int32_t i = (arg2 - edi) s/ 0x14

if (i s>= 2)
    int128_t* esi_2 = arg2 - 0x14
    
    do
        int32_t var_4_1 = esi_2[1].d
        int128_t var_14 = *esi_2
        void* var_24_1 = arg1
        *esi_2 = *edi
        esi_2[1].d = edi[1].d
        int32_t eax_8 = (esi_2 - edi) s/ 0x14
        sub_5f1aa0(eax_8, nullptr, edi, eax_8, &var_14)
        esi_2 -= 0x14
        arg1 = esi_2 - edi + 0x14
        i = arg1 s/ 0x14
    while (i s>= 2)

return i
