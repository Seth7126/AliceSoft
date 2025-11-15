// 函数: sub_607160
// 地址: 0x607160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &sys43vm::CGlobalSaver::`vftable'
void* ecx = arg1[0x10]

if (ecx != 0)
    sub_403160(ecx, (arg1[0x12] - ecx) s>> 2, 4)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

void* ecx_1 = arg1[0xd]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[0xf] - ecx_1) s>> 2, 4)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

sub_606530(&arg1[0xa])
int32_t result = sub_417070(&arg1[7])
void* ecx_4 = arg1[4]

if (ecx_4 != 0)
    struct sys43vm::CGlobalSaver::VTable** var_c_1 = arg1
    void* var_10_3 = ecx_4
    sub_606dc0(ecx_4, arg1[5])
    void* ecx_5 = arg1[4]
    result = sub_403160(ecx_5, (arg1[6] - ecx_5) s>> 5, 0x20)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

void* ecx_6 = arg1[1]

if (ecx_6 != 0)
    struct sys43vm::CGlobalSaver::VTable** var_c_2 = arg1
    void* var_10_4 = ecx_6
    sub_570210(ecx_6, arg1[2])
    void* ecx_7 = arg1[1]
    result = sub_403160(ecx_7, (arg1[3] - ecx_7) s>> 4, 0x10)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
