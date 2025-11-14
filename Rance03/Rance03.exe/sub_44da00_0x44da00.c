// 函数: sub_44da00
// 地址: 0x44da00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4cc
int32_t* eax_1 = sub_5eedf0(edi + 0x1ac, arg2, arg3, edi + 0x190)

if (eax_1 != 0)
    int32_t var_10_1 = arg1
    void* eax_2 = sub_44e5c0(edi + 0x288)
    
    if (eax_2 != 0)
        sub_44eaf0(eax_2, eax_1)
        (*(*eax_1 + 4))()
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    
    (*(*eax_1 + 4))()

eax_1.b = 0
return eax_1
