// 函数: sub_424310
// 地址: 0x424310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = arg1[1]

if (arg2 u< ecx)
    int32_t eax_1 = *arg1
    
    if (eax_1 u<= arg2)
        if (ecx == arg1[2])
            int32_t* var_c_1 = ecx
            sub_424380(arg1)
        
        int32_t ecx_2 = (arg2 - eax_1) s/ 0x24 * 9
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 =
            sub_4244e0(ecx_2, arg1[1], *arg1 + (ecx_2 << 2))
        arg1[1] += 0x24
        return eax_5

if (ecx == arg1[2])
    int32_t* var_c_3 = ecx
    ecx = sub_424380(arg1)

struct _EXCEPTION_REGISTRATION_RECORD** eax_6 = sub_4244e0(ecx, arg1[1], arg2)
arg1[1] += 0x24
return eax_6
