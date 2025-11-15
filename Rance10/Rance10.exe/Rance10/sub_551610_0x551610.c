// 函数: sub_551610
// 地址: 0x551610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void** i = *(arg1 + 8)

for (int32_t edi = *(arg1 + 0xc); i != edi; i = &i[1])
    void* ecx = **i
    
    if (ecx != 0 && *(ecx + 0x18) != 0 && *(ecx + 0x118) != 0 && *(ecx + 0xc) s> 0)
        void* edx_1 = *(data_7fcb4c + 0x18)
        
        if (edx_1 != 0)
            var_4 = ecx
            *(ecx + 4) += 1
            sub_42ccf0(edx_1 + 0x38, &var_4)
