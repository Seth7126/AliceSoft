// 函数: sub_4b4c20
// 地址: 0x4b4c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CGUIMessageVariable::VTable** ecx = arg1[1]

if (arg2 u< ecx)
    int32_t eax_1 = *arg1
    
    if (eax_1 u<= arg2)
        if (ecx == arg1[2])
            struct partsengine::CGUIMessageVariable::VTable** var_c_1 = ecx
            ecx = sub_4b4c90(arg1)
        
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 =
            sub_4b4ea0(ecx, arg1[1], (arg2 - eax_1) s/ 0x2c * 0x2c + *arg1)
        arg1[1] += 0x2c
        return eax_5

if (ecx == arg1[2])
    struct partsengine::CGUIMessageVariable::VTable** var_c_3 = ecx
    ecx = sub_4b4c90(arg1)

struct _EXCEPTION_REGISTRATION_RECORD** eax_6 = sub_4b4ea0(ecx, arg1[1], arg2)
arg1[1] += 0x2c
return eax_6
