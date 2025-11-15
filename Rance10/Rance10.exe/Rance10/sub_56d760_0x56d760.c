// 函数: sub_56d760
// 地址: 0x56d760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0xc)

while (i != *(arg1 + 0x10))
    void* ebx_1 = *i
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x38e38e39, *(ebx_1 + 0x20) - *(ebx_1 + 0x1c))
    int32_t edx_2 = edx_1 s>> 3
    int32_t eax_4 = (edx_2 u>> 0x1f) + edx_2
    
    if (eax_4 u> 1)
        sub_56c860(ebx_1)
        i = &i[1]
    else
        void* var_4
        var_4.b = 0
        int32_t var_18_1 = 0
        int32_t ecx_3 = sub_56da90(eax_4, *(arg1 + 0x10), &i[1], i)
        void* edx_4 = *(arg1 + 0x10)
        void* var_18_2 = arg1
        int32_t var_1c_2 = ecx_3
        sub_56daf0(edx_4 - 4, edx_4)
        *(arg1 + 0x10) -= 4
