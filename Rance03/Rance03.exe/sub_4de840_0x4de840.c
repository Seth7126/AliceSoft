// 函数: sub_4de840
// 地址: 0x4de840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d530

if (*(edi + 4) != 0)
    sub_5e2240(*(edi + 4), int.d(arg2), int.d(arg3))
else if (data_75d534 != 0)
    void* var_18_1 = arg1
    int32_t* eax_1 = sub_6203f0()
    
    if (eax_1 != 0)
        int32_t eax_2 = (**eax_1)(&data_6ecca8)
        *(edi + 4) = eax_2
        
        if (eax_2 != 0)
            sub_5e2240(*(edi + 4), int.d(arg2), int.d(arg3))

sub_4de8c0(arg1)
return sub_4de9b0(arg1) __tailcall
