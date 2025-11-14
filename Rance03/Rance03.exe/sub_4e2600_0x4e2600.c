// 函数: sub_4e2600
// 地址: 0x4e2600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
void* eax = sub_4a4020(*(arg1 + 0x98))

if (*(eax + 0x30) != 0)
    *(eax + 0x30) = 0
    *(*(eax + 0x34) + 0x14) = 1

if (*(arg1 + 0x204) s> 0)
    sub_4e2a10(arg1, 1)
    sub_4e2a10(arg1, 2)
    return sub_4e2a10(arg1, 3)

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x98)

if (result[0x23].b == 0)
    return result

result[0x23].b = 0
result[0x1c].b = 1
return result
