// 函数: sub_433f30
// 地址: 0x433f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** result = data_75d4bc

if (result[8] == 0)
    return result

void* eax = sub_434b80(&result[3], arg1)
void* edi_1

if (eax != 0)
    edi_1 = sub_4375d0(eax, arg2)
else
    edi_1 = eax + 1

void* eax_2 = sub_434b80(&result[3], arg1)

if (eax_2 != 0)
    return sub_433fb0(&result[4], edi_1, sub_437630(eax_2, arg2))

return sub_433fb0(&result[4], edi_1, 1)
