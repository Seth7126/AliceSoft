// 函数: sub_44dbe0
// 地址: 0x44dbe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = data_75d4cc
int32_t* eax_1 = (*(**(edi + 0x14) + 8))(arg2, arg3, 0x20)

if (eax_1 != 0)
    (*(**(edi + 0x10) + 0x64))(eax_1, 0, 0, arg2, arg3, arg4, arg5, arg6, arg7)
    int32_t var_10_2 = arg1
    void* eax_3 = sub_44e5c0(edi + 0x288)
    
    if (eax_3 != 0)
        sub_44eaf0(eax_3, eax_1)
        (*(*eax_1 + 4))()
        int32_t eax_5
        eax_5.b = 1
        return eax_5
    
    (*(*eax_1 + 4))()

eax_1.b = 0
return eax_1
