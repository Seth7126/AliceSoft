// 函数: sub_4e03a0
// 地址: 0x4e03a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t ecx_1 = sub_485e20(arg1 + 8)
sub_61cde0()
void* edi = data_75d530

if (*(edi + 4) != 0)
    *(*(edi + 4) + 0x28) = 0
else if (data_75d534 != 0)
    int32_t var_c_1 = ecx_1
    int32_t* eax_1 = sub_6203f0()
    
    if (eax_1 != 0)
        int32_t eax_2 = (**eax_1)(&data_6ecca8)
        *(edi + 4) = eax_2
        
        if (eax_2 != 0)
            *(*(edi + 4) + 0x28) = 0

int32_t result = sub_61cef0()
*(arg1 + 0x98) = 0xffffffff
*(arg1 + 0x9c) = 0xffffffff
*(arg1 + 0x94) = 0
return result
