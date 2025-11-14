// 函数: sub_68d1b0
// 地址: 0x68d1b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 s<= 0x20)
    void* var_24 = arg3
    int32_t* var_28 = arg6
    return sub_68fef0(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_3 - edx) s>> 1
void* eax_5 = arg3 + edi_1 * 0x44
int32_t eax_6 = sub_68d5c0(arg5)
void* var_2c = edi_1
struct _EXCEPTION_REGISTRATION_RECORD** eax_8
void* esi_1

if (edi_1 s> eax_6)
    sub_68d1b0(var_2c, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_8 = sub_68d1b0(esi_1, arg5, arg6)
else
    esi_1 = arg4 - edi_1
    eax_8 = sub_68dbe0(sub_68dbe0(eax_6, eax_5, arg3, var_2c, arg5, arg6), arg2, eax_5, esi_1, 
        arg5, arg6)

return sub_68dcb0(eax_8, eax_5, arg3, arg2, edi_1, esi_1, arg5, arg6)
