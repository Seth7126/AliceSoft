// 函数: sub_429000
// 地址: 0x429000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]

if (arg2 u< ecx)
    int32_t eax_1 = *arg1
    
    if (eax_1 u<= arg2)
        if (ecx == arg1[2])
            int32_t var_c_1 = ecx
            sub_4291a0(arg1)
        
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 =
            sub_4298c0(arg1[1], *arg1 + (arg2 - eax_1) s/ 0x28 * 0x28)
        arg1[1] += 0x28
        return eax_5

if (ecx == arg1[2])
    int32_t var_c_3 = ecx
    sub_4291a0(arg1)

struct _EXCEPTION_REGISTRATION_RECORD** eax_6 = sub_4298c0(arg1[1], arg2)
arg1[1] += 0x28
return eax_6
