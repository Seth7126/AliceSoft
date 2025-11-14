// 函数: sub_61d050
// 地址: 0x61d050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
void* esi = data_75d530
char* eax_1

if (*(esi + 4) != 0)
    eax_1 = (**arg2)(arg4)
    sub_5e20f0(*(esi + 4), arg3, eax_1)
else if (data_75d534 != 0)
    int32_t var_14_1 = arg3
    arg1 = sub_6203f0()
    
    if (arg1 != 0)
        arg1 = (**arg1)(&data_6ecca8)
        *(esi + 4) = arg1
        
        if (arg1 != 0)
            eax_1 = (**arg2)(arg4)
            sub_5e20f0(*(esi + 4), arg3, eax_1)
