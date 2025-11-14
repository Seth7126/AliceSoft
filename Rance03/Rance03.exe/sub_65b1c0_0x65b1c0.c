// 函数: sub_65b1c0
// 地址: 0x65b1c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 s<= 0x20)
    int32_t* var_1c = arg3
    int32_t* var_20 = arg6
    return sub_65dd50(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_3 - edx) s>> 1
void* ebp_2 = &arg3[edi_1 * 0x30]
int32_t eax_5 = sub_65baa0(arg5)
struct _EXCEPTION_REGISTRATION_RECORD** eax_7
int32_t esi_1

if (edi_1 s> eax_5)
    sub_65b1c0(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_7 = sub_65b1c0(esi_1, arg5, arg6)
else
    esi_1 = arg4 - edi_1
    eax_7 = sub_65baf0(sub_65baf0(eax_5, ebp_2, arg3, edi_1, arg5, arg6), arg2, ebp_2, esi_1, arg5, 
        arg6)

return sub_65bbc0(eax_7, ebp_2, arg3, arg2, edi_1, esi_1, arg5, arg6)
