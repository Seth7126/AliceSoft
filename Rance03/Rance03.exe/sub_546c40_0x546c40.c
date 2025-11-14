// 函数: sub_546c40
// 地址: 0x546c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** eax

if (*(arg1 + 0x48) != 0 && *(arg1 + 0x4c) == 0)
    int32_t ecx_1
    int32_t edx_1
    eax, ecx_1, edx_1 = sub_56a490(*(arg1 + 0x48), *(arg2 + 0x12c), arg2, *(arg2 + 0x128), arg3, 
        arg4, arg5, arg6, arg7, arg8, arg9)
    
    if (eax.b == 0)
        sub_59f4e0(eax, edx_1, ecx_1, 0x6e3c60, arg1)
        enum MESSAGEBOX_RESULT eax_2
        eax_2.b = 0
        return eax_2

eax.b = 1
return eax
