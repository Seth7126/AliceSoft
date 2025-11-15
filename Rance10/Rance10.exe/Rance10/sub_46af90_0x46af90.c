// 函数: sub_46af90
// 地址: 0x46af90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
struct exfile::CDefineData::VTable** eax = sub_46aa00(ecx, arg1)

if (eax == 0)
    eax.b = 0
    return eax

int32_t ebx
ebx.b = arg3
eax[0xd] = 4
struct exfile::CFormatData::VTable** i

if (ebx.b != 0)
    for (i = eax[0x19]; i != eax[0x1a]; i = &i[1])
        if ((*i)->__offset(0x5).b != 0)
            goto label_46afdf

i = sub_46b3a0(&eax[0x18], arg2)

if (i == 0)
label_46afdf:
    i.b = 0
    return i

*(i + 5) = ebx.b
i[2] = 3
i.b = 1
return i
