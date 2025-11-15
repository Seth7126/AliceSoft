// 函数: sub_594110
// 地址: 0x594110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int64_t* edi = arg1
int32_t i = (arg2 - edi) s/ 0xc

if (i s>= 2)
    int64_t* esi_2 = arg2 - 0xc
    
    do
        int32_t var_4_1 = esi_2[1].d
        int64_t var_c = *esi_2
        *esi_2 = *edi
        esi_2[1].d = edi[1].d
        void* var_1c_1 = arg1
        int32_t eax_8 = (esi_2 - edi) s/ 0xc
        sub_594cd0(eax_8, nullptr, edi, eax_8, &var_c)
        esi_2 -= 0xc
        arg1 = esi_2 - edi + 0xc
        i = arg1 s/ 0xc
    while (i s>= 2)

return i
