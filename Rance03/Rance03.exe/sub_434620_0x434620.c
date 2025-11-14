// 函数: sub_434620
// 地址: 0x434620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx
void* eax = sub_434b80(ecx, arg3)

if (eax == 0)
    eax.b = 0
    return eax

if ((*(eax + 0x70) - *(eax + 0x6c)) s>> 2 s<= arg4)
    int32_t eax_3
    eax_3.b = 0
    return eax_3

int32_t esi = *(eax + 0x6c)

if ((*(eax + 0x70) - esi) s>> 2 u> arg4)
    return sub_4347a0(*(esi + (arg4 << 2)), arg1, arg2, arg5)

sub_69a57f("invalid vector<T> subscript")
noreturn
