// 函数: sub_4c9040
// 地址: 0x4c9040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0xa8) = 0xffffffff
*(arg1 + 0xac) = 0xffffffff
*(arg1 + 0xa4) = 0
sub_61cde0()
void* esi = data_75d530

if (*(esi + 4) != 0)
    *(*(esi + 4) + 0x28) = 0
else if (data_75d534 != 0)
    void* var_8_1 = arg1
    int32_t* eax_1 = sub_6203f0()
    
    if (eax_1 != 0)
        int32_t eax_2 = (**eax_1)(&data_6ecca8)
        *(esi + 4) = eax_2
        
        if (eax_2 != 0)
            *(*(esi + 4) + 0x28) = 0

return sub_61cef0() __tailcall
